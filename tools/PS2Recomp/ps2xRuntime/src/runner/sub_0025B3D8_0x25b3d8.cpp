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

// Function: sub_0025B3D8
// Address: 0x25b3d8 - 0x25b698
void sub_0025B3D8_0x25b3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B3D8_0x25b3d8");
#endif

    switch (ctx->pc) {
        case 0x25b3d8u: goto label_25b3d8;
        case 0x25b3dcu: goto label_25b3dc;
        case 0x25b3e0u: goto label_25b3e0;
        case 0x25b3e4u: goto label_25b3e4;
        case 0x25b3e8u: goto label_25b3e8;
        case 0x25b3ecu: goto label_25b3ec;
        case 0x25b3f0u: goto label_25b3f0;
        case 0x25b3f4u: goto label_25b3f4;
        case 0x25b3f8u: goto label_25b3f8;
        case 0x25b3fcu: goto label_25b3fc;
        case 0x25b400u: goto label_25b400;
        case 0x25b404u: goto label_25b404;
        case 0x25b408u: goto label_25b408;
        case 0x25b40cu: goto label_25b40c;
        case 0x25b410u: goto label_25b410;
        case 0x25b414u: goto label_25b414;
        case 0x25b418u: goto label_25b418;
        case 0x25b41cu: goto label_25b41c;
        case 0x25b420u: goto label_25b420;
        case 0x25b424u: goto label_25b424;
        case 0x25b428u: goto label_25b428;
        case 0x25b42cu: goto label_25b42c;
        case 0x25b430u: goto label_25b430;
        case 0x25b434u: goto label_25b434;
        case 0x25b438u: goto label_25b438;
        case 0x25b43cu: goto label_25b43c;
        case 0x25b440u: goto label_25b440;
        case 0x25b444u: goto label_25b444;
        case 0x25b448u: goto label_25b448;
        case 0x25b44cu: goto label_25b44c;
        case 0x25b450u: goto label_25b450;
        case 0x25b454u: goto label_25b454;
        case 0x25b458u: goto label_25b458;
        case 0x25b45cu: goto label_25b45c;
        case 0x25b460u: goto label_25b460;
        case 0x25b464u: goto label_25b464;
        case 0x25b468u: goto label_25b468;
        case 0x25b46cu: goto label_25b46c;
        case 0x25b470u: goto label_25b470;
        case 0x25b474u: goto label_25b474;
        case 0x25b478u: goto label_25b478;
        case 0x25b47cu: goto label_25b47c;
        case 0x25b480u: goto label_25b480;
        case 0x25b484u: goto label_25b484;
        case 0x25b488u: goto label_25b488;
        case 0x25b48cu: goto label_25b48c;
        case 0x25b490u: goto label_25b490;
        case 0x25b494u: goto label_25b494;
        case 0x25b498u: goto label_25b498;
        case 0x25b49cu: goto label_25b49c;
        case 0x25b4a0u: goto label_25b4a0;
        case 0x25b4a4u: goto label_25b4a4;
        case 0x25b4a8u: goto label_25b4a8;
        case 0x25b4acu: goto label_25b4ac;
        case 0x25b4b0u: goto label_25b4b0;
        case 0x25b4b4u: goto label_25b4b4;
        case 0x25b4b8u: goto label_25b4b8;
        case 0x25b4bcu: goto label_25b4bc;
        case 0x25b4c0u: goto label_25b4c0;
        case 0x25b4c4u: goto label_25b4c4;
        case 0x25b4c8u: goto label_25b4c8;
        case 0x25b4ccu: goto label_25b4cc;
        case 0x25b4d0u: goto label_25b4d0;
        case 0x25b4d4u: goto label_25b4d4;
        case 0x25b4d8u: goto label_25b4d8;
        case 0x25b4dcu: goto label_25b4dc;
        case 0x25b4e0u: goto label_25b4e0;
        case 0x25b4e4u: goto label_25b4e4;
        case 0x25b4e8u: goto label_25b4e8;
        case 0x25b4ecu: goto label_25b4ec;
        case 0x25b4f0u: goto label_25b4f0;
        case 0x25b4f4u: goto label_25b4f4;
        case 0x25b4f8u: goto label_25b4f8;
        case 0x25b4fcu: goto label_25b4fc;
        case 0x25b500u: goto label_25b500;
        case 0x25b504u: goto label_25b504;
        case 0x25b508u: goto label_25b508;
        case 0x25b50cu: goto label_25b50c;
        case 0x25b510u: goto label_25b510;
        case 0x25b514u: goto label_25b514;
        case 0x25b518u: goto label_25b518;
        case 0x25b51cu: goto label_25b51c;
        case 0x25b520u: goto label_25b520;
        case 0x25b524u: goto label_25b524;
        case 0x25b528u: goto label_25b528;
        case 0x25b52cu: goto label_25b52c;
        case 0x25b530u: goto label_25b530;
        case 0x25b534u: goto label_25b534;
        case 0x25b538u: goto label_25b538;
        case 0x25b53cu: goto label_25b53c;
        case 0x25b540u: goto label_25b540;
        case 0x25b544u: goto label_25b544;
        case 0x25b548u: goto label_25b548;
        case 0x25b54cu: goto label_25b54c;
        case 0x25b550u: goto label_25b550;
        case 0x25b554u: goto label_25b554;
        case 0x25b558u: goto label_25b558;
        case 0x25b55cu: goto label_25b55c;
        case 0x25b560u: goto label_25b560;
        case 0x25b564u: goto label_25b564;
        case 0x25b568u: goto label_25b568;
        case 0x25b56cu: goto label_25b56c;
        case 0x25b570u: goto label_25b570;
        case 0x25b574u: goto label_25b574;
        case 0x25b578u: goto label_25b578;
        case 0x25b57cu: goto label_25b57c;
        case 0x25b580u: goto label_25b580;
        case 0x25b584u: goto label_25b584;
        case 0x25b588u: goto label_25b588;
        case 0x25b58cu: goto label_25b58c;
        case 0x25b590u: goto label_25b590;
        case 0x25b594u: goto label_25b594;
        case 0x25b598u: goto label_25b598;
        case 0x25b59cu: goto label_25b59c;
        case 0x25b5a0u: goto label_25b5a0;
        case 0x25b5a4u: goto label_25b5a4;
        case 0x25b5a8u: goto label_25b5a8;
        case 0x25b5acu: goto label_25b5ac;
        case 0x25b5b0u: goto label_25b5b0;
        case 0x25b5b4u: goto label_25b5b4;
        case 0x25b5b8u: goto label_25b5b8;
        case 0x25b5bcu: goto label_25b5bc;
        case 0x25b5c0u: goto label_25b5c0;
        case 0x25b5c4u: goto label_25b5c4;
        case 0x25b5c8u: goto label_25b5c8;
        case 0x25b5ccu: goto label_25b5cc;
        case 0x25b5d0u: goto label_25b5d0;
        case 0x25b5d4u: goto label_25b5d4;
        case 0x25b5d8u: goto label_25b5d8;
        case 0x25b5dcu: goto label_25b5dc;
        case 0x25b5e0u: goto label_25b5e0;
        case 0x25b5e4u: goto label_25b5e4;
        case 0x25b5e8u: goto label_25b5e8;
        case 0x25b5ecu: goto label_25b5ec;
        case 0x25b5f0u: goto label_25b5f0;
        case 0x25b5f4u: goto label_25b5f4;
        case 0x25b5f8u: goto label_25b5f8;
        case 0x25b5fcu: goto label_25b5fc;
        case 0x25b600u: goto label_25b600;
        case 0x25b604u: goto label_25b604;
        case 0x25b608u: goto label_25b608;
        case 0x25b60cu: goto label_25b60c;
        case 0x25b610u: goto label_25b610;
        case 0x25b614u: goto label_25b614;
        case 0x25b618u: goto label_25b618;
        case 0x25b61cu: goto label_25b61c;
        case 0x25b620u: goto label_25b620;
        case 0x25b624u: goto label_25b624;
        case 0x25b628u: goto label_25b628;
        case 0x25b62cu: goto label_25b62c;
        case 0x25b630u: goto label_25b630;
        case 0x25b634u: goto label_25b634;
        case 0x25b638u: goto label_25b638;
        case 0x25b63cu: goto label_25b63c;
        case 0x25b640u: goto label_25b640;
        case 0x25b644u: goto label_25b644;
        case 0x25b648u: goto label_25b648;
        case 0x25b64cu: goto label_25b64c;
        case 0x25b650u: goto label_25b650;
        case 0x25b654u: goto label_25b654;
        case 0x25b658u: goto label_25b658;
        case 0x25b65cu: goto label_25b65c;
        case 0x25b660u: goto label_25b660;
        case 0x25b664u: goto label_25b664;
        case 0x25b668u: goto label_25b668;
        case 0x25b66cu: goto label_25b66c;
        case 0x25b670u: goto label_25b670;
        case 0x25b674u: goto label_25b674;
        case 0x25b678u: goto label_25b678;
        case 0x25b67cu: goto label_25b67c;
        case 0x25b680u: goto label_25b680;
        case 0x25b684u: goto label_25b684;
        case 0x25b688u: goto label_25b688;
        case 0x25b68cu: goto label_25b68c;
        case 0x25b690u: goto label_25b690;
        case 0x25b694u: goto label_25b694;
        default: break;
    }

    ctx->pc = 0x25b3d8u;

