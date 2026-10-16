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

// Function: sub_00209368
// Address: 0x209368 - 0x2094e0
void sub_00209368_0x209368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209368_0x209368");
#endif

    switch (ctx->pc) {
        case 0x209368u: goto label_209368;
        case 0x20936cu: goto label_20936c;
        case 0x209370u: goto label_209370;
        case 0x209374u: goto label_209374;
        case 0x209378u: goto label_209378;
        case 0x20937cu: goto label_20937c;
        case 0x209380u: goto label_209380;
        case 0x209384u: goto label_209384;
        case 0x209388u: goto label_209388;
        case 0x20938cu: goto label_20938c;
        case 0x209390u: goto label_209390;
        case 0x209394u: goto label_209394;
        case 0x209398u: goto label_209398;
        case 0x20939cu: goto label_20939c;
        case 0x2093a0u: goto label_2093a0;
        case 0x2093a4u: goto label_2093a4;
        case 0x2093a8u: goto label_2093a8;
        case 0x2093acu: goto label_2093ac;
        case 0x2093b0u: goto label_2093b0;
        case 0x2093b4u: goto label_2093b4;
        case 0x2093b8u: goto label_2093b8;
        case 0x2093bcu: goto label_2093bc;
        case 0x2093c0u: goto label_2093c0;
        case 0x2093c4u: goto label_2093c4;
        case 0x2093c8u: goto label_2093c8;
        case 0x2093ccu: goto label_2093cc;
        case 0x2093d0u: goto label_2093d0;
        case 0x2093d4u: goto label_2093d4;
        case 0x2093d8u: goto label_2093d8;
        case 0x2093dcu: goto label_2093dc;
        case 0x2093e0u: goto label_2093e0;
        case 0x2093e4u: goto label_2093e4;
        case 0x2093e8u: goto label_2093e8;
        case 0x2093ecu: goto label_2093ec;
        case 0x2093f0u: goto label_2093f0;
        case 0x2093f4u: goto label_2093f4;
        case 0x2093f8u: goto label_2093f8;
        case 0x2093fcu: goto label_2093fc;
        case 0x209400u: goto label_209400;
        case 0x209404u: goto label_209404;
        case 0x209408u: goto label_209408;
        case 0x20940cu: goto label_20940c;
        case 0x209410u: goto label_209410;
        case 0x209414u: goto label_209414;
        case 0x209418u: goto label_209418;
        case 0x20941cu: goto label_20941c;
        case 0x209420u: goto label_209420;
        case 0x209424u: goto label_209424;
        case 0x209428u: goto label_209428;
        case 0x20942cu: goto label_20942c;
        case 0x209430u: goto label_209430;
        case 0x209434u: goto label_209434;
        case 0x209438u: goto label_209438;
        case 0x20943cu: goto label_20943c;
        case 0x209440u: goto label_209440;
        case 0x209444u: goto label_209444;
        case 0x209448u: goto label_209448;
        case 0x20944cu: goto label_20944c;
        case 0x209450u: goto label_209450;
        case 0x209454u: goto label_209454;
        case 0x209458u: goto label_209458;
        case 0x20945cu: goto label_20945c;
        case 0x209460u: goto label_209460;
        case 0x209464u: goto label_209464;
        case 0x209468u: goto label_209468;
        case 0x20946cu: goto label_20946c;
        case 0x209470u: goto label_209470;
        case 0x209474u: goto label_209474;
        case 0x209478u: goto label_209478;
        case 0x20947cu: goto label_20947c;
        case 0x209480u: goto label_209480;
        case 0x209484u: goto label_209484;
        case 0x209488u: goto label_209488;
        case 0x20948cu: goto label_20948c;
        case 0x209490u: goto label_209490;
        case 0x209494u: goto label_209494;
        case 0x209498u: goto label_209498;
        case 0x20949cu: goto label_20949c;
        case 0x2094a0u: goto label_2094a0;
        case 0x2094a4u: goto label_2094a4;
        case 0x2094a8u: goto label_2094a8;
        case 0x2094acu: goto label_2094ac;
        case 0x2094b0u: goto label_2094b0;
        case 0x2094b4u: goto label_2094b4;
        case 0x2094b8u: goto label_2094b8;
        case 0x2094bcu: goto label_2094bc;
        case 0x2094c0u: goto label_2094c0;
        case 0x2094c4u: goto label_2094c4;
        case 0x2094c8u: goto label_2094c8;
        case 0x2094ccu: goto label_2094cc;
        case 0x2094d0u: goto label_2094d0;
        case 0x2094d4u: goto label_2094d4;
        case 0x2094d8u: goto label_2094d8;
        case 0x2094dcu: goto label_2094dc;
        default: break;
    }

    ctx->pc = 0x209368u;

