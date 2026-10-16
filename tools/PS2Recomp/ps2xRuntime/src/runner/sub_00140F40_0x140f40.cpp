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

// Function: sub_00140F40
// Address: 0x140f40 - 0x140ff8
void sub_00140F40_0x140f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140F40_0x140f40");
#endif

    switch (ctx->pc) {
        case 0x140f68u: goto label_140f68;
        case 0x140f88u: goto label_140f88;
        case 0x140fb0u: goto label_140fb0;
        case 0x140fbcu: goto label_140fbc;
        case 0x140fc4u: goto label_140fc4;
        case 0x140fccu: goto label_140fcc;
        case 0x140fe0u: goto label_140fe0;
        default: break;
    }

    ctx->pc = 0x140f40u;

    // 0x140f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x140f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x140f44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x140f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x140f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140f54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x140f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140f58: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x140F58u;
    {
        const bool branch_taken_0x140f58 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x140F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F58u;
        // 0x140f5c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f58) {
            ctx->pc = 0x140F80u;
            goto label_140f80;
        }
    }
    ctx->pc = 0x140F60u;
    // 0x140f60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x140f64: 0x0  nop
    ctx->pc = 0x140f64u;
    // NOP
label_140f68:
    // 0x140f68: 0x0  nop
    ctx->pc = 0x140f68u;
    // NOP
    // 0x140f6c: 0x0  nop
    ctx->pc = 0x140f6cu;
    // NOP
    // 0x140f70: 0x0  nop
    ctx->pc = 0x140f70u;
    // NOP
    // 0x140f74: 0x0  nop
    ctx->pc = 0x140f74u;
    // NOP
    // 0x140f78: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x140F78u;
    {
        const bool branch_taken_0x140f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F78u;
        // 0x140f7c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f78) {
            ctx->pc = 0x140F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140f68;
        }
    }
    ctx->pc = 0x140F80u;
label_140f80:
    // 0x140f80: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x140F80u;
    SET_GPR_U32(ctx, 31, 0x140F88u);
    ctx->pc = 0x140F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140F80u;
    // 0x140f84: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x140F80u, 0x140F88u)) {
        return;
    }
    ctx->pc = 0x140F88u;
label_140f88:
    // 0x140f88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x140f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x140f8c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x140f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x140f90: 0x24a58448  addiu       $a1, $a1, -0x7BB8
    ctx->pc = 0x140f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935624));
    // 0x140f94: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x140f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x140f98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140f9c: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x140f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    // 0x140fa0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x140fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x140fa4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x140fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x140fa8: 0xc05eeb4  jal         func_17BAD0
    ctx->pc = 0x140FA8u;
    SET_GPR_U32(ctx, 31, 0x140FB0u);
    ctx->pc = 0x140FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140FA8u;
    // 0x140fac: 0x8e050044  lw          $a1, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BAD0u, 0x140FA8u, 0x140FB0u)) {
        return;
    }
    ctx->pc = 0x140FB0u;
label_140fb0:
    // 0x140fb0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x140fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x140fb4: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x140FB4u;
    SET_GPR_U32(ctx, 31, 0x140FBCu);
    ctx->pc = 0x140FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140FB4u;
    // 0x140fb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x140FB4u, 0x140FBCu)) {
        return;
    }
    ctx->pc = 0x140FBCu;
label_140fbc:
    // 0x140fbc: 0xc0898d2  jal         func_226348
    ctx->pc = 0x140FBCu;
    SET_GPR_U32(ctx, 31, 0x140FC4u);
    ctx->pc = 0x140FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140FBCu;
    // 0x140fc0: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x140FBCu, 0x140FC4u)) {
        return;
    }
    ctx->pc = 0x140FC4u;
label_140fc4:
    // 0x140fc4: 0xc095df4  jal         func_2577D0
    ctx->pc = 0x140FC4u;
    SET_GPR_U32(ctx, 31, 0x140FCCu);
    ctx->pc = 0x140FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140FC4u;
    // 0x140fc8: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2577D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2577D0u, 0x140FC4u, 0x140FCCu)) {
        return;
    }
    ctx->pc = 0x140FCCu;
label_140fcc:
    // 0x140fcc: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x140fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x140fd0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x140FD0u;
    {
        const bool branch_taken_0x140fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140fd0) {
            ctx->pc = 0x140FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140FD0u;
            // 0x140fd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140FE4u;
            goto label_140fe4;
        }
    }
    ctx->pc = 0x140FD8u;
    // 0x140fd8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x140FD8u;
    SET_GPR_U32(ctx, 31, 0x140FE0u);
    ctx->pc = 0x140FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140FD8u;
    // 0x140fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x140FD8u, 0x140FE0u)) {
        return;
    }
    ctx->pc = 0x140FE0u;
label_140fe0:
    // 0x140fe0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x140fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_140fe4:
    // 0x140fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140fec: 0x3e00008  jr          $ra
    ctx->pc = 0x140FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FECu;
        // 0x140ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140FF4u;
    // 0x140ff4: 0x0  nop
    ctx->pc = 0x140ff4u;
    // NOP
    ctx->pc = 0x140ff8u;
}
