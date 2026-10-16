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

// Function: sub_001D9F88
// Address: 0x1d9f88 - 0x1da070
void sub_001D9F88_0x1d9f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9F88_0x1d9f88");
#endif

    switch (ctx->pc) {
        case 0x1d9facu: goto label_1d9fac;
        case 0x1d9fccu: goto label_1d9fcc;
        case 0x1da010u: goto label_1da010;
        case 0x1da060u: goto label_1da060;
        default: break;
    }

    ctx->pc = 0x1d9f88u;

    // 0x1d9f88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9f8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d9f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d9f90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d9f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d9f94: 0x14a20032  bne         $a1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D9F94u;
    {
        const bool branch_taken_0x1d9f94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F94u;
        // 0x1d9f98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f94) {
            ctx->pc = 0x1DA060u;
            goto label_1da060;
        }
    }
    ctx->pc = 0x1D9F9Cu;
    // 0x1d9f9c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D9F9Cu;
    {
        const bool branch_taken_0x1d9f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F9Cu;
        // 0x1d9fa0: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f9c) {
            ctx->pc = 0x1D9FF0u;
            goto label_1d9ff0;
        }
    }
    ctx->pc = 0x1D9FA4u;
    // 0x1d9fa4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D9FA4u;
    SET_GPR_U32(ctx, 31, 0x1D9FACu);
    ctx->pc = 0x1D9FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9FA4u;
    // 0x1d9fa8: 0x24848ca8  addiu       $a0, $a0, -0x7358 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D9FA4u, 0x1D9FACu)) {
        return;
    }
    ctx->pc = 0x1D9FACu;
label_1d9fac:
    // 0x1d9fac: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d9facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d9fb0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d9fb4: 0x24638290  addiu       $v1, $v1, -0x7D70
    ctx->pc = 0x1d9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
    // 0x1d9fb8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d9fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338298u));
    // 0x1d9fbc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9FBCu;
    {
        const bool branch_taken_0x1d9fbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FBCu;
        // 0x1d9fc0: 0x24508cb0  addiu       $s0, $v0, -0x7350 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9fbc) {
            ctx->pc = 0x1D9FD4u;
            goto label_1d9fd4;
        }
    }
    ctx->pc = 0x1D9FC4u;
    // 0x1d9fc4: 0xc076936  jal         func_1DA4D8
    ctx->pc = 0x1D9FC4u;
    SET_GPR_U32(ctx, 31, 0x1D9FCCu);
    ctx->pc = 0x1D9FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9FC4u;
    // 0x1d9fc8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA4D8u, 0x1D9FC4u, 0x1D9FCCu)) {
        return;
    }
    ctx->pc = 0x1D9FCCu;
label_1d9fcc:
    // 0x1d9fcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9FCCu;
    {
        const bool branch_taken_0x1d9fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FCCu;
        // 0x1d9fd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9fcc) {
            ctx->pc = 0x1D9FDCu;
            goto label_1d9fdc;
        }
    }
    ctx->pc = 0x1D9FD4u;
label_1d9fd4:
    // 0x1d9fd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d9fd8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1d9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1d9fdc:
    // 0x1d9fdc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1d9fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1d9fe0: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x1d9fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x1d9fe4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9fe8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1D9FE8u;
    {
        const bool branch_taken_0x1d9fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FE8u;
        // 0x1d9fec: 0xac420004  sw          $v0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9fe8) {
            ctx->pc = 0x1DA060u;
            goto label_1da060;
        }
    }
    ctx->pc = 0x1D9FF0u;
label_1d9ff0:
    // 0x1d9ff0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d9ff4: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d9ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1d9ff8: 0x8c438cb0  lw          $v1, -0x7350($v0)
    ctx->pc = 0x1d9ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8CB0u));
    // 0x1d9ffc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d9ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da000: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1DA000u;
    {
        const bool branch_taken_0x1da000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA000u;
        // 0x1da004: 0x24478cb0  addiu       $a3, $v0, -0x7350 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da000) {
            ctx->pc = 0x1DA02Cu;
            goto label_1da02c;
        }
    }
    ctx->pc = 0x1DA008u;
    // 0x1da008: 0x24c58290  addiu       $a1, $a2, -0x7D70
    ctx->pc = 0x1da008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935184));
    // 0x1da00c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1da00cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da010:
    // 0x1da010: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1da010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1da014: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1da014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da018: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1da018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1da01c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1da01cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1da020: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1da020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da024: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DA024u;
    {
        const bool branch_taken_0x1da024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA024u;
        // 0x1da028: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da024) {
            ctx->pc = 0x1DA010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da010;
        }
    }
    ctx->pc = 0x1DA02Cu;
label_1da02c:
    // 0x1da02c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1da02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da030: 0x24c68290  addiu       $a2, $a2, -0x7D70
    ctx->pc = 0x1da030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935184));
    // 0x1da034: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1da034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1da038: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1da038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da03c: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x1da03cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
    // 0x1da040: 0x24848ca8  addiu       $a0, $a0, -0x7358
    ctx->pc = 0x1da040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937768));
    // 0x1da044: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1da044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da048: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1da048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x1da04c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1da04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da050: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1da050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1da054: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1da054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1da058: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1DA058u;
    SET_GPR_U32(ctx, 31, 0x1DA060u);
    ctx->pc = 0x1DA05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA058u;
    // 0x1da05c: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1DA058u, 0x1DA060u)) {
        return;
    }
    ctx->pc = 0x1DA060u;
label_1da060:
    // 0x1da060: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1da060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da068: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA068u;
        // 0x1da06c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA070u;
}