label_25b3d8:
    // 0x25b3d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25b3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_25b3dc:
    // 0x25b3dc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25b3e0:
    // 0x25b3e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x25b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_25b3e4:
    // 0x25b3e4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x25b3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_25b3e8:
    // 0x25b3e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25b3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_25b3ec:
    // 0x25b3ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25b3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25b3f0:
    // 0x25b3f0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x25b3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_25b3f4:
    // 0x25b3f4: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x25b3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_25b3f8:
    // 0x25b3f8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x25b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_25b3fc:
    // 0x25b3fc: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x25b3fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25b400:
    // 0x25b400: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x25b400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_25b404:
    // 0x25b404: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x25b404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_25b408:
    // 0x25b408: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x25b408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_25b40c:
    // 0x25b40c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25b410:
    // 0x25b410: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x25b410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25b414:
    // 0x25b414: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x25b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_25b418:
    // 0x25b418: 0x40f809  jalr        $v0
label_25b41c:
    if (ctx->pc == 0x25B41Cu) {
        ctx->pc = 0x25B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B418u;
        // 0x25b41c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B420u;
        goto label_25b420;
    }
    ctx->pc = 0x25B418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B420u);
        ctx->pc = 0x25B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B418u;
        // 0x25b41c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B418u, 0x25B420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B420u;
