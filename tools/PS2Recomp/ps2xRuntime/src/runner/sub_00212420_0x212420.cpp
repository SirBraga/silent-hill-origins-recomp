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

// Function: sub_00212420
// Address: 0x212420 - 0x212568
void sub_00212420_0x212420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212420_0x212420");
#endif

    switch (ctx->pc) {
        case 0x212420u: goto label_212420;
        case 0x212424u: goto label_212424;
        case 0x212428u: goto label_212428;
        case 0x21242cu: goto label_21242c;
        case 0x212430u: goto label_212430;
        case 0x212434u: goto label_212434;
        case 0x212438u: goto label_212438;
        case 0x21243cu: goto label_21243c;
        case 0x212440u: goto label_212440;
        case 0x212444u: goto label_212444;
        case 0x212448u: goto label_212448;
        case 0x21244cu: goto label_21244c;
        case 0x212450u: goto label_212450;
        case 0x212454u: goto label_212454;
        case 0x212458u: goto label_212458;
        case 0x21245cu: goto label_21245c;
        case 0x212460u: goto label_212460;
        case 0x212464u: goto label_212464;
        case 0x212468u: goto label_212468;
        case 0x21246cu: goto label_21246c;
        case 0x212470u: goto label_212470;
        case 0x212474u: goto label_212474;
        case 0x212478u: goto label_212478;
        case 0x21247cu: goto label_21247c;
        case 0x212480u: goto label_212480;
        case 0x212484u: goto label_212484;
        case 0x212488u: goto label_212488;
        case 0x21248cu: goto label_21248c;
        case 0x212490u: goto label_212490;
        case 0x212494u: goto label_212494;
        case 0x212498u: goto label_212498;
        case 0x21249cu: goto label_21249c;
        case 0x2124a0u: goto label_2124a0;
        case 0x2124a4u: goto label_2124a4;
        case 0x2124a8u: goto label_2124a8;
        case 0x2124acu: goto label_2124ac;
        case 0x2124b0u: goto label_2124b0;
        case 0x2124b4u: goto label_2124b4;
        case 0x2124b8u: goto label_2124b8;
        case 0x2124bcu: goto label_2124bc;
        case 0x2124c0u: goto label_2124c0;
        case 0x2124c4u: goto label_2124c4;
        case 0x2124c8u: goto label_2124c8;
        case 0x2124ccu: goto label_2124cc;
        case 0x2124d0u: goto label_2124d0;
        case 0x2124d4u: goto label_2124d4;
        case 0x2124d8u: goto label_2124d8;
        case 0x2124dcu: goto label_2124dc;
        case 0x2124e0u: goto label_2124e0;
        case 0x2124e4u: goto label_2124e4;
        case 0x2124e8u: goto label_2124e8;
        case 0x2124ecu: goto label_2124ec;
        case 0x2124f0u: goto label_2124f0;
        case 0x2124f4u: goto label_2124f4;
        case 0x2124f8u: goto label_2124f8;
        case 0x2124fcu: goto label_2124fc;
        case 0x212500u: goto label_212500;
        case 0x212504u: goto label_212504;
        case 0x212508u: goto label_212508;
        case 0x21250cu: goto label_21250c;
        case 0x212510u: goto label_212510;
        case 0x212514u: goto label_212514;
        case 0x212518u: goto label_212518;
        case 0x21251cu: goto label_21251c;
        case 0x212520u: goto label_212520;
        case 0x212524u: goto label_212524;
        case 0x212528u: goto label_212528;
        case 0x21252cu: goto label_21252c;
        case 0x212530u: goto label_212530;
        case 0x212534u: goto label_212534;
        case 0x212538u: goto label_212538;
        case 0x21253cu: goto label_21253c;
        case 0x212540u: goto label_212540;
        case 0x212544u: goto label_212544;
        case 0x212548u: goto label_212548;
        case 0x21254cu: goto label_21254c;
        case 0x212550u: goto label_212550;
        case 0x212554u: goto label_212554;
        case 0x212558u: goto label_212558;
        case 0x21255cu: goto label_21255c;
        case 0x212560u: goto label_212560;
        case 0x212564u: goto label_212564;
        default: break;
    }

    ctx->pc = 0x212420u;

