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

// Function: sub_00300570
// Address: 0x300570 - 0x300698
void sub_00300570_0x300570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300570_0x300570");
#endif

    switch (ctx->pc) {
        case 0x3005a8u: goto label_3005a8;
        case 0x3005c8u: goto label_3005c8;
        case 0x300600u: goto label_300600;
        case 0x30061cu: goto label_30061c;
        case 0x30066cu: goto label_30066c;
        default: break;
    }

    ctx->pc = 0x300570u;

    // 0x300570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x300570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x300574: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x300574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x300578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x300578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30057c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30057cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x300580: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x300580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300584: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x300584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x300588: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x300588u;
    {
        const bool branch_taken_0x300588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300588u;
        // 0x30058c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300588) {
            ctx->pc = 0x3005A0u;
            goto label_3005a0;
        }
    }
    ctx->pc = 0x300590u;
    // 0x300590: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x300590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x300594: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x300594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x300598: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x300598u;
    {
        const bool branch_taken_0x300598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300598) {
            ctx->pc = 0x30059Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300598u;
            // 0x30059c: 0x8e030848  lw          $v1, 0x848($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3005E0u;
            goto label_3005e0;
        }
    }
    ctx->pc = 0x3005A0u;
label_3005a0:
    // 0x3005a0: 0xc0c01a6  jal         func_300698
    ctx->pc = 0x3005A0u;
    SET_GPR_U32(ctx, 31, 0x3005A8u);
    ctx->pc = 0x3005A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3005A0u;
    // 0x3005a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300698u, 0x3005A0u, 0x3005A8u)) {
        return;
    }
    ctx->pc = 0x3005A8u;
label_3005a8:
    // 0x3005a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3005a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3005ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3005acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3005b0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3005b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3005b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3005b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3005b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3005b8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x3005bc: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x3005bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x3005c0: 0xc0c00c2  jal         func_300308
    ctx->pc = 0x3005C0u;
    SET_GPR_U32(ctx, 31, 0x3005C8u);
    ctx->pc = 0x3005C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3005C0u;
    // 0x3005c4: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300308u, 0x3005C0u, 0x3005C8u)) {
        return;
    }
    ctx->pc = 0x3005C8u;
label_3005c8:
    // 0x3005c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3005c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3005cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3005ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3005d0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3005d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3005d4: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x3005d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x3005d8: 0xae03084c  sw          $v1, 0x84C($s0)
    ctx->pc = 0x3005d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 3));
    // 0x3005dc: 0x8e030848  lw          $v1, 0x848($s0)
    ctx->pc = 0x3005dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_3005e0:
    // 0x3005e0: 0x111023  negu        $v0, $s1
    ctx->pc = 0x3005e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x3005e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3005e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3005e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3005e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3005ec: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x3005ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x3005f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3005f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3005f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3005F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3005F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005F4u;
        // 0x3005f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3005F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3005FCu;
    // 0x3005fc: 0x0  nop
    ctx->pc = 0x3005fcu;
    // NOP
label_300600:
    // 0x300600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x300600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x300604: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x300604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x300608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x300608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30060c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30060cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300610: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x300610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x300614: 0xc0c01a6  jal         func_300698
    ctx->pc = 0x300614u;
    SET_GPR_U32(ctx, 31, 0x30061Cu);
    ctx->pc = 0x300618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300614u;
    // 0x300618: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300698u, 0x300614u, 0x30061Cu)) {
        return;
    }
    ctx->pc = 0x30061Cu;
label_30061c:
    // 0x30061c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x30061cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x300620: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x300620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x300624: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x300624u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x300628: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x300628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x30062c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x30062cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 16)); // MMIO: 0x10002000
    // 0x300630: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x300630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x300634: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x300634u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x300638: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x300638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x30063c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30063Cu;
    {
        const bool branch_taken_0x30063c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x300640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30063Cu;
        // 0x300640: 0xae30082c  sw          $s0, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30063c) {
            ctx->pc = 0x300658u;
            goto label_300658;
        }
    }
    ctx->pc = 0x300644u;
    // 0x300644: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x300644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x300648: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x300648u;
    {
        const bool branch_taken_0x300648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x300648) {
            ctx->pc = 0x30064Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300648u;
            // 0x30064c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300664u;
            goto label_300664;
        }
    }
    ctx->pc = 0x300650u;
    // 0x300650: 0x16040003  bne         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300650u;
    {
        const bool branch_taken_0x300650 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x300654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300650u;
        // 0x300654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300650) {
            ctx->pc = 0x300660u;
            goto label_300660;
        }
    }
    ctx->pc = 0x300658u;
label_300658:
    // 0x300658: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x300658u;
    {
        const bool branch_taken_0x300658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300658u;
        // 0x30065c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300658) {
            ctx->pc = 0x300664u;
            goto label_300664;
        }
    }
    ctx->pc = 0x300660u;
label_300660:
    // 0x300660: 0xae220828  sw          $v0, 0x828($s1)
    ctx->pc = 0x300660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
label_300664:
    // 0x300664: 0xc0c00c2  jal         func_300308
    ctx->pc = 0x300664u;
    SET_GPR_U32(ctx, 31, 0x30066Cu);
    ctx->pc = 0x300668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300664u;
    // 0x300668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300308u, 0x300664u, 0x30066Cu)) {
        return;
    }
    ctx->pc = 0x30066Cu;
label_30066c:
    // 0x30066c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30066cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300670: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x300670u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x300674: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x300674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x300678: 0xae23084c  sw          $v1, 0x84C($s1)
    ctx->pc = 0x300678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 3));
    // 0x30067c: 0xae220848  sw          $v0, 0x848($s1)
    ctx->pc = 0x30067cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
    // 0x300680: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x300680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300684: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x300684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x300688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30068c: 0x3e00008  jr          $ra
    ctx->pc = 0x30068Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30068Cu;
        // 0x300690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30068Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300694u;
    // 0x300694: 0x0  nop
    ctx->pc = 0x300694u;
    // NOP
    ctx->pc = 0x300698u;
}