label_25b420:
    // 0x25b420: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25b420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b424:
    // 0x25b424: 0x52600087  beql        $s3, $zero, . + 4 + (0x87 << 2)
label_25b428:
    if (ctx->pc == 0x25B428u) {
        ctx->pc = 0x25B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B424u;
        // 0x25b428: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B42Cu;
        goto label_25b42c;
    }
    ctx->pc = 0x25B424u;
    {
        const bool branch_taken_0x25b424 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b424) {
            ctx->pc = 0x25B428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B424u;
            // 0x25b428: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B644u;
            goto label_25b644;
        }
    }
    ctx->pc = 0x25B42Cu;
label_25b42c:
    // 0x25b42c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x25b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25b430:
    // 0x25b430: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_25b434:
    if (ctx->pc == 0x25B434u) {
        ctx->pc = 0x25B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B430u;
        // 0x25b434: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B438u;
        goto label_25b438;
    }
    ctx->pc = 0x25B430u;
    {
        const bool branch_taken_0x25b430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B430u;
        // 0x25b434: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b430) {
            ctx->pc = 0x25B464u;
            goto label_25b464;
        }
    }
    ctx->pc = 0x25B438u;
label_25b438:
    // 0x25b438: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x25b438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b43c:
    // 0x25b43c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25b43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b440:
    // 0x25b440: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x25b440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_25b444:
    // 0x25b444: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x25b444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_25b448:
    // 0x25b448: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_25b44c:
    // 0x25b44c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25b450:
    // 0x25b450: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x25b450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_25b454:
    // 0x25b454: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x25b454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25b458:
    // 0x25b458: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x25b458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25b45c:
    // 0x25b45c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_25b460:
    if (ctx->pc == 0x25B460u) {
        ctx->pc = 0x25B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B45Cu;
        // 0x25b460: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B464u;
        goto label_25b464;
    }
    ctx->pc = 0x25B45Cu;
    {
        const bool branch_taken_0x25b45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B45Cu;
        // 0x25b460: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b45c) {
            ctx->pc = 0x25B440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b440;
        }
    }
    ctx->pc = 0x25B464u;
