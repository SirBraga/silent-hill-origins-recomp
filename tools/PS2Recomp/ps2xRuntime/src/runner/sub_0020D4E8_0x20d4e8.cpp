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

// Function: sub_0020D4E8
// Address: 0x20d4e8 - 0x20d680
void sub_0020D4E8_0x20d4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D4E8_0x20d4e8");
#endif

    switch (ctx->pc) {
        case 0x20d4e8u: goto label_20d4e8;
        case 0x20d4ecu: goto label_20d4ec;
        case 0x20d4f0u: goto label_20d4f0;
        case 0x20d4f4u: goto label_20d4f4;
        case 0x20d4f8u: goto label_20d4f8;
        case 0x20d4fcu: goto label_20d4fc;
        case 0x20d500u: goto label_20d500;
        case 0x20d504u: goto label_20d504;
        case 0x20d508u: goto label_20d508;
        case 0x20d50cu: goto label_20d50c;
        case 0x20d510u: goto label_20d510;
        case 0x20d514u: goto label_20d514;
        case 0x20d518u: goto label_20d518;
        case 0x20d51cu: goto label_20d51c;
        case 0x20d520u: goto label_20d520;
        case 0x20d524u: goto label_20d524;
        case 0x20d528u: goto label_20d528;
        case 0x20d52cu: goto label_20d52c;
        case 0x20d530u: goto label_20d530;
        case 0x20d534u: goto label_20d534;
        case 0x20d538u: goto label_20d538;
        case 0x20d53cu: goto label_20d53c;
        case 0x20d540u: goto label_20d540;
        case 0x20d544u: goto label_20d544;
        case 0x20d548u: goto label_20d548;
        case 0x20d54cu: goto label_20d54c;
        case 0x20d550u: goto label_20d550;
        case 0x20d554u: goto label_20d554;
        case 0x20d558u: goto label_20d558;
        case 0x20d55cu: goto label_20d55c;
        case 0x20d560u: goto label_20d560;
        case 0x20d564u: goto label_20d564;
        case 0x20d568u: goto label_20d568;
        case 0x20d56cu: goto label_20d56c;
        case 0x20d570u: goto label_20d570;
        case 0x20d574u: goto label_20d574;
        case 0x20d578u: goto label_20d578;
        case 0x20d57cu: goto label_20d57c;
        case 0x20d580u: goto label_20d580;
        case 0x20d584u: goto label_20d584;
        case 0x20d588u: goto label_20d588;
        case 0x20d58cu: goto label_20d58c;
        case 0x20d590u: goto label_20d590;
        case 0x20d594u: goto label_20d594;
        case 0x20d598u: goto label_20d598;
        case 0x20d59cu: goto label_20d59c;
        case 0x20d5a0u: goto label_20d5a0;
        case 0x20d5a4u: goto label_20d5a4;
        case 0x20d5a8u: goto label_20d5a8;
        case 0x20d5acu: goto label_20d5ac;
        case 0x20d5b0u: goto label_20d5b0;
        case 0x20d5b4u: goto label_20d5b4;
        case 0x20d5b8u: goto label_20d5b8;
        case 0x20d5bcu: goto label_20d5bc;
        case 0x20d5c0u: goto label_20d5c0;
        case 0x20d5c4u: goto label_20d5c4;
        case 0x20d5c8u: goto label_20d5c8;
        case 0x20d5ccu: goto label_20d5cc;
        case 0x20d5d0u: goto label_20d5d0;
        case 0x20d5d4u: goto label_20d5d4;
        case 0x20d5d8u: goto label_20d5d8;
        case 0x20d5dcu: goto label_20d5dc;
        case 0x20d5e0u: goto label_20d5e0;
        case 0x20d5e4u: goto label_20d5e4;
        case 0x20d5e8u: goto label_20d5e8;
        case 0x20d5ecu: goto label_20d5ec;
        case 0x20d5f0u: goto label_20d5f0;
        case 0x20d5f4u: goto label_20d5f4;
        case 0x20d5f8u: goto label_20d5f8;
        case 0x20d5fcu: goto label_20d5fc;
        case 0x20d600u: goto label_20d600;
        case 0x20d604u: goto label_20d604;
        case 0x20d608u: goto label_20d608;
        case 0x20d60cu: goto label_20d60c;
        case 0x20d610u: goto label_20d610;
        case 0x20d614u: goto label_20d614;
        case 0x20d618u: goto label_20d618;
        case 0x20d61cu: goto label_20d61c;
        case 0x20d620u: goto label_20d620;
        case 0x20d624u: goto label_20d624;
        case 0x20d628u: goto label_20d628;
        case 0x20d62cu: goto label_20d62c;
        case 0x20d630u: goto label_20d630;
        case 0x20d634u: goto label_20d634;
        case 0x20d638u: goto label_20d638;
        case 0x20d63cu: goto label_20d63c;
        case 0x20d640u: goto label_20d640;
        case 0x20d644u: goto label_20d644;
        case 0x20d648u: goto label_20d648;
        case 0x20d64cu: goto label_20d64c;
        case 0x20d650u: goto label_20d650;
        case 0x20d654u: goto label_20d654;
        case 0x20d658u: goto label_20d658;
        case 0x20d65cu: goto label_20d65c;
        case 0x20d660u: goto label_20d660;
        case 0x20d664u: goto label_20d664;
        case 0x20d668u: goto label_20d668;
        case 0x20d66cu: goto label_20d66c;
        case 0x20d670u: goto label_20d670;
        case 0x20d674u: goto label_20d674;
        case 0x20d678u: goto label_20d678;
        case 0x20d67cu: goto label_20d67c;
        default: break;
    }

    ctx->pc = 0x20d4e8u;