label_212420:
    // 0x212420: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x212420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_212424:
    // 0x212424: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x212424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_212428:
    // 0x212428: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x212428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_21242c:
    // 0x21242c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21242cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_212430:
    // 0x212430: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x212430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_212434:
    // 0x212434: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x212434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_212438:
    // 0x212438: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x212438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_21243c:
    // 0x21243c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x21243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_212440:
    // 0x212440: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x212440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_212444:
    // 0x212444: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x212444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_212448:
    // 0x212448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21244c:
    // 0x21244c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x21244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_212450:
    // 0x212450: 0x1a600039  blez        $s3, . + 4 + (0x39 << 2)
label_212454:
    if (ctx->pc == 0x212454u) {
        ctx->pc = 0x212454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212450u;
        // 0x212454: 0x8e320018  lw          $s2, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212458u;
        goto label_212458;
    }
    ctx->pc = 0x212450u;
    {
        const bool branch_taken_0x212450 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x212454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212450u;
        // 0x212454: 0x8e320018  lw          $s2, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212450) {
            ctx->pc = 0x212538u;
            goto label_212538;
        }
    }
    ctx->pc = 0x212458u;
label_212458:
    // 0x212458: 0x9e420004  lwu         $v0, 0x4($s2)
    ctx->pc = 0x212458u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_21245c:
    // 0x21245c: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x21245cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_212460:
    // 0x212460: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_212464:
    if (ctx->pc == 0x212464u) {
        ctx->pc = 0x212464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212460u;
        // 0x212464: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212468u;
        goto label_212468;
    }
    ctx->pc = 0x212460u;
    {
        const bool branch_taken_0x212460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212460u;
        // 0x212464: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212460) {
            ctx->pc = 0x212518u;
            goto label_212518;
        }
    }
    ctx->pc = 0x212468u;
label_212468:
    // 0x212468: 0x2417002a  addiu       $s7, $zero, 0x2A
    ctx->pc = 0x212468u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_21246c:
    // 0x21246c: 0x24160078  addiu       $s6, $zero, 0x78
    ctx->pc = 0x21246cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_212470:
    // 0x212470: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x212470u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_212474:
    // 0x212474: 0x241400d9  addiu       $s4, $zero, 0xD9
    ctx->pc = 0x212474u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
label_212478:
    // 0x212478: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x212478u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21247c:
    // 0x21247c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x21247cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_212480:
    // 0x212480: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x212480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_212484:
    // 0x212484: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x212484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_212488:
    // 0x212488: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x212488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_21248c:
    // 0x21248c: 0x262982f  dsubu       $s3, $s3, $v0
    ctx->pc = 0x21248cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 2));
label_212490:
    // 0x212490: 0xc093546  jal         func_24D518
label_212494:
    if (ctx->pc == 0x212494u) {
        ctx->pc = 0x212494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212490u;
        // 0x212494: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212498u;
        goto label_212498;
    }
    ctx->pc = 0x212490u;
    SET_GPR_U32(ctx, 31, 0x212498u);
    ctx->pc = 0x212494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212490u;
    // 0x212494: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x212490u, 0x212498u)) {
        return;
    }
    ctx->pc = 0x212498u;
label_212498:
    // 0x212498: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x212498u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21249c:
    // 0x21249c: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
label_2124a0:
    if (ctx->pc == 0x2124A0u) {
        ctx->pc = 0x2124A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21249Cu;
        // 0x2124a0: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2124A4u;
        goto label_2124a4;
    }
    ctx->pc = 0x21249Cu;
    {
        const bool branch_taken_0x21249c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21249c) {
            ctx->pc = 0x2124A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21249Cu;
            // 0x2124a0: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2124FCu;
            goto label_2124fc;
        }
    }
    ctx->pc = 0x2124A4u;
label_2124a4:
    // 0x2124a4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2124a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2124a8:
    // 0x2124a8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2124ac:
    if (ctx->pc == 0x2124ACu) {
        ctx->pc = 0x2124ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124A8u;
        // 0x2124ac: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2124B0u;
        goto label_2124b0;
    }
    ctx->pc = 0x2124A8u;
    {
        const bool branch_taken_0x2124a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2124a8) {
            ctx->pc = 0x2124ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2124A8u;
            // 0x2124ac: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2124CCu;
            goto label_2124cc;
        }
    }
    ctx->pc = 0x2124B0u;