label_25b464:
    // 0x25b464: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x25b464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25b468:
    // 0x25b468: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25b468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
label_25b46c:
    // 0x25b46c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b470:
    // 0x25b470: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25b470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25b474:
    // 0x25b474: 0xc0c5594  jal         func_315650
label_25b478:
    if (ctx->pc == 0x25B478u) {
        ctx->pc = 0x25B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B474u;
        // 0x25b478: 0x24e79070  addiu       $a3, $a3, -0x6F90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B47Cu;
        goto label_25b47c;
    }
    ctx->pc = 0x25B474u;
    SET_GPR_U32(ctx, 31, 0x25B47Cu);
    ctx->pc = 0x25B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B474u;
    // 0x25b478: 0x24e79070  addiu       $a3, $a3, -0x6F90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315650u, 0x25B474u, 0x25B47Cu)) {
        return;
    }
    ctx->pc = 0x25B47Cu;
label_25b47c:
    // 0x25b47c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x25b47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25b480:
    // 0x25b480: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x25b480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_25b484:
    // 0x25b484: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_25b488:
    if (ctx->pc == 0x25B488u) {
        ctx->pc = 0x25B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B484u;
        // 0x25b488: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B48Cu;
        goto label_25b48c;
    }
    ctx->pc = 0x25B484u;
    {
        const bool branch_taken_0x25b484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B484u;
        // 0x25b488: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b484) {
            ctx->pc = 0x25B4CCu;
            goto label_25b4cc;
        }
    }
    ctx->pc = 0x25B48Cu;
label_25b48c:
    // 0x25b48c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x25b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b490:
    // 0x25b490: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x25b490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25b494:
    // 0x25b494: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x25b494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_25b498:
    // 0x25b498: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_25b49c:
    if (ctx->pc == 0x25B49Cu) {
        ctx->pc = 0x25B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B498u;
        // 0x25b49c: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B4A0u;
        goto label_25b4a0;
    }
    ctx->pc = 0x25B498u;
    {
        const bool branch_taken_0x25b498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B498u;
        // 0x25b49c: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b498) {
            ctx->pc = 0x25B4CCu;
            goto label_25b4cc;
        }
    }
    ctx->pc = 0x25B4A0u;
label_25b4a0:
    // 0x25b4a0: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x25b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_25b4a4:
    // 0x25b4a4: 0x0  nop
    ctx->pc = 0x25b4a4u;
    // NOP
label_25b4a8:
    // 0x25b4a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25b4ac:
    // 0x25b4ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25b4b0:
    // 0x25b4b0: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
label_25b4b4:
    if (ctx->pc == 0x25B4B4u) {
        ctx->pc = 0x25B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4B0u;
        // 0x25b4b4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B4B8u;
        goto label_25b4b8;
    }
    ctx->pc = 0x25B4B0u;
    {
        const bool branch_taken_0x25b4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x25B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4B0u;
        // 0x25b4b4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b4b0) {
            ctx->pc = 0x25B4C0u;
            goto label_25b4c0;
        }
    }
    ctx->pc = 0x25B4B8u;
label_25b4b8:
    // 0x25b4b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25b4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b4bc:
    // 0x25b4bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25b4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_25b4c0:
    // 0x25b4c0: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x25b4c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_25b4c4:
    // 0x25b4c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_25b4c8:
    if (ctx->pc == 0x25B4C8u) {
        ctx->pc = 0x25B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4C4u;
        // 0x25b4c8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B4CCu;
        goto label_25b4cc;
    }
    ctx->pc = 0x25B4C4u;
    {
        const bool branch_taken_0x25b4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4C4u;
        // 0x25b4c8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b4c4) {
            ctx->pc = 0x25B4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b4a8;
        }
    }
    ctx->pc = 0x25B4CCu;