label_20d4e8:
    // 0x20d4e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20d4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_20d4ec:
    // 0x20d4ec: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20d4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20d4f0:
    // 0x20d4f0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x20d4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_20d4f4:
    // 0x20d4f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20d4f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d4f8:
    // 0x20d4f8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x20d4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_20d4fc:
    // 0x20d4fc: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x20d4fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_20d500:
    // 0x20d500: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x20d500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_20d504:
    // 0x20d504: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x20d504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_20d508:
    // 0x20d508: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x20d508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_20d50c:
    // 0x20d50c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x20d50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_20d510:
    // 0x20d510: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x20d510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_20d514:
    // 0x20d514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20d518:
    // 0x20d518: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20d518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20d51c:
    // 0x20d51c: 0x8e9501c4  lw          $s5, 0x1C4($s4)
    ctx->pc = 0x20d51cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 452)));
label_20d520:
    // 0x20d520: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x20d520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_20d524:
    // 0x20d524: 0x8e830138  lw          $v1, 0x138($s4)
    ctx->pc = 0x20d524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_20d528:
    // 0x20d528: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x20d528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
label_20d52c:
    // 0x20d52c: 0x8ea2005c  lw          $v0, 0x5C($s5)
    ctx->pc = 0x20d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_20d530:
    // 0x20d530: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20d530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_20d534:
    // 0x20d534: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_20d538:
    if (ctx->pc == 0x20D538u) {
        ctx->pc = 0x20D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D534u;
        // 0x20d538: 0x120f02d  daddu       $fp, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D53Cu;
        goto label_20d53c;
    }
    ctx->pc = 0x20D534u;
    {
        const bool branch_taken_0x20d534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D534u;
        // 0x20d538: 0x120f02d  daddu       $fp, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d534) {
            ctx->pc = 0x20D5B4u;
            goto label_20d5b4;
        }
    }
    ctx->pc = 0x20D53Cu;
label_20d53c:
    // 0x20d53c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x20d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_20d540:
    // 0x20d540: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20d540u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d544:
    // 0x20d544: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
label_20d548:
    if (ctx->pc == 0x20D548u) {
        ctx->pc = 0x20D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D544u;
        // 0x20d548: 0x8e9300d8  lw          $s3, 0xD8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D54Cu;
        goto label_20d54c;
    }
    ctx->pc = 0x20D544u;
    {
        const bool branch_taken_0x20d544 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D544u;
        // 0x20d548: 0x8e9300d8  lw          $s3, 0xD8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d544) {
            ctx->pc = 0x20D5B0u;
            goto label_20d5b0;
        }
    }
    ctx->pc = 0x20D54Cu;