label_209368:
    // 0x209368: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x209368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20936c:
    // 0x20936c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x20936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_209370:
    // 0x209370: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x209370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_209374:
    // 0x209374: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x209374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209378:
    // 0x209378: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x209378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_20937c:
    // 0x20937c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x20937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_209380:
    // 0x209380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_209384:
    // 0x209384: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x209384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_209388:
    // 0x209388: 0x8e720018  lw          $s2, 0x18($s3)
    ctx->pc = 0x209388u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_20938c:
    // 0x20938c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x20938cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_209390:
    // 0x209390: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_209394:
    if (ctx->pc == 0x209394u) {
        ctx->pc = 0x209394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209390u;
        // 0x209394: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209398u;
        goto label_209398;
    }
    ctx->pc = 0x209390u;
    {
        const bool branch_taken_0x209390 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x209394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209390u;
        // 0x209394: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209390) {
            ctx->pc = 0x2093B8u;
            goto label_2093b8;
        }
    }
    ctx->pc = 0x209398u;
label_209398:
    // 0x209398: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x209398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20939c:
    // 0x20939c: 0x40f809  jalr        $v0
label_2093a0:
    if (ctx->pc == 0x2093A0u) {
        ctx->pc = 0x2093A4u;
        goto label_2093a4;
    }
    ctx->pc = 0x20939Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2093A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20939Cu, 0x2093A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2093A4u;
label_2093a4:
    // 0x2093a4: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_2093a8:
    if (ctx->pc == 0x2093A8u) {
        ctx->pc = 0x2093A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093A4u;
        // 0x2093a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093ACu;
        goto label_2093ac;
    }
    ctx->pc = 0x2093A4u;
    {
        const bool branch_taken_0x2093a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093A4u;
        // 0x2093a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093a4) {
            ctx->pc = 0x2094C0u;
            goto label_2094c0;
        }
    }
    ctx->pc = 0x2093ACu;
label_2093ac:
    // 0x2093ac: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x2093acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2093b0:
    // 0x2093b0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2093b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2093b4:
    // 0x2093b4: 0x0  nop
    ctx->pc = 0x2093b4u;
    // NOP
label_2093b8:
    // 0x2093b8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2093b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2093bc:
    // 0x2093bc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2093bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2093c0:
    // 0x2093c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2093c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2093c4:
    // 0x2093c4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_2093c8:
    if (ctx->pc == 0x2093C8u) {
        ctx->pc = 0x2093C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093C4u;
        // 0x2093c8: 0x2a200  sll         $s4, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093CCu;
        goto label_2093cc;
    }
    ctx->pc = 0x2093C4u;
    {
        const bool branch_taken_0x2093c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2093C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093C4u;
        // 0x2093c8: 0x2a200  sll         $s4, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093c4) {
            ctx->pc = 0x2093E8u;
            goto label_2093e8;
        }
    }
    ctx->pc = 0x2093CCu;
label_2093cc:
    // 0x2093cc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2093ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2093d0:
    // 0x2093d0: 0x40f809  jalr        $v0
label_2093d4:
    if (ctx->pc == 0x2093D4u) {
        ctx->pc = 0x2093D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093D0u;
        // 0x2093d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093D8u;
        goto label_2093d8;
    }
    ctx->pc = 0x2093D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2093D8u);
        ctx->pc = 0x2093D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093D0u;
        // 0x2093d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2093D0u, 0x2093D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2093D8u;