label_25b4cc:
    // 0x25b4cc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x25b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25b4d0:
    // 0x25b4d0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x25b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_25b4d4:
    // 0x25b4d4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x25b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_25b4d8:
    // 0x25b4d8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x25b4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_25b4dc:
    // 0x25b4dc: 0xc3a018  mult        $s4, $a2, $v1
    ctx->pc = 0x25b4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_25b4e0:
    // 0x25b4e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x25b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_25b4e4:
    // 0x25b4e4: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x25b4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_25b4e8:
    // 0x25b4e8: 0xc0961ba  jal         func_2586E8
label_25b4ec:
    if (ctx->pc == 0x25B4ECu) {
        ctx->pc = 0x25B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4E8u;
        // 0x25b4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B4F0u;
        goto label_25b4f0;
    }
    ctx->pc = 0x25B4E8u;
    SET_GPR_U32(ctx, 31, 0x25B4F0u);
    ctx->pc = 0x25B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B4E8u;
    // 0x25b4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2586E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2586E8u, 0x25B4E8u, 0x25B4F0u)) {
        return;
    }
    ctx->pc = 0x25B4F0u;
label_25b4f0:
    // 0x25b4f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25b4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b4f4:
    // 0x25b4f4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_25b4f8:
    if (ctx->pc == 0x25B4F8u) {
        ctx->pc = 0x25B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4F4u;
        // 0x25b4f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B4FCu;
        goto label_25b4fc;
    }
    ctx->pc = 0x25B4F4u;
    {
        const bool branch_taken_0x25b4f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4F4u;
        // 0x25b4f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b4f4) {
            ctx->pc = 0x25B520u;
            goto label_25b520;
        }
    }
    ctx->pc = 0x25B4FCu;
label_25b4fc:
    // 0x25b4fc: 0x26a20fc8  addiu       $v0, $s5, 0xFC8
    ctx->pc = 0x25b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
label_25b500:
    // 0x25b500: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x25b500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_25b504:
    // 0x25b504: 0x60f809  jalr        $v1
label_25b508:
    if (ctx->pc == 0x25B508u) {
        ctx->pc = 0x25B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B504u;
        // 0x25b508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B50Cu;
        goto label_25b50c;
    }
    ctx->pc = 0x25B504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B50Cu);
        ctx->pc = 0x25B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B504u;
        // 0x25b508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B504u, 0x25B50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B50Cu;
label_25b50c:
    // 0x25b50c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25b510:
    // 0x25b510: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25b510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_25b514:
    // 0x25b514: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25b514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_25b518:
    // 0x25b518: 0x1000004f  b           . + 4 + (0x4F << 2)
label_25b51c:
    if (ctx->pc == 0x25B51Cu) {
        ctx->pc = 0x25B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B518u;
        // 0x25b51c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B520u;
        goto label_25b520;
    }
    ctx->pc = 0x25B518u;
    {
        const bool branch_taken_0x25b518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B518u;
        // 0x25b51c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b518) {
            ctx->pc = 0x25B658u;
            goto label_25b658;
        }
    }
    ctx->pc = 0x25B520u;
label_25b520:
    // 0x25b520: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x25b520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_25b524:
    // 0x25b524: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x25b524u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_25b528:
    // 0x25b528: 0x26a50fc8  addiu       $a1, $s5, 0xFC8
    ctx->pc = 0x25b528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
label_25b52c:
    // 0x25b52c: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x25b52cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_25b530:
    // 0x25b530: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25b530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b534:
    // 0x25b534: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25b534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_25b538:
    // 0x25b538: 0x8c4241a8  lw          $v0, 0x41A8($v0)
    ctx->pc = 0x25b538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16808)));
label_25b53c:
    // 0x25b53c: 0xf43021  addu        $a2, $a3, $s4
    ctx->pc = 0x25b53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_25b540:
    // 0x25b540: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x25b540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b544:
    // 0x25b544: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_25b548:
    // 0x25b548: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x25b548u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_25b54c:
    // 0x25b54c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x25b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_25b550:
    // 0x25b550: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x25b550u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