label_2124b0:
    // 0x2124b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2124b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2124b4:
    // 0x2124b4: 0xac570014  sw          $s7, 0x14($v0)
    ctx->pc = 0x2124b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 23));
label_2124b8:
    // 0x2124b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2124b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2124bc:
    // 0x2124bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2124bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2124c0:
    // 0x2124c0: 0x40f809  jalr        $v0
label_2124c4:
    if (ctx->pc == 0x2124C4u) {
        ctx->pc = 0x2124C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124C0u;
        // 0x2124c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2124C8u;
        goto label_2124c8;
    }
    ctx->pc = 0x2124C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2124C8u);
        ctx->pc = 0x2124C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124C0u;
        // 0x2124c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2124C0u, 0x2124C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2124C8u;
label_2124c8:
    // 0x2124c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2124c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2124cc:
    // 0x2124cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2124ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2124d0:
    // 0x2124d0: 0xac760014  sw          $s6, 0x14($v1)
    ctx->pc = 0x2124d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 22));
label_2124d4:
    // 0x2124d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2124d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2124d8:
    // 0x2124d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2124d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2124dc:
    // 0x2124dc: 0x60f809  jalr        $v1
label_2124e0:
    if (ctx->pc == 0x2124E0u) {
        ctx->pc = 0x2124E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124DCu;
        // 0x2124e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2124E4u;
        goto label_2124e4;
    }
    ctx->pc = 0x2124DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2124E4u);
        ctx->pc = 0x2124E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124DCu;
        // 0x2124e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2124DCu, 0x2124E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2124E4u;
label_2124e4:
    // 0x2124e4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2124e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2124e8:
    // 0x2124e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2124e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2124ec:
    // 0x2124ec: 0xa0950000  sb          $s5, 0x0($a0)
    ctx->pc = 0x2124ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 21));
label_2124f0:
    // 0x2124f0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2124f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2124f4:
    // 0x2124f4: 0xa0540001  sb          $s4, 0x1($v0)
    ctx->pc = 0x2124f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 20));
label_2124f8:
    // 0x2124f8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2124f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2124fc:
    // 0x2124fc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2124fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_212500:
    // 0x212500: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x212500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_212504:
    // 0x212504: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x212504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_212508:
    // 0x212508: 0x9e420004  lwu         $v0, 0x4($s2)
    ctx->pc = 0x212508u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_21250c:
    // 0x21250c: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x21250cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_212510:
    // 0x212510: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_212514:
    if (ctx->pc == 0x212514u) {
        ctx->pc = 0x212514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212510u;
        // 0x212514: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212518u;
        goto label_212518;
    }
    ctx->pc = 0x212510u;
    {
        const bool branch_taken_0x212510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212510u;
        // 0x212514: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212510) {
            ctx->pc = 0x212478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212478;
        }
    }
    ctx->pc = 0x212518u;
label_212518:
    // 0x212518: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x212518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21251c:
    // 0x21251c: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x21251cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
label_212520:
    // 0x212520: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x212520u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_212524:
    // 0x212524: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x212524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_212528:
    // 0x212528: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x212528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21252c:
    // 0x21252c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x21252cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_212530:
    // 0x212530: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x212530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_212534:
    // 0x212534: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x212534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_212538:
    // 0x212538: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x212538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21253c:
    // 0x21253c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x21253cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_212540:
    // 0x212540: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x212540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_212544:
    // 0x212544: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x212544u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_212548:
    // 0x212548: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x212548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21254c:
    // 0x21254c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x21254cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_212550:
    // 0x212550: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x212550u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_212554:
    // 0x212554: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x212554u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_212558:
    // 0x212558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21255c:
    // 0x21255c: 0x3e00008  jr          $ra
label_212560:
    if (ctx->pc == 0x212560u) {
        ctx->pc = 0x212560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21255Cu;
        // 0x212560: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212564u;
        goto label_212564;
    }
    ctx->pc = 0x21255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21255Cu;
        // 0x212560: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21255Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212564u;
label_212564:
    // 0x212564: 0x0  nop
    ctx->pc = 0x212564u;
    // NOP
    ctx->pc = 0x212568u;
}