label_20d54c:
    // 0x20d54c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20d54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20d550:
    // 0x20d550: 0x26b00034  addiu       $s0, $s5, 0x34
    ctx->pc = 0x20d550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
label_20d554:
    // 0x20d554: 0x26b1000c  addiu       $s1, $s5, 0xC
    ctx->pc = 0x20d554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_20d558:
    // 0x20d558: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d55c:
    // 0x20d55c: 0x0  nop
    ctx->pc = 0x20d55cu;
    // NOP
label_20d560:
    // 0x20d560: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20d560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20d564:
    // 0x20d564: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x20d564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_20d568:
    // 0x20d568: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20d568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d56c:
    // 0x20d56c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x20d56cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20d570:
    // 0x20d570: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20d570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20d574:
    // 0x20d574: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x20d574u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20d578:
    // 0x20d578: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x20d578u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_20d57c:
    // 0x20d57c: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x20d57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_20d580:
    // 0x20d580: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20d580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d584:
    // 0x20d584: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x20d584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_20d588:
    // 0x20d588: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x20d588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_20d58c:
    // 0x20d58c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x20d58cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_20d590:
    // 0x20d590: 0x26730054  addiu       $s3, $s3, 0x54
    ctx->pc = 0x20d590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_20d594:
    // 0x20d594: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x20d594u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20d598:
    // 0x20d598: 0x60f809  jalr        $v1
label_20d59c:
    if (ctx->pc == 0x20D59Cu) {
        ctx->pc = 0x20D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D598u;
        // 0x20d59c: 0x1063021  addu        $a2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D5A0u;
        goto label_20d5a0;
    }
    ctx->pc = 0x20D598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D5A0u);
        ctx->pc = 0x20D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D598u;
        // 0x20d59c: 0x1063021  addu        $a2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D598u, 0x20D5A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D5A0u;
label_20d5a0:
    // 0x20d5a0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x20d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_20d5a4:
    // 0x20d5a4: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x20d5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20d5a8:
    // 0x20d5a8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_20d5ac:
    if (ctx->pc == 0x20D5ACu) {
        ctx->pc = 0x20D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5A8u;
        // 0x20d5ac: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D5B0u;
        goto label_20d5b0;
    }
    ctx->pc = 0x20D5A8u;
    {
        const bool branch_taken_0x20d5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5A8u;
        // 0x20d5ac: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d5a8) {
            ctx->pc = 0x20D560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d560;
        }
    }
    ctx->pc = 0x20D5B0u;
label_20d5b0:
    // 0x20d5b0: 0xaea0005c  sw          $zero, 0x5C($s5)
    ctx->pc = 0x20d5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 0));
label_20d5b4:
    // 0x20d5b4: 0x8ea2005c  lw          $v0, 0x5C($s5)
    ctx->pc = 0x20d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_20d5b8:
    // 0x20d5b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20d5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20d5bc:
    // 0x20d5bc: 0x8e900138  lw          $s0, 0x138($s4)
    ctx->pc = 0x20d5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_20d5c0:
    // 0x20d5c0: 0x26a5000c  addiu       $a1, $s5, 0xC
    ctx->pc = 0x20d5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_20d5c4:
    // 0x20d5c4: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x20d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_20d5c8:
    // 0x20d5c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20d5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d5cc:
    // 0x20d5cc: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x20d5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_20d5d0:
    // 0x20d5d0: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x20d5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_20d5d4:
    // 0x20d5d4: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x20d5d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_20d5d8:
    // 0x20d5d8: 0x8e8801c8  lw          $t0, 0x1C8($s4)
    ctx->pc = 0x20d5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
label_20d5dc:
    // 0x20d5dc: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x20d5dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
label_20d5e0:
    // 0x20d5e0: 0x2e7b823  subu        $s7, $s7, $a3
    ctx->pc = 0x20d5e0u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