label_25b554:
    // 0x25b554: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x25b554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25b558:
    // 0x25b558: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25b558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25b55c:
    // 0x25b55c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25b560:
    // 0x25b560: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x25b560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_25b564:
    // 0x25b564: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25b564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25b568:
    // 0x25b568: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x25b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_25b56c:
    // 0x25b56c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_25b570:
    // 0x25b570: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x25b570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25b574:
    // 0x25b574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25b578:
    // 0x25b578: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x25b578u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_25b57c:
    // 0x25b57c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x25b57cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_25b580:
    // 0x25b580: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25b580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b584:
    // 0x25b584: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25b584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25b588:
    // 0x25b588: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x25b588u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_25b58c:
    // 0x25b58c: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x25b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_25b590:
    // 0x25b590: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x25b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_25b594:
    // 0x25b594: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x25b594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_25b598:
    // 0x25b598: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25b598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25b59c:
    // 0x25b59c: 0x5064000b  beql        $v1, $a0, . + 4 + (0xB << 2)
label_25b5a0:
    if (ctx->pc == 0x25B5A0u) {
        ctx->pc = 0x25B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B59Cu;
        // 0x25b5a0: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B5A4u;
        goto label_25b5a4;
    }
    ctx->pc = 0x25B59Cu;
    {
        const bool branch_taken_0x25b59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x25b59c) {
            ctx->pc = 0x25B5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B59Cu;
            // 0x25b5a0: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B5CCu;
            goto label_25b5cc;
        }
    }
    ctx->pc = 0x25B5A4u;
label_25b5a4:
    // 0x25b5a4: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x25b5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_25b5a8:
    // 0x25b5a8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x25b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_25b5ac:
    // 0x25b5ac: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x25b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_25b5b0:
    // 0x25b5b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25b5b4:
    // 0x25b5b4: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x25b5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_25b5b8:
    // 0x25b5b8: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x25b5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_25b5bc:
    // 0x25b5bc: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x25b5bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_25b5c0:
    // 0x25b5c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25b5c4:
    // 0x25b5c4: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x25b5c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_25b5c8:
    // 0x25b5c8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x25b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_25b5cc:
    // 0x25b5cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x25b5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_25b5d0:
    // 0x25b5d0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x25b5d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25b5d4:
    // 0x25b5d4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x25b5d4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_25b5d8:
    // 0x25b5d8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x25b5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_25b5dc:
    // 0x25b5dc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x25b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_25b5e0:
    // 0x25b5e0: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x25b5e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_25b5e4:
    // 0x25b5e4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x25b5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_25b5e8:
    // 0x25b5e8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x25b5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_25b5ec:
    // 0x25b5ec: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x25b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_25b5f0:
    // 0x25b5f0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x25b5f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_25b5f4:
    // 0x25b5f4: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x25b5f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_25b5f8:
    // 0x25b5f8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x25b5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_25b5fc:
    // 0x25b5fc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x25b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_25b600:
    // 0x25b600: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25b600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_25b604:
    // 0x25b604: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x25b604u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_25b608:
    // 0x25b608: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x25b608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25b60c:
    // 0x25b60c: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x25b60cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25b610:
    // 0x25b610: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_25b614:
    if (ctx->pc == 0x25B614u) {
        ctx->pc = 0x25B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B610u;
        // 0x25b614: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B618u;
        goto label_25b618;
    }
    ctx->pc = 0x25B610u;
    {
        const bool branch_taken_0x25b610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B610u;
        // 0x25b614: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b610) {
            ctx->pc = 0x25B590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b590;
        }
    }
    ctx->pc = 0x25B618u;
label_25b618:
    // 0x25b618: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x25b618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_25b61c:
    // 0x25b61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25b620:
    // 0x25b620: 0x24a591c8  addiu       $a1, $a1, -0x6E38
    ctx->pc = 0x25b620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939080));
label_25b624:
    // 0x25b624: 0xc0962f0  jal         func_258BC0
