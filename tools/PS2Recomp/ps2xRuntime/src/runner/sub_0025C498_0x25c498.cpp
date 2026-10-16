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

// Function: sub_0025C498
// Address: 0x25c498 - 0x25c540
void sub_0025C498_0x25c498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C498_0x25c498");
#endif

    switch (ctx->pc) {
        case 0x25c4d0u: goto label_25c4d0;
        case 0x25c4ecu: goto label_25c4ec;
        default: break;
    }

    ctx->pc = 0x25c498u;

    // 0x25c498: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x25c498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x25c49c: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x25c49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x25c4a0: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x25c4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x25c4a4: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x25c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x25c4a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25c4a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4ac: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x25c4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x25c4b0: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x25c4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x25c4b4: 0x8e70001c  lw          $s0, 0x1C($s3)
    ctx->pc = 0x25c4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x25c4b8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C4B8u;
    {
        const bool branch_taken_0x25c4b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4B8u;
        // 0x25c4bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4b8) {
            ctx->pc = 0x25C4C8u;
            goto label_25c4c8;
        }
    }
    ctx->pc = 0x25C4C0u;
    // 0x25c4c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25C4C0u;
    {
        const bool branch_taken_0x25c4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4C0u;
        // 0x25c4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4c0) {
            ctx->pc = 0x25C520u;
            goto label_25c520;
        }
    }
    ctx->pc = 0x25C4C8u;
label_25c4c8:
    // 0x25c4c8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x25c4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25c4d0:
    // 0x25c4d0: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25C4D0u;
    {
        const bool branch_taken_0x25c4d0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x25C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4D0u;
        // 0x25c4d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4d0) {
            ctx->pc = 0x25C500u;
            goto label_25c500;
        }
    }
    ctx->pc = 0x25C4D8u;
    // 0x25c4d8: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x25c4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x25c4dc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C4DCu;
    {
        const bool branch_taken_0x25c4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c4dc) {
            ctx->pc = 0x25C4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C4DCu;
            // 0x25c4e0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C4F4u;
            goto label_25c4f4;
        }
    }
    ctx->pc = 0x25C4E4u;
    // 0x25c4e4: 0xc096264  jal         func_258990
    ctx->pc = 0x25C4E4u;
    SET_GPR_U32(ctx, 31, 0x25C4ECu);
    ctx->pc = 0x258990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258990u, 0x25C4E4u, 0x25C4ECu)) {
        return;
    }
    ctx->pc = 0x25C4ECu;
label_25c4ec:
    // 0x25c4ec: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x25c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x25c4f0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x25c4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25c4f4:
    // 0x25c4f4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x25c4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x25c4f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25C4F8u;
    {
        const bool branch_taken_0x25c4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4F8u;
        // 0x25c4fc: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4f8) {
            ctx->pc = 0x25C514u;
            goto label_25c514;
        }
    }
    ctx->pc = 0x25C500u;
label_25c500:
    // 0x25c500: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x25c500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x25c504: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x25c504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x25c508: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25c508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25c50c: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x25c50cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25c510: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x25c510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_25c514:
    // 0x25c514: 0x643ffee  bgezl       $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x25C514u;
    {
        const bool branch_taken_0x25c514 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x25c514) {
            ctx->pc = 0x25C518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C514u;
            // 0x25c518: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c4d0;
        }
    }
    ctx->pc = 0x25C51Cu;
    // 0x25c51c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x25c51cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25c520:
    // 0x25c520: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x25c520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x25c524: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x25c524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25c528: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x25c528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25c52c: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x25c52cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x25c530: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x25c530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25c534: 0x3e00008  jr          $ra
    ctx->pc = 0x25C534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C534u;
        // 0x25c538: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C53Cu;
    // 0x25c53c: 0x0  nop
    ctx->pc = 0x25c53cu;
    // NOP
    ctx->pc = 0x25c540u;
}