label_2093d8:
    // 0x2093d8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_2093dc:
    if (ctx->pc == 0x2093DCu) {
        ctx->pc = 0x2093DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093D8u;
        // 0x2093dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093E0u;
        goto label_2093e0;
    }
    ctx->pc = 0x2093D8u;
    {
        const bool branch_taken_0x2093d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093D8u;
        // 0x2093dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093d8) {
            ctx->pc = 0x2094C0u;
            goto label_2094c0;
        }
    }
    ctx->pc = 0x2093E0u;
label_2093e0:
    // 0x2093e0: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x2093e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2093e4:
    // 0x2093e4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2093e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2093e8:
    // 0x2093e8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2093e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2093ec:
    // 0x2093ec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2093ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2093f0:
    // 0x2093f0: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x2093f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_2093f4:
    // 0x2093f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2093f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2093f8:
    // 0x2093f8: 0x12830008  beq         $s4, $v1, . + 4 + (0x8 << 2)
label_2093fc:
    if (ctx->pc == 0x2093FCu) {
        ctx->pc = 0x2093FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093F8u;
        // 0x2093fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209400u;
        goto label_209400;
    }
    ctx->pc = 0x2093F8u;
    {
        const bool branch_taken_0x2093f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x2093FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093F8u;
        // 0x2093fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093f8) {
            ctx->pc = 0x20941Cu;
            goto label_20941c;
        }
    }
    ctx->pc = 0x209400u;
label_209400:
    // 0x209400: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x209400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_209404:
    // 0x209404: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x209404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_209408:
    // 0x209408: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x209408u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20940c:
    // 0x20940c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x20940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_209410:
    // 0x209410: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x209410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_209414:
    // 0x209414: 0x60f809  jalr        $v1
label_209418:
    if (ctx->pc == 0x209418u) {
        ctx->pc = 0x209418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209414u;
        // 0x209418: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20941Cu;
        goto label_20941c;
    }
    ctx->pc = 0x209414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20941Cu);
        ctx->pc = 0x209418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209414u;
        // 0x209418: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209414u, 0x20941Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20941Cu;
label_20941c:
    // 0x20941c: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
label_209420:
    if (ctx->pc == 0x209420u) {
        ctx->pc = 0x209420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20941Cu;
        // 0x209420: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209424u;
        goto label_209424;
    }
    ctx->pc = 0x20941Cu;
    {
        const bool branch_taken_0x20941c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x20941c) {
            ctx->pc = 0x209420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20941Cu;
            // 0x209420: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209448u;
            goto label_209448;
        }
    }
    ctx->pc = 0x209424u;
label_209424:
    // 0x209424: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x209424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_209428:
    // 0x209428: 0x40f809  jalr        $v0
label_20942c:
    if (ctx->pc == 0x20942Cu) {
        ctx->pc = 0x20942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209428u;
        // 0x20942c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209430u;
        goto label_209430;
    }
    ctx->pc = 0x209428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209430u);
        ctx->pc = 0x20942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209428u;
        // 0x20942c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209428u, 0x209430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209430u;
label_209430:
    // 0x209430: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_209434:
    if (ctx->pc == 0x209434u) {
        ctx->pc = 0x209434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209430u;
        // 0x209434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209438u;
        goto label_209438;
    }
    ctx->pc = 0x209430u;
    {
        const bool branch_taken_0x209430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209430u;
        // 0x209434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209430) {
            ctx->pc = 0x2094C0u;
            goto label_2094c0;
        }
    }
    ctx->pc = 0x209438u;
label_209438:
    // 0x209438: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x209438u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20943c:
    // 0x20943c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x20943cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_209440:
    // 0x209440: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x209440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_209444:
    // 0x209444: 0x0  nop
    ctx->pc = 0x209444u;
    // NOP