label_25b628:
    if (ctx->pc == 0x25B628u) {
        ctx->pc = 0x25B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B624u;
        // 0x25b628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B62Cu;
        goto label_25b62c;
    }
    ctx->pc = 0x25B624u;
    SET_GPR_U32(ctx, 31, 0x25B62Cu);
    ctx->pc = 0x25B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B624u;
    // 0x25b628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258BC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258BC0u, 0x25B624u, 0x25B62Cu)) {
        return;
    }
    ctx->pc = 0x25B62Cu;
label_25b62c:
    // 0x25b62c: 0x26a30fc8  addiu       $v1, $s5, 0xFC8
    ctx->pc = 0x25b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
label_25b630:
    // 0x25b630: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x25b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_25b634:
    // 0x25b634: 0x40f809  jalr        $v0
label_25b638:
    if (ctx->pc == 0x25B638u) {
        ctx->pc = 0x25B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B634u;
        // 0x25b638: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B63Cu;
        goto label_25b63c;
    }
    ctx->pc = 0x25B634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B63Cu);
        ctx->pc = 0x25B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B634u;
        // 0x25b638: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B634u, 0x25B63Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B63Cu;
label_25b63c:
    // 0x25b63c: 0x1000000c  b           . + 4 + (0xC << 2)
label_25b640:
    if (ctx->pc == 0x25B640u) {
        ctx->pc = 0x25B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B63Cu;
        // 0x25b640: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B644u;
        goto label_25b644;
    }
    ctx->pc = 0x25B63Cu;
    {
        const bool branch_taken_0x25b63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B63Cu;
        // 0x25b640: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b63c) {
            ctx->pc = 0x25B670u;
            goto label_25b670;
        }
    }
    ctx->pc = 0x25B644u;
label_25b644:
    // 0x25b644: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25b648:
    // 0x25b648: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25b648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_25b64c:
    // 0x25b64c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_25b650:
    // 0x25b650: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x25b650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_25b654:
    // 0x25b654: 0x0  nop
    ctx->pc = 0x25b654u;
    // NOP
label_25b658:
    // 0x25b658: 0xc092848  jal         func_24A120
label_25b65c:
    if (ctx->pc == 0x25B65Cu) {
        ctx->pc = 0x25B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B658u;
        // 0x25b65c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B660u;
        goto label_25b660;
    }
    ctx->pc = 0x25B658u;
    SET_GPR_U32(ctx, 31, 0x25B660u);
    ctx->pc = 0x25B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B658u;
    // 0x25b65c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x25B658u, 0x25B660u)) {
        return;
    }
    ctx->pc = 0x25B660u;
label_25b660:
    // 0x25b660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25b660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25b664:
    // 0x25b664: 0xc09281a  jal         func_24A068
label_25b668:
    if (ctx->pc == 0x25B668u) {
        ctx->pc = 0x25B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B664u;
        // 0x25b668: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B66Cu;
        goto label_25b66c;
    }
    ctx->pc = 0x25B664u;
    SET_GPR_U32(ctx, 31, 0x25B66Cu);
    ctx->pc = 0x25B668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B664u;
    // 0x25b668: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x25B664u, 0x25B66Cu)) {
        return;
    }
    ctx->pc = 0x25B66Cu;
label_25b66c:
    // 0x25b66c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25b66cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b670:
    // 0x25b670: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x25b670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25b674:
    // 0x25b674: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x25b674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25b678:
    // 0x25b678: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x25b678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25b67c:
    // 0x25b67c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25b67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25b680:
    // 0x25b680: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x25b680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25b684:
    // 0x25b684: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x25b684u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25b688:
    // 0x25b688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25b68c:
    // 0x25b68c: 0x3e00008  jr          $ra
label_25b690:
    if (ctx->pc == 0x25B690u) {
        ctx->pc = 0x25B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B68Cu;
        // 0x25b690: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B694u;
        goto label_25b694;
    }
    ctx->pc = 0x25B68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B68Cu;
        // 0x25b690: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B694u;
label_25b694:
    // 0x25b694: 0x0  nop
    ctx->pc = 0x25b694u;
    // NOP
    ctx->pc = 0x25b698u;
}