label_20d5e4:
    // 0x20d5e4: 0x2f0102b  sltu        $v0, $s7, $s0
    ctx->pc = 0x20d5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_20d5e8:
    // 0x20d5e8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x20d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_20d5ec:
    // 0x20d5ec: 0x2e2800b  movn        $s0, $s7, $v0
    ctx->pc = 0x20d5ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23));
label_20d5f0:
    // 0x20d5f0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x20d5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_20d5f4:
    // 0x20d5f4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20d5f8:
    // 0x20d5f8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x20d5f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d5fc:
    // 0x20d5fc: 0x60f809  jalr        $v1
label_20d600:
    if (ctx->pc == 0x20D600u) {
        ctx->pc = 0x20D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5FCu;
        // 0x20d600: 0x473821  addu        $a3, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D604u;
        goto label_20d604;
    }
    ctx->pc = 0x20D5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D604u);
        ctx->pc = 0x20D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5FCu;
        // 0x20d600: 0x473821  addu        $a3, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D5FCu, 0x20D604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D604u;
label_20d604:
    // 0x20d604: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x20d604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_20d608:
    // 0x20d608: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20d60c:
    // 0x20d60c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x20d60cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_20d610:
    // 0x20d610: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x20d610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_20d614:
    // 0x20d614: 0x8ea2005c  lw          $v0, 0x5C($s5)
    ctx->pc = 0x20d614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_20d618:
    // 0x20d618: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x20d618u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_20d61c:
    // 0x20d61c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20d620:
    // 0x20d620: 0xaea30060  sw          $v1, 0x60($s5)
    ctx->pc = 0x20d620u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 3));
label_20d624:
    // 0x20d624: 0xaea2005c  sw          $v0, 0x5C($s5)
    ctx->pc = 0x20d624u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
label_20d628:
    // 0x20d628: 0x8e830138  lw          $v1, 0x138($s4)
    ctx->pc = 0x20d628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_20d62c:
    // 0x20d62c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20d62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_20d630:
    // 0x20d630: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20d634:
    if (ctx->pc == 0x20D634u) {
        ctx->pc = 0x20D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D630u;
        // 0x20d634: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D638u;
        goto label_20d638;
    }
    ctx->pc = 0x20D630u;
    {
        const bool branch_taken_0x20d630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D630u;
        // 0x20d634: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d630) {
            ctx->pc = 0x20D648u;
            goto label_20d648;
        }
    }
    ctx->pc = 0x20D638u;
label_20d638:
    // 0x20d638: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20d63c:
    // 0x20d63c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20d640:
    // 0x20d640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20d644:
    // 0x20d644: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20d644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20d648:
    // 0x20d648: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x20d648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20d64c:
    // 0x20d64c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x20d64cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20d650:
    // 0x20d650: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x20d650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20d654:
    // 0x20d654: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20d654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20d658:
    // 0x20d658: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20d658u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20d65c:
    // 0x20d65c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x20d65cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20d660:
    // 0x20d660: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x20d660u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20d664:
    // 0x20d664: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x20d664u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20d668:
    // 0x20d668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20d668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20d66c:
    // 0x20d66c: 0x3e00008  jr          $ra
label_20d670:
    if (ctx->pc == 0x20D670u) {
        ctx->pc = 0x20D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D66Cu;
        // 0x20d670: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D674u;
        goto label_20d674;
    }
    ctx->pc = 0x20D66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D66Cu;
        // 0x20d670: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D674u;
label_20d674:
    // 0x20d674: 0x0  nop
    ctx->pc = 0x20d674u;
    // NOP
label_20d678:
    // 0x20d678: 0x3e00008  jr          $ra
label_20d67c:
    if (ctx->pc == 0x20D67Cu) {
        ctx->pc = 0x20D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D678u;
        // 0x20d67c: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D680u;
        goto label_fallthrough_0x20d678;
    }
    ctx->pc = 0x20D678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D678u;
        // 0x20d67c: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20d678:
    ctx->pc = 0x20D680u;
}
