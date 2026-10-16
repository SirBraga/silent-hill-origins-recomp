#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5CE8
// Address: 0x1d5ce8 - 0x1d5d98
void sub_001D5CE8_0x1d5ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5CE8_0x1d5ce8");
#endif

    switch (ctx->pc) {
        case 0x1d5d24u: goto label_1d5d24;
        case 0x1d5d2cu: goto label_1d5d2c;
        case 0x1d5d34u: goto label_1d5d34;
        case 0x1d5d40u: goto label_1d5d40;
        case 0x1d5d54u: goto label_1d5d54;
        case 0x1d5d5cu: goto label_1d5d5c;
        case 0x1d5d68u: goto label_1d5d68;
        case 0x1d5d70u: goto label_1d5d70;
        case 0x1d5d7cu: goto label_1d5d7c;
        default: break;
    }

    ctx->pc = 0x1d5ce8u;

    // 0x1d5ce8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d5ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d5cec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d5cf0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d5cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d5cf4: 0x244212b0  addiu       $v0, $v0, 0x12B0
    ctx->pc = 0x1d5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x1d5cf8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d5cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d5cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d5d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d5d04: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x1d5d04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x1d5d08: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d5d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d5d0c: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x1d5d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x1d5d10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5d14: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d5d14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d18: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d5d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d5d1c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1D5D1Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D24u);
    ctx->pc = 0x1D5D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D1Cu;
    // 0x1d5d20: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D5D1Cu, 0x1D5D24u)) {
        return;
    }
    ctx->pc = 0x1D5D24u;
label_1d5d24:
    // 0x1d5d24: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1D5D24u;
    SET_GPR_U32(ctx, 31, 0x1D5D2Cu);
    ctx->pc = 0x1D5D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D24u;
    // 0x1d5d28: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D5D24u, 0x1D5D2Cu)) {
        return;
    }
    ctx->pc = 0x1D5D2Cu;
label_1d5d2c:
    // 0x1d5d2c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1D5D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D34u);
    ctx->pc = 0x1D5D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D2Cu;
    // 0x1d5d30: 0x8e248834  lw          $a0, -0x77CC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D5D2Cu, 0x1D5D34u)) {
        return;
    }
    ctx->pc = 0x1D5D34u;
label_1d5d34:
    // 0x1d5d34: 0x8e448838  lw          $a0, -0x77C8($s2)
    ctx->pc = 0x1d5d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936632)));
    // 0x1d5d38: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1D5D38u;
    SET_GPR_U32(ctx, 31, 0x1D5D40u);
    ctx->pc = 0x1D5D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D38u;
    // 0x1d5d3c: 0xae208834  sw          $zero, -0x77CC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294936628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D5D38u, 0x1D5D40u)) {
        return;
    }
    ctx->pc = 0x1D5D40u;
label_1d5d40:
    // 0x1d5d40: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d5d44: 0xae408838  sw          $zero, -0x77C8($s2)
    ctx->pc = 0x1d5d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294936632), GPR_U32(ctx, 0));
    // 0x1d5d48: 0xac40883c  sw          $zero, -0x77C4($v0)
    ctx->pc = 0x1d5d48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6F883Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F883Cu, _value); } while (0);
    // 0x1d5d4c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1D5D4Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D54u);
    ctx->pc = 0x1D5D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D4Cu;
    // 0x1d5d50: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D5D4Cu, 0x1D5D54u)) {
        return;
    }
    ctx->pc = 0x1D5D54u;
label_1d5d54:
    // 0x1d5d54: 0xc0c8484  jal         func_321210
    ctx->pc = 0x1D5D54u;
    SET_GPR_U32(ctx, 31, 0x1D5D5Cu);
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x1D5D54u, 0x1D5D5Cu)) {
        return;
    }
    ctx->pc = 0x1D5D5Cu;
label_1d5d5c:
    // 0x1d5d5c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1d5d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5d60: 0xc0c846c  jal         func_3211B0
    ctx->pc = 0x1D5D60u;
    SET_GPR_U32(ctx, 31, 0x1D5D68u);
    ctx->pc = 0x1D5D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D60u;
    // 0x1d5d64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3211B0u, 0x1D5D60u, 0x1D5D68u)) {
        return;
    }
    ctx->pc = 0x1D5D68u;
label_1d5d68:
    // 0x1d5d68: 0xc0bc372  jal         func_2F0DC8
    ctx->pc = 0x1D5D68u;
    SET_GPR_U32(ctx, 31, 0x1D5D70u);
    ctx->pc = 0x1D5D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D68u;
    // 0x1d5d6c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0DC8u, 0x1D5D68u, 0x1D5D70u)) {
        return;
    }
    ctx->pc = 0x1D5D70u;
label_1d5d70:
    // 0x1d5d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d74: 0xc074b24  jal         func_1D2C90
    ctx->pc = 0x1D5D74u;
    SET_GPR_U32(ctx, 31, 0x1D5D7Cu);
    ctx->pc = 0x1D5D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D74u;
    // 0x1d5d78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2C90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2C90u, 0x1D5D74u, 0x1D5D7Cu)) {
        return;
    }
    ctx->pc = 0x1D5D7Cu;
label_1d5d7c:
    // 0x1d5d7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d5d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5d80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d5d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5d84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d5d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5d88: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d5d88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5d90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D90u;
        // 0x1d5d94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5D98u;
}
