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

// Function: sub_001FEC30
// Address: 0x1fec30 - 0x1fecd8
void sub_001FEC30_0x1fec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEC30_0x1fec30");
#endif

    switch (ctx->pc) {
        case 0x1fec70u: goto label_1fec70;
        case 0x1fecccu: goto label_1feccc;
        default: break;
    }

    ctx->pc = 0x1fec30u;

    // 0x1fec30: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1fec30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1fec34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fec34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fec38: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1fec38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fec3c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1fec3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec40: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1fec40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1fec44: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FEC44u;
    {
        const bool branch_taken_0x1fec44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FEC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC44u;
        // 0x1fec48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec44) {
            ctx->pc = 0x1FECCCu;
            goto label_1feccc;
        }
    }
    ctx->pc = 0x1FEC4Cu;
    // 0x1fec4c: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x1fec4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fec50: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FEC50u;
    {
        const bool branch_taken_0x1fec50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC50u;
        // 0x1fec54: 0x94a30004  lhu         $v1, 0x4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec50) {
            ctx->pc = 0x1FECCCu;
            goto label_1feccc;
        }
    }
    ctx->pc = 0x1FEC58u;
    // 0x1fec58: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1fec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1fec5c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FEC5Cu;
    {
        const bool branch_taken_0x1fec5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC5Cu;
        // 0x1fec60: 0x2467ffff  addiu       $a3, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec5c) {
            ctx->pc = 0x1FECCCu;
            goto label_1feccc;
        }
    }
    ctx->pc = 0x1FEC64u;
    // 0x1fec64: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1fec64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEC68u;
    {
        const bool branch_taken_0x1fec68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC68u;
        // 0x1fec6c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec68) {
            ctx->pc = 0x1FEC74u;
            goto label_1fec74;
        }
    }
    ctx->pc = 0x1FEC70u;
label_1fec70:
    // 0x1fec70: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1fec70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1fec74:
    // 0x1fec74: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FEC74u;
    {
        const bool branch_taken_0x1fec74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC74u;
        // 0x1fec78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec74) {
            ctx->pc = 0x1FECD0u;
            goto label_1fecd0;
        }
    }
    ctx->pc = 0x1FEC7Cu;
    // 0x1fec7c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fec80: 0x1448fffb  bne         $v0, $t0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FEC80u;
    {
        const bool branch_taken_0x1fec80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x1FEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC80u;
        // 0x1fec84: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec80) {
            ctx->pc = 0x1FEC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fec70;
        }
    }
    ctx->pc = 0x1FEC88u;
    // 0x1fec88: 0xa4a70004  sh          $a3, 0x4($a1)
    ctx->pc = 0x1fec88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1fec8c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fec90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fec94: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FEC94u;
    {
        const bool branch_taken_0x1fec94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC94u;
        // 0x1fec98: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec94) {
            ctx->pc = 0x1FECD0u;
            goto label_1fecd0;
        }
    }
    ctx->pc = 0x1FEC9Cu;
    // 0x1fec9c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1fec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1feca0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FECA0u;
    {
        const bool branch_taken_0x1feca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feca0) {
            ctx->pc = 0x1FECA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FECA0u;
            // 0x1feca4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FECB4u;
            goto label_1fecb4;
        }
    }
    ctx->pc = 0x1FECA8u;
    // 0x1feca8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1feca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1fecac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FECACu;
    {
        const bool branch_taken_0x1fecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECACu;
        // 0x1fecb0: 0xacc90030  sw          $t1, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecac) {
            ctx->pc = 0x1FECD0u;
            goto label_1fecd0;
        }
    }
    ctx->pc = 0x1FECB4u;
label_1fecb4:
    // 0x1fecb4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FECB4u;
    {
        const bool branch_taken_0x1fecb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fecb4) {
            ctx->pc = 0x1FECB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FECB4u;
            // 0x1fecb8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FECBCu;
            goto label_1fecbc;
        }
    }
    ctx->pc = 0x1FECBCu;
label_1fecbc:
    // 0x1fecbc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FECBCu;
    {
        const bool branch_taken_0x1fecbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fecbc) {
            ctx->pc = 0x1FECC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FECBCu;
            // 0x1fecc0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FECC4u;
            goto label_1fecc4;
        }
    }
    ctx->pc = 0x1FECC4u;
label_1fecc4:
    // 0x1fecc4: 0xc07fd88  jal         func_1FF620
    ctx->pc = 0x1FECC4u;
    SET_GPR_U32(ctx, 31, 0x1FECCCu);
    ctx->pc = 0x1FF620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF620u, 0x1FECC4u, 0x1FECCCu)) {
        return;
    }
    ctx->pc = 0x1FECCCu;
label_1feccc:
    // 0x1feccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fecccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fecd0:
    // 0x1fecd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FECD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECD0u;
        // 0x1fecd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FECD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FECD8u;
}
