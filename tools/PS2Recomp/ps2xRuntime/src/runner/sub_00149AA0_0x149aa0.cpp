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

// Function: sub_00149AA0
// Address: 0x149aa0 - 0x149b48
void sub_00149AA0_0x149aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149AA0_0x149aa0");
#endif

    switch (ctx->pc) {
        case 0x149abcu: goto label_149abc;
        case 0x149ad0u: goto label_149ad0;
        case 0x149ae8u: goto label_149ae8;
        case 0x149b24u: goto label_149b24;
        default: break;
    }

    ctx->pc = 0x149aa0u;

    // 0x149aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149aa4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x149aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x149aa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x149aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x149aac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x149aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ab0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x149ab4: 0xc0524fa  jal         func_1493E8
    ctx->pc = 0x149AB4u;
    SET_GPR_U32(ctx, 31, 0x149ABCu);
    ctx->pc = 0x149AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149AB4u;
    // 0x149ab8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1493E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1493E8u, 0x149AB4u, 0x149ABCu)) {
        return;
    }
    ctx->pc = 0x149ABCu;
label_149abc:
    // 0x149abc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ac4: 0x8c46ee90  lw          $a2, -0x1170($v0)
    ctx->pc = 0x149ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BEE90u));
    // 0x149ac8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x149AC8u;
    SET_GPR_U32(ctx, 31, 0x149AD0u);
    ctx->pc = 0x149ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149AC8u;
    // 0x149acc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x149AC8u, 0x149AD0u)) {
        return;
    }
    ctx->pc = 0x149AD0u;
label_149ad0:
    // 0x149ad0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x149ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149ad4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149ad8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x149AD8u;
    {
        const bool branch_taken_0x149ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AD8u;
        // 0x149adc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ad8) {
            ctx->pc = 0x149B38u;
            goto label_149b38;
        }
    }
    ctx->pc = 0x149AE0u;
    // 0x149ae0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x149ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149ae4: 0x0  nop
    ctx->pc = 0x149ae4u;
    // NOP
label_149ae8:
    // 0x149ae8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x149ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x149aec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x149AECu;
    {
        const bool branch_taken_0x149aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AECu;
        // 0x149af0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149aec) {
            ctx->pc = 0x149B10u;
            goto label_149b10;
        }
    }
    ctx->pc = 0x149AF4u;
    // 0x149af4: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x149af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x149af8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x149af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x149afc: 0x80630008  lb          $v1, 0x8($v1)
    ctx->pc = 0x149afcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x149b00: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x149B00u;
    {
        const bool branch_taken_0x149b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149b00) {
            ctx->pc = 0x149B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149B00u;
            // 0x149b04: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149B08u;
            goto label_149b08;
        }
    }
    ctx->pc = 0x149B08u;
label_149b08:
    // 0x149b08: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x149b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149b0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x149b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_149b10:
    // 0x149b10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149b14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149b18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x149b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149b1c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x149B1Cu;
    SET_GPR_U32(ctx, 31, 0x149B24u);
    ctx->pc = 0x149B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B1Cu;
    // 0x149b20: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x149B1Cu, 0x149B24u)) {
        return;
    }
    ctx->pc = 0x149B24u;
label_149b24:
    // 0x149b24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x149b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149b28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x149b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149b2c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x149B2Cu;
    {
        const bool branch_taken_0x149b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B2Cu;
        // 0x149b30: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b2c) {
            ctx->pc = 0x149AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149ae8;
        }
    }
    ctx->pc = 0x149B34u;
    // 0x149b34: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x149b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_149b38:
    // 0x149b38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x149b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149b3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149b40: 0x3e00008  jr          $ra
    ctx->pc = 0x149B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B40u;
        // 0x149b44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149B48u;
}