label_209448:
    // 0x209448: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x209448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_20944c:
    // 0x20944c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20944cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_209450:
    // 0x209450: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_209454:
    if (ctx->pc == 0x209454u) {
        ctx->pc = 0x209454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209450u;
        // 0x209454: 0x2a200  sll         $s4, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209458u;
        goto label_209458;
    }
    ctx->pc = 0x209450u;
    {
        const bool branch_taken_0x209450 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x209454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209450u;
        // 0x209454: 0x2a200  sll         $s4, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209450) {
            ctx->pc = 0x209478u;
            goto label_209478;
        }
    }
    ctx->pc = 0x209458u;
label_209458:
    // 0x209458: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x209458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20945c:
    // 0x20945c: 0x40f809  jalr        $v0
label_209460:
    if (ctx->pc == 0x209460u) {
        ctx->pc = 0x209460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20945Cu;
        // 0x209460: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209464u;
        goto label_209464;
    }
    ctx->pc = 0x20945Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209464u);
        ctx->pc = 0x209460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20945Cu;
        // 0x209460: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20945Cu, 0x209464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209464u;
label_209464:
    // 0x209464: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_209468:
    if (ctx->pc == 0x209468u) {
        ctx->pc = 0x209468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209464u;
        // 0x209468: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20946Cu;
        goto label_20946c;
    }
    ctx->pc = 0x209464u;
    {
        const bool branch_taken_0x209464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209464) {
            ctx->pc = 0x209468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209464u;
            // 0x209468: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209474u;
            goto label_209474;
        }
    }
    ctx->pc = 0x20946Cu;
label_20946c:
    // 0x20946c: 0x10000014  b           . + 4 + (0x14 << 2)
label_209470:
    if (ctx->pc == 0x209470u) {
        ctx->pc = 0x209470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20946Cu;
        // 0x209470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209474u;
        goto label_209474;
    }
    ctx->pc = 0x20946Cu;
    {
        const bool branch_taken_0x20946c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20946Cu;
        // 0x209470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20946c) {
            ctx->pc = 0x2094C0u;
            goto label_2094c0;
        }
    }
    ctx->pc = 0x209474u;
label_209474:
    // 0x209474: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x209474u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_209478:
    // 0x209478: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x209478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_20947c:
    // 0x20947c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20947cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_209480:
    // 0x209480: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x209480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_209484:
    // 0x209484: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x209484u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_209488:
    // 0x209488: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x209488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20948c:
    // 0x20948c: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x20948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_209490:
    // 0x209490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209494:
    // 0x209494: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x209494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_209498:
    // 0x209498: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x209498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20949c:
    // 0x20949c: 0xac540018  sw          $s4, 0x18($v0)
    ctx->pc = 0x20949cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 20));
label_2094a0:
    // 0x2094a0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2094a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2094a4:
    // 0x2094a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2094a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2094a8:
    // 0x2094a8: 0x40f809  jalr        $v0
label_2094ac:
    if (ctx->pc == 0x2094ACu) {
        ctx->pc = 0x2094ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094A8u;
        // 0x2094ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094B0u;
        goto label_2094b0;
    }
    ctx->pc = 0x2094A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2094B0u);
        ctx->pc = 0x2094ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094A8u;
        // 0x2094ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2094A8u, 0x2094B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2094B0u;
label_2094b0:
    // 0x2094b0: 0xae740114  sw          $s4, 0x114($s3)
    ctx->pc = 0x2094b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 20));
label_2094b4:
    // 0x2094b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2094b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2094b8:
    // 0x2094b8: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2094b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_2094bc:
    // 0x2094bc: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2094bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_2094c0:
    // 0x2094c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2094c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2094c4:
    // 0x2094c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2094c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2094c8:
    // 0x2094c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2094c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2094cc:
    // 0x2094cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2094ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2094d0:
    // 0x2094d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2094d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2094d4:
    // 0x2094d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2094d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2094d8:
    // 0x2094d8: 0x3e00008  jr          $ra
label_2094dc:
    if (ctx->pc == 0x2094DCu) {
        ctx->pc = 0x2094DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094D8u;
        // 0x2094dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094E0u;
        goto label_fallthrough_0x2094d8;
    }
    ctx->pc = 0x2094D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2094DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094D8u;
        // 0x2094dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2094D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2094d8:
    ctx->pc = 0x2094E0u;
}
