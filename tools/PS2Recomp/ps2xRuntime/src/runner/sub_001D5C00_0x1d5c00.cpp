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

// Function: sub_001D5C00
// Address: 0x1d5c00 - 0x1d5ce8
void sub_001D5C00_0x1d5c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5C00_0x1d5c00");
#endif

    switch (ctx->pc) {
        case 0x1d5c14u: goto label_1d5c14;
        case 0x1d5c28u: goto label_1d5c28;
        case 0x1d5c30u: goto label_1d5c30;
        case 0x1d5c3cu: goto label_1d5c3c;
        case 0x1d5c70u: goto label_1d5c70;
        case 0x1d5c84u: goto label_1d5c84;
        case 0x1d5c8cu: goto label_1d5c8c;
        case 0x1d5cb0u: goto label_1d5cb0;
        default: break;
    }

    ctx->pc = 0x1d5c00u;

    // 0x1d5c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5c04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d5c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5c0c: 0xc074b1c  jal         func_1D2C70
    ctx->pc = 0x1D5C0Cu;
    SET_GPR_U32(ctx, 31, 0x1D5C14u);
    ctx->pc = 0x1D5C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C0Cu;
    // 0x1d5c10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2C70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2C70u, 0x1D5C0Cu, 0x1D5C14u)) {
        return;
    }
    ctx->pc = 0x1D5C14u;
label_1d5c14:
    // 0x1d5c14: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d5c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d5c18: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1d5c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d5c1c: 0x246312b0  addiu       $v1, $v1, 0x12B0
    ctx->pc = 0x1d5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4784));
    // 0x1d5c20: 0xc0bc372  jal         func_2F0DC8
    ctx->pc = 0x1D5C20u;
    SET_GPR_U32(ctx, 31, 0x1D5C28u);
    ctx->pc = 0x1D5C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C20u;
    // 0x1d5c24: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0DC8u, 0x1D5C20u, 0x1D5C28u)) {
        return;
    }
    ctx->pc = 0x1D5C28u;
label_1d5c28:
    // 0x1d5c28: 0xc0c8484  jal         func_321210
    ctx->pc = 0x1D5C28u;
    SET_GPR_U32(ctx, 31, 0x1D5C30u);
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x1D5C28u, 0x1D5C30u)) {
        return;
    }
    ctx->pc = 0x1D5C30u;
label_1d5c30:
    // 0x1d5c30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c34: 0xc0c846c  jal         func_3211B0
    ctx->pc = 0x1D5C34u;
    SET_GPR_U32(ctx, 31, 0x1D5C3Cu);
    ctx->pc = 0x1D5C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C34u;
    // 0x1d5c38: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3211B0u, 0x1D5C34u, 0x1D5C3Cu)) {
        return;
    }
    ctx->pc = 0x1D5C3Cu;
label_1d5c3c:
    // 0x1d5c3c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d5c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d5c40: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d5c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d5c44: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d5c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1d5c48: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d5c4c: 0xac608838  sw          $zero, -0x77C8($v1)
    ctx->pc = 0x1d5c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6F8838u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8838u, _value); } while (0);
    // 0x1d5c50: 0x24042600  addiu       $a0, $zero, 0x2600
    ctx->pc = 0x1d5c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9728));
    // 0x1d5c54: 0xac408834  sw          $zero, -0x77CC($v0)
    ctx->pc = 0x1d5c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6F8834u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8834u, _value); } while (0);
    // 0x1d5c58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d5c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5c5c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1d5c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1d5c60: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1d5c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1d5c64: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d5c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d5c68: 0xc080924  jal         func_202490
    ctx->pc = 0x1D5C68u;
    SET_GPR_U32(ctx, 31, 0x1D5C70u);
    ctx->pc = 0x1D5C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C68u;
    // 0x1d5c6c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1D5C68u, 0x1D5C70u)) {
        return;
    }
    ctx->pc = 0x1D5C70u;
label_1d5c70:
    // 0x1d5c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c74: 0x24062600  addiu       $a2, $zero, 0x2600
    ctx->pc = 0x1d5c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9728));
    // 0x1d5c78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c7c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1D5C7Cu;
    SET_GPR_U32(ctx, 31, 0x1D5C84u);
    ctx->pc = 0x1D5C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C7Cu;
    // 0x1d5c80: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1D5C7Cu, 0x1D5C84u)) {
        return;
    }
    ctx->pc = 0x1D5C84u;
label_1d5c84:
    // 0x1d5c84: 0xc0758da  jal         func_1D6368
    ctx->pc = 0x1D5C84u;
    SET_GPR_U32(ctx, 31, 0x1D5C8Cu);
    ctx->pc = 0x1D5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C84u;
    // 0x1d5c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6368u, 0x1D5C84u, 0x1D5C8Cu)) {
        return;
    }
    ctx->pc = 0x1D5C8Cu;
label_1d5c8c:
    // 0x1d5c8c: 0x3c02dead  lui         $v0, 0xDEAD
    ctx->pc = 0x1d5c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57005 << 16));
    // 0x1d5c90: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x1d5c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1d5c94: 0x3442f00d  ori         $v0, $v0, 0xF00D
    ctx->pc = 0x1d5c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61453);
    // 0x1d5c98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c9c: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x1d5c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x1d5ca0: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1d5ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1d5ca4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1d5ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1d5ca8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1D5CA8u;
    SET_GPR_U32(ctx, 31, 0x1D5CB0u);
    ctx->pc = 0x1D5CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CA8u;
    // 0x1d5cac: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1D5CA8u, 0x1D5CB0u)) {
        return;
    }
    ctx->pc = 0x1D5CB0u;
label_1d5cb0:
    // 0x1d5cb0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d5cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d5cb4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d5cb8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d5cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d5cbc: 0xac40882c  sw          $zero, -0x77D4($v0)
    ctx->pc = 0x1d5cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6F882Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F882Cu, _value); } while (0);
    // 0x1d5cc0: 0xac608828  sw          $zero, -0x77D8($v1)
    ctx->pc = 0x1d5cc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6F8828u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8828u, _value); } while (0);
    // 0x1d5cc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d5cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cc8: 0xac808830  sw          $zero, -0x77D0($a0)
    ctx->pc = 0x1d5cc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6F8830u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8830u, _value); } while (0);
    // 0x1d5ccc: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x1d5cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x1d5cd0: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1d5cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1d5cd4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x1d5cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x1d5cd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d5cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CE0u;
        // 0x1d5ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5CE8u;
}
