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

// Function: sub_001B0AB0
// Address: 0x1b0ab0 - 0x1b0b70
void sub_001B0AB0_0x1b0ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0AB0_0x1b0ab0");
#endif

    switch (ctx->pc) {
        case 0x1b0ac8u: goto label_1b0ac8;
        case 0x1b0b44u: goto label_1b0b44;
        default: break;
    }

    ctx->pc = 0x1b0ab0u;

    // 0x1b0ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0ab4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b0ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b0ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0abc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B0ABCu;
    {
        const bool branch_taken_0x1b0abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0ABCu;
        // 0x1b0ac0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0abc) {
            ctx->pc = 0x1B0B44u;
            goto label_1b0b44;
        }
    }
    ctx->pc = 0x1B0AC4u;
    // 0x1b0ac4: 0x0  nop
    ctx->pc = 0x1b0ac4u;
    // NOP
label_1b0ac8:
    // 0x1b0ac8: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1b0ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b0acc: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0ACCu;
    {
        const bool branch_taken_0x1b0acc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0ACCu;
        // 0x1b0ad0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0acc) {
            ctx->pc = 0x1B0AE8u;
            goto label_1b0ae8;
        }
    }
    ctx->pc = 0x1B0AD4u;
    // 0x1b0ad4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1b0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1b0ad8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1b0ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b0adc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0ae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0ae4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b0ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b0ae8:
    // 0x1b0ae8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1b0ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0aec: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B0AECu;
    {
        const bool branch_taken_0x1b0aec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AECu;
        // 0x1b0af0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0aec) {
            ctx->pc = 0x1B0B34u;
            goto label_1b0b34;
        }
    }
    ctx->pc = 0x1B0AF4u;
    // 0x1b0af4: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1b0af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b0af8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0AF8u;
    {
        const bool branch_taken_0x1b0af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0af8) {
            ctx->pc = 0x1B0AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0AF8u;
            // 0x1b0afc: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0B0Cu;
            goto label_1b0b0c;
        }
    }
    ctx->pc = 0x1B0B00u;
    // 0x1b0b00: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1b0b00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1b0b04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B0B04u;
    {
        const bool branch_taken_0x1b0b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B04u;
        // 0x1b0b08: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b04) {
            ctx->pc = 0x1B0B34u;
            goto label_1b0b34;
        }
    }
    ctx->pc = 0x1B0B0Cu;
label_1b0b0c:
    // 0x1b0b0c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1b0b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1b0b10: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1b0b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b0b14: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x1b0b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b0b18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0B18u;
    {
        const bool branch_taken_0x1b0b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B18u;
        // 0x1b0b1c: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b18) {
            ctx->pc = 0x1B0B28u;
            goto label_1b0b28;
        }
    }
    ctx->pc = 0x1B0B20u;
    // 0x1b0b20: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x1b0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b0b24: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1b0b24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1b0b28:
    // 0x1b0b28: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1b0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b0b2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b0b30: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x1b0b30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_1b0b34:
    // 0x1b0b34: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0B34u;
    {
        const bool branch_taken_0x1b0b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b34) {
            ctx->pc = 0x1B0B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0B34u;
            // 0x1b0b38: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0B48u;
            goto label_1b0b48;
        }
    }
    ctx->pc = 0x1B0B3Cu;
    // 0x1b0b3c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B0B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B0B44u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B0B3Cu, 0x1B0B44u)) {
        return;
    }
    ctx->pc = 0x1B0B44u;
label_1b0b44:
    // 0x1b0b44: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b0b48:
    // 0x1b0b48: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b0b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b0b4c: 0x5c60ffde  bgtzl       $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1B0B4Cu;
    {
        const bool branch_taken_0x1b0b4c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x1b0b4c) {
            ctx->pc = 0x1B0B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0B4Cu;
            // 0x1b0b50: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0ac8;
        }
    }
    ctx->pc = 0x1B0B54u;
    // 0x1b0b54: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b0b58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b0b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0b60: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1b0b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1b0b64: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1b0b64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1b0b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B68u;
        // 0x1b0b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0B70u;
}
