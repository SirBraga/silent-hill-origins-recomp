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

// Function: sub_0021C450
// Address: 0x21c450 - 0x21c6c8
void sub_0021C450_0x21c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C450_0x21c450");
#endif

    switch (ctx->pc) {
        case 0x21c450u: goto label_21c450;
        case 0x21c454u: goto label_21c454;
        case 0x21c458u: goto label_21c458;
        case 0x21c45cu: goto label_21c45c;
        case 0x21c460u: goto label_21c460;
        case 0x21c464u: goto label_21c464;
        case 0x21c468u: goto label_21c468;
        case 0x21c46cu: goto label_21c46c;
        case 0x21c470u: goto label_21c470;
        case 0x21c474u: goto label_21c474;
        case 0x21c478u: goto label_21c478;
        case 0x21c47cu: goto label_21c47c;
        case 0x21c480u: goto label_21c480;
        case 0x21c484u: goto label_21c484;
        case 0x21c488u: goto label_21c488;
        case 0x21c48cu: goto label_21c48c;
        case 0x21c490u: goto label_21c490;
        case 0x21c494u: goto label_21c494;
        case 0x21c498u: goto label_21c498;
        case 0x21c49cu: goto label_21c49c;
        case 0x21c4a0u: goto label_21c4a0;
        case 0x21c4a4u: goto label_21c4a4;
        case 0x21c4a8u: goto label_21c4a8;
        case 0x21c4acu: goto label_21c4ac;
        case 0x21c4b0u: goto label_21c4b0;
        case 0x21c4b4u: goto label_21c4b4;
        case 0x21c4b8u: goto label_21c4b8;
        case 0x21c4bcu: goto label_21c4bc;
        case 0x21c4c0u: goto label_21c4c0;
        case 0x21c4c4u: goto label_21c4c4;
        case 0x21c4c8u: goto label_21c4c8;
        case 0x21c4ccu: goto label_21c4cc;
        case 0x21c4d0u: goto label_21c4d0;
        case 0x21c4d4u: goto label_21c4d4;
        case 0x21c4d8u: goto label_21c4d8;
        case 0x21c4dcu: goto label_21c4dc;
        case 0x21c4e0u: goto label_21c4e0;
        case 0x21c4e4u: goto label_21c4e4;
        case 0x21c4e8u: goto label_21c4e8;
        case 0x21c4ecu: goto label_21c4ec;
        case 0x21c4f0u: goto label_21c4f0;
        case 0x21c4f4u: goto label_21c4f4;
        case 0x21c4f8u: goto label_21c4f8;
        case 0x21c4fcu: goto label_21c4fc;
        case 0x21c500u: goto label_21c500;
        case 0x21c504u: goto label_21c504;
        case 0x21c508u: goto label_21c508;
        case 0x21c50cu: goto label_21c50c;
        case 0x21c510u: goto label_21c510;
        case 0x21c514u: goto label_21c514;
        case 0x21c518u: goto label_21c518;
        case 0x21c51cu: goto label_21c51c;
        case 0x21c520u: goto label_21c520;
        case 0x21c524u: goto label_21c524;
        case 0x21c528u: goto label_21c528;
        case 0x21c52cu: goto label_21c52c;
        case 0x21c530u: goto label_21c530;
        case 0x21c534u: goto label_21c534;
        case 0x21c538u: goto label_21c538;
        case 0x21c53cu: goto label_21c53c;
        case 0x21c540u: goto label_21c540;
        case 0x21c544u: goto label_21c544;
        case 0x21c548u: goto label_21c548;
        case 0x21c54cu: goto label_21c54c;
        case 0x21c550u: goto label_21c550;
        case 0x21c554u: goto label_21c554;
        case 0x21c558u: goto label_21c558;
        case 0x21c55cu: goto label_21c55c;
        case 0x21c560u: goto label_21c560;
        case 0x21c564u: goto label_21c564;
        case 0x21c568u: goto label_21c568;
        case 0x21c56cu: goto label_21c56c;
        case 0x21c570u: goto label_21c570;
        case 0x21c574u: goto label_21c574;
        case 0x21c578u: goto label_21c578;
        case 0x21c57cu: goto label_21c57c;
        case 0x21c580u: goto label_21c580;
        case 0x21c584u: goto label_21c584;
        case 0x21c588u: goto label_21c588;
        case 0x21c58cu: goto label_21c58c;
        case 0x21c590u: goto label_21c590;
        case 0x21c594u: goto label_21c594;
        case 0x21c598u: goto label_21c598;
        case 0x21c59cu: goto label_21c59c;
        case 0x21c5a0u: goto label_21c5a0;
        case 0x21c5a4u: goto label_21c5a4;
        case 0x21c5a8u: goto label_21c5a8;
        case 0x21c5acu: goto label_21c5ac;
        case 0x21c5b0u: goto label_21c5b0;
        case 0x21c5b4u: goto label_21c5b4;
        case 0x21c5b8u: goto label_21c5b8;
        case 0x21c5bcu: goto label_21c5bc;
        case 0x21c5c0u: goto label_21c5c0;
        case 0x21c5c4u: goto label_21c5c4;
        case 0x21c5c8u: goto label_21c5c8;
        case 0x21c5ccu: goto label_21c5cc;
        case 0x21c5d0u: goto label_21c5d0;
        case 0x21c5d4u: goto label_21c5d4;
        case 0x21c5d8u: goto label_21c5d8;
        case 0x21c5dcu: goto label_21c5dc;
        case 0x21c5e0u: goto label_21c5e0;
        case 0x21c5e4u: goto label_21c5e4;
        case 0x21c5e8u: goto label_21c5e8;
        case 0x21c5ecu: goto label_21c5ec;
        case 0x21c5f0u: goto label_21c5f0;
        case 0x21c5f4u: goto label_21c5f4;
        case 0x21c5f8u: goto label_21c5f8;
        case 0x21c5fcu: goto label_21c5fc;
        case 0x21c600u: goto label_21c600;
        case 0x21c604u: goto label_21c604;
        case 0x21c608u: goto label_21c608;
        case 0x21c60cu: goto label_21c60c;
        case 0x21c610u: goto label_21c610;
        case 0x21c614u: goto label_21c614;
        case 0x21c618u: goto label_21c618;
        case 0x21c61cu: goto label_21c61c;
        case 0x21c620u: goto label_21c620;
        case 0x21c624u: goto label_21c624;
        case 0x21c628u: goto label_21c628;
        case 0x21c62cu: goto label_21c62c;
        case 0x21c630u: goto label_21c630;
        case 0x21c634u: goto label_21c634;
        case 0x21c638u: goto label_21c638;
        case 0x21c63cu: goto label_21c63c;
        case 0x21c640u: goto label_21c640;
        case 0x21c644u: goto label_21c644;
        case 0x21c648u: goto label_21c648;
        case 0x21c64cu: goto label_21c64c;
        case 0x21c650u: goto label_21c650;
        case 0x21c654u: goto label_21c654;
        case 0x21c658u: goto label_21c658;
        case 0x21c65cu: goto label_21c65c;
        case 0x21c660u: goto label_21c660;
        case 0x21c664u: goto label_21c664;
        case 0x21c668u: goto label_21c668;
        case 0x21c66cu: goto label_21c66c;
        case 0x21c670u: goto label_21c670;
        case 0x21c674u: goto label_21c674;
        case 0x21c678u: goto label_21c678;
        case 0x21c67cu: goto label_21c67c;
        case 0x21c680u: goto label_21c680;
        case 0x21c684u: goto label_21c684;
        case 0x21c688u: goto label_21c688;
        case 0x21c68cu: goto label_21c68c;
        case 0x21c690u: goto label_21c690;
        case 0x21c694u: goto label_21c694;
        case 0x21c698u: goto label_21c698;
        case 0x21c69cu: goto label_21c69c;
        case 0x21c6a0u: goto label_21c6a0;
        case 0x21c6a4u: goto label_21c6a4;
        case 0x21c6a8u: goto label_21c6a8;
        case 0x21c6acu: goto label_21c6ac;
        case 0x21c6b0u: goto label_21c6b0;
        case 0x21c6b4u: goto label_21c6b4;
        case 0x21c6b8u: goto label_21c6b8;
        case 0x21c6bcu: goto label_21c6bc;
        case 0x21c6c0u: goto label_21c6c0;
        case 0x21c6c4u: goto label_21c6c4;
        default: break;
    }

    ctx->pc = 0x21c450u;

label_21c450:
    // 0x21c450: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_21c454:
    // 0x21c454: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x21c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_21c458:
    // 0x21c458: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x21c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_21c45c:
    // 0x21c45c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21c45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c460:
    // 0x21c460: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x21c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_21c464:
    // 0x21c464: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c468:
    // 0x21c468: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x21c468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_21c46c:
    // 0x21c46c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x21c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_21c470:
    // 0x21c470: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x21c470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_21c474:
    // 0x21c474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21c478:
    // 0x21c478: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x21c478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_21c47c:
    // 0x21c47c: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_21c480:
    if (ctx->pc == 0x21C480u) {
        ctx->pc = 0x21C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C47Cu;
        // 0x21c480: 0x8e3501ac  lw          $s5, 0x1AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C484u;
        goto label_21c484;
    }
    ctx->pc = 0x21C47Cu;
    {
        const bool branch_taken_0x21c47c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C47Cu;
        // 0x21c480: 0x8e3501ac  lw          $s5, 0x1AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c47c) {
            ctx->pc = 0x21C4E4u;
            goto label_21c4e4;
        }
    }
    ctx->pc = 0x21C484u;
label_21c484:
    // 0x21c484: 0x26b40048  addiu       $s4, $s5, 0x48
    ctx->pc = 0x21c484u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
label_21c488:
    // 0x21c488: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x21c488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21c48c:
    // 0x21c48c: 0x2632014c  addiu       $s2, $s1, 0x14C
    ctx->pc = 0x21c48cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
label_21c490:
    // 0x21c490: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x21c490u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21c494:
    // 0x21c494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c498:
    // 0x21c498: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x21c498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_21c49c:
    // 0x21c49c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21c49cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21c4a0:
    // 0x21c4a0: 0x8d27000c  lw          $a3, 0xC($t1)
    ctx->pc = 0x21c4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_21c4a4:
    // 0x21c4a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21c4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21c4a8:
    // 0x21c4a8: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x21c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_21c4ac:
    // 0x21c4ac: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x21c4acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_21c4b0:
    // 0x21c4b0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x21c4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_21c4b4:
    // 0x21c4b4: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x21c4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21c4b8:
    // 0x21c4b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21c4bc:
    // 0x21c4bc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x21c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_21c4c0:
    // 0x21c4c0: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x21c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_21c4c4:
    // 0x21c4c4: 0x3012  mflo        $a2
    ctx->pc = 0x21c4c4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_21c4c8:
    // 0x21c4c8: 0x40f809  jalr        $v0
label_21c4cc:
    if (ctx->pc == 0x21C4CCu) {
        ctx->pc = 0x21C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4C8u;
        // 0x21c4cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C4D0u;
        goto label_21c4d0;
    }
    ctx->pc = 0x21C4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C4D0u);
        ctx->pc = 0x21C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4C8u;
        // 0x21c4cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C4C8u, 0x21C4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C4D0u;
label_21c4d0:
    // 0x21c4d0: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x21c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_21c4d4:
    // 0x21c4d4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x21c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_21c4d8:
    // 0x21c4d8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x21c4d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21c4dc:
    // 0x21c4dc: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_21c4e0:
    if (ctx->pc == 0x21C4E0u) {
        ctx->pc = 0x21C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4DCu;
        // 0x21c4e0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C4E4u;
        goto label_21c4e4;
    }
    ctx->pc = 0x21C4DCu;
    {
        const bool branch_taken_0x21c4dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4DCu;
        // 0x21c4e0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c4dc) {
            ctx->pc = 0x21C490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c490;
        }
    }
    ctx->pc = 0x21C4E4u;
label_21c4e4:
    // 0x21c4e4: 0x8eb30018  lw          $s3, 0x18($s5)
    ctx->pc = 0x21c4e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_21c4e8:
    // 0x21c4e8: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x21c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_21c4ec:
    // 0x21c4ec: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21c4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21c4f0:
    // 0x21c4f0: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
label_21c4f4:
    if (ctx->pc == 0x21C4F4u) {
        ctx->pc = 0x21C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4F0u;
        // 0x21c4f4: 0x8e220094  lw          $v0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C4F8u;
        goto label_21c4f8;
    }
    ctx->pc = 0x21C4F0u;
    {
        const bool branch_taken_0x21c4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c4f0) {
            ctx->pc = 0x21C4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C4F0u;
            // 0x21c4f4: 0x8e220094  lw          $v0, 0x94($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C620u;
            goto label_21c620;
        }
    }
    ctx->pc = 0x21C4F8u;
label_21c4f8:
    // 0x21c4f8: 0x8eb20014  lw          $s2, 0x14($s5)
    ctx->pc = 0x21c4f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_21c4fc:
    // 0x21c4fc: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x21c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
label_21c500:
    // 0x21c500: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x21c500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21c504:
    // 0x21c504: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
label_21c508:
    if (ctx->pc == 0x21C508u) {
        ctx->pc = 0x21C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C504u;
        // 0x21c508: 0x8ea2001c  lw          $v0, 0x1C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C50Cu;
        goto label_21c50c;
    }
    ctx->pc = 0x21C504u;
    {
        const bool branch_taken_0x21c504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c504) {
            ctx->pc = 0x21C508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C504u;
            // 0x21c508: 0x8ea2001c  lw          $v0, 0x1C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C60Cu;
            goto label_21c60c;
        }
    }
    ctx->pc = 0x21C50Cu;
label_21c50c:
    // 0x21c50c: 0x26b40020  addiu       $s4, $s5, 0x20
    ctx->pc = 0x21c50cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_21c510:
    // 0x21c510: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x21c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_21c514:
    // 0x21c514: 0x0  nop
    ctx->pc = 0x21c514u;
    // NOP
label_21c518:
    // 0x21c518: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21c518u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c51c:
    // 0x21c51c: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
label_21c520:
    if (ctx->pc == 0x21C520u) {
        ctx->pc = 0x21C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C51Cu;
        // 0x21c520: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C524u;
        goto label_21c524;
    }
    ctx->pc = 0x21C51Cu;
    {
        const bool branch_taken_0x21c51c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C51Cu;
        // 0x21c520: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c51c) {
            ctx->pc = 0x21C5D8u;
            goto label_21c5d8;
        }
    }
    ctx->pc = 0x21C524u;
label_21c524:
    // 0x21c524: 0x262d014c  addiu       $t5, $s1, 0x14C
    ctx->pc = 0x21c524u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
label_21c528:
    // 0x21c528: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x21c528u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_21c52c:
    // 0x21c52c: 0x0  nop
    ctx->pc = 0x21c52cu;
    // NOP
label_21c530:
    // 0x21c530: 0x260c0001  addiu       $t4, $s0, 0x1
    ctx->pc = 0x21c530u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21c534:
    // 0x21c534: 0x1a41021  addu        $v0, $t5, $a0
    ctx->pc = 0x21c534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_21c538:
    // 0x21c538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21c538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c53c:
    // 0x21c53c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x21c53cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21c540:
    // 0x21c540: 0x8d230034  lw          $v1, 0x34($t1)
    ctx->pc = 0x21c540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_21c544:
    // 0x21c544: 0x8d220038  lw          $v0, 0x38($t1)
    ctx->pc = 0x21c544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
label_21c548:
    // 0x21c548: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
label_21c54c:
    if (ctx->pc == 0x21C54Cu) {
        ctx->pc = 0x21C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C548u;
        // 0x21c54c: 0x2431818  mult        $v1, $s2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C550u;
        goto label_21c550;
    }
    ctx->pc = 0x21C548u;
    {
        const bool branch_taken_0x21c548 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C548u;
        // 0x21c54c: 0x2431818  mult        $v1, $s2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c548) {
            ctx->pc = 0x21C5C4u;
            goto label_21c5c4;
        }
    }
    ctx->pc = 0x21C550u;
label_21c550:
    // 0x21c550: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x21c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_21c554:
    // 0x21c554: 0x351c0  sll         $t2, $v1, 7
    ctx->pc = 0x21c554u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_21c558:
    // 0x21c558: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x21c558u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21c55c:
    // 0x21c55c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x21c55cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21c560:
    // 0x21c560: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x21c560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_21c564:
    // 0x21c564: 0x0  nop
    ctx->pc = 0x21c564u;
    // NOP
label_21c568:
    // 0x21c568: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x21c568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21c56c:
    // 0x21c56c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21c570:
    // 0x21c570: 0x8d240034  lw          $a0, 0x34($t1)
    ctx->pc = 0x21c570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_21c574:
    // 0x21c574: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x21c574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_21c578:
    // 0x21c578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21c578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c57c:
    // 0x21c57c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21c580:
    // 0x21c580: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
label_21c584:
    if (ctx->pc == 0x21C584u) {
        ctx->pc = 0x21C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C580u;
        // 0x21c584: 0x6a1821  addu        $v1, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C588u;
        goto label_21c588;
    }
    ctx->pc = 0x21C580u;
    {
        const bool branch_taken_0x21c580 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x21C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C580u;
        // 0x21c584: 0x6a1821  addu        $v1, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c580) {
            ctx->pc = 0x21C5B0u;
            goto label_21c5b0;
        }
    }
    ctx->pc = 0x21C588u;
label_21c588:
    // 0x21c588: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x21c588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_21c58c:
    // 0x21c58c: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x21c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_21c590:
    // 0x21c590: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21c590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_21c594:
    // 0x21c594: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21c594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21c598:
    // 0x21c598: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x21c598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_21c59c:
    // 0x21c59c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x21c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_21c5a0:
    // 0x21c5a0: 0x8d220034  lw          $v0, 0x34($t1)
    ctx->pc = 0x21c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_21c5a4:
    // 0x21c5a4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x21c5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21c5a8:
    // 0x21c5a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_21c5ac:
    if (ctx->pc == 0x21C5ACu) {
        ctx->pc = 0x21C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5A8u;
        // 0x21c5ac: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C5B0u;
        goto label_21c5b0;
    }
    ctx->pc = 0x21C5A8u;
    {
        const bool branch_taken_0x21c5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5A8u;
        // 0x21c5ac: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5a8) {
            ctx->pc = 0x21C590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c590;
        }
    }
    ctx->pc = 0x21C5B0u;
label_21c5b0:
    // 0x21c5b0: 0x8d220038  lw          $v0, 0x38($t1)
    ctx->pc = 0x21c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
label_21c5b4:
    // 0x21c5b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x21c5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21c5b8:
    // 0x21c5b8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x21c5b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21c5bc:
    // 0x21c5bc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_21c5c0:
    if (ctx->pc == 0x21C5C0u) {
        ctx->pc = 0x21C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5BCu;
        // 0x21c5c0: 0xb31021  addu        $v0, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C5C4u;
        goto label_21c5c4;
    }
    ctx->pc = 0x21C5BCu;
    {
        const bool branch_taken_0x21c5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5BCu;
        // 0x21c5c0: 0xb31021  addu        $v0, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5bc) {
            ctx->pc = 0x21C568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c568;
        }
    }
    ctx->pc = 0x21C5C4u;
label_21c5c4:
    // 0x21c5c4: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x21c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_21c5c8:
    // 0x21c5c8: 0x180802d  daddu       $s0, $t4, $zero
    ctx->pc = 0x21c5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_21c5cc:
    // 0x21c5cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x21c5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21c5d0:
    // 0x21c5d0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_21c5d4:
    if (ctx->pc == 0x21C5D4u) {
        ctx->pc = 0x21C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5D0u;
        // 0x21c5d4: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C5D8u;
        goto label_21c5d8;
    }
    ctx->pc = 0x21C5D0u;
    {
        const bool branch_taken_0x21c5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5D0u;
        // 0x21c5d4: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5d0) {
            ctx->pc = 0x21C530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c530;
        }
    }
    ctx->pc = 0x21C5D8u;
label_21c5d8:
    // 0x21c5d8: 0x8e2301bc  lw          $v1, 0x1BC($s1)
    ctx->pc = 0x21c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_21c5dc:
    // 0x21c5dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c5e0:
    // 0x21c5e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_21c5e4:
    // 0x21c5e4: 0x40f809  jalr        $v0
label_21c5e8:
    if (ctx->pc == 0x21C5E8u) {
        ctx->pc = 0x21C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5E4u;
        // 0x21c5e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C5ECu;
        goto label_21c5ec;
    }
    ctx->pc = 0x21C5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C5ECu);
        ctx->pc = 0x21C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5E4u;
        // 0x21c5e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C5E4u, 0x21C5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C5ECu;
label_21c5ec:
    // 0x21c5ec: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_21c5f0:
    if (ctx->pc == 0x21C5F0u) {
        ctx->pc = 0x21C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5ECu;
        // 0x21c5f0: 0xaeb20014  sw          $s2, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C5F4u;
        goto label_21c5f4;
    }
    ctx->pc = 0x21C5ECu;
    {
        const bool branch_taken_0x21c5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c5ec) {
            ctx->pc = 0x21C5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C5ECu;
            // 0x21c5f0: 0xaeb20014  sw          $s2, 0x14($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C680u;
            goto label_21c680;
        }
    }
    ctx->pc = 0x21C5F4u;
label_21c5f4:
    // 0x21c5f4: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x21c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
label_21c5f8:
    // 0x21c5f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21c5f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_21c5fc:
    // 0x21c5fc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x21c5fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21c600:
    // 0x21c600: 0x5440ffc5  bnel        $v0, $zero, . + 4 + (-0x3B << 2)
label_21c604:
    if (ctx->pc == 0x21C604u) {
        ctx->pc = 0x21C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C600u;
        // 0x21c604: 0x8e220148  lw          $v0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C608u;
        goto label_21c608;
    }
    ctx->pc = 0x21C600u;
    {
        const bool branch_taken_0x21c600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c600) {
            ctx->pc = 0x21C604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C600u;
            // 0x21c604: 0x8e220148  lw          $v0, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c518;
        }
    }
    ctx->pc = 0x21C608u;
label_21c608:
    // 0x21c608: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x21c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_21c60c:
    // 0x21c60c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21c60cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_21c610:
    // 0x21c610: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21c610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21c614:
    // 0x21c614: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
label_21c618:
    if (ctx->pc == 0x21C618u) {
        ctx->pc = 0x21C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C614u;
        // 0x21c618: 0xaea00014  sw          $zero, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C61Cu;
        goto label_21c61c;
    }
    ctx->pc = 0x21C614u;
    {
        const bool branch_taken_0x21c614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C614u;
        // 0x21c618: 0xaea00014  sw          $zero, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c614) {
            ctx->pc = 0x21C4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c4f8;
        }
    }
    ctx->pc = 0x21C61Cu;
label_21c61c:
    // 0x21c61c: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x21c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_21c620:
    // 0x21c620: 0x8e250140  lw          $a1, 0x140($s1)
    ctx->pc = 0x21c620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_21c624:
    // 0x21c624: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21c624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21c628:
    // 0x21c628: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x21c628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_21c62c:
    // 0x21c62c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_21c630:
    if (ctx->pc == 0x21C630u) {
        ctx->pc = 0x21C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C62Cu;
        // 0x21c630: 0xae230094  sw          $v1, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C634u;
        goto label_21c634;
    }
    ctx->pc = 0x21C62Cu;
    {
        const bool branch_taken_0x21c62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C62Cu;
        // 0x21c630: 0xae230094  sw          $v1, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c62c) {
            ctx->pc = 0x21C68Cu;
            goto label_21c68c;
        }
    }
    ctx->pc = 0x21C634u;
label_21c634:
    // 0x21c634: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x21c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_21c638:
    // 0x21c638: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x21c638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_21c63c:
    // 0x21c63c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21c640:
    if (ctx->pc == 0x21C640u) {
        ctx->pc = 0x21C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C63Cu;
        // 0x21c640: 0x8e2401ac  lw          $a0, 0x1AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C644u;
        goto label_21c644;
    }
    ctx->pc = 0x21C63Cu;
    {
        const bool branch_taken_0x21c63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C63Cu;
        // 0x21c640: 0x8e2401ac  lw          $a0, 0x1AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c63c) {
            ctx->pc = 0x21C650u;
            goto label_21c650;
        }
    }
    ctx->pc = 0x21C644u;
label_21c644:
    // 0x21c644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21c648:
    // 0x21c648: 0x10000009  b           . + 4 + (0x9 << 2)
label_21c64c:
    if (ctx->pc == 0x21C64Cu) {
        ctx->pc = 0x21C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C648u;
        // 0x21c64c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C650u;
        goto label_21c650;
    }
    ctx->pc = 0x21C648u;
    {
        const bool branch_taken_0x21c648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C648u;
        // 0x21c64c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c648) {
            ctx->pc = 0x21C670u;
            goto label_21c670;
        }
    }
    ctx->pc = 0x21C650u;
label_21c650:
    // 0x21c650: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x21c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_21c654:
    // 0x21c654: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x21c654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21c658:
    // 0x21c658: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21c65c:
    if (ctx->pc == 0x21C65Cu) {
        ctx->pc = 0x21C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C658u;
        // 0x21c65c: 0x8e22014c  lw          $v0, 0x14C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C660u;
        goto label_21c660;
    }
    ctx->pc = 0x21C658u;
    {
        const bool branch_taken_0x21c658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C658u;
        // 0x21c65c: 0x8e22014c  lw          $v0, 0x14C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c658) {
            ctx->pc = 0x21C668u;
            goto label_21c668;
        }
    }
    ctx->pc = 0x21C660u;
label_21c660:
    // 0x21c660: 0x10000002  b           . + 4 + (0x2 << 2)
label_21c664:
    if (ctx->pc == 0x21C664u) {
        ctx->pc = 0x21C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C660u;
        // 0x21c664: 0x8c43000c  lw          $v1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C668u;
        goto label_21c668;
    }
    ctx->pc = 0x21C660u;
    {
        const bool branch_taken_0x21c660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C660u;
        // 0x21c664: 0x8c43000c  lw          $v1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c660) {
            ctx->pc = 0x21C66Cu;
            goto label_21c66c;
        }
    }
    ctx->pc = 0x21C668u;
label_21c668:
    // 0x21c668: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x21c668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_21c66c:
    // 0x21c66c: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x21c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_21c670:
    // 0x21c670: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x21c670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_21c674:
    // 0x21c674: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21c678:
    // 0x21c678: 0x10000009  b           . + 4 + (0x9 << 2)
label_21c67c:
    if (ctx->pc == 0x21C67Cu) {
        ctx->pc = 0x21C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C678u;
        // 0x21c67c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C680u;
        goto label_21c680;
    }
    ctx->pc = 0x21C678u;
    {
        const bool branch_taken_0x21c678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C678u;
        // 0x21c67c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c678) {
            ctx->pc = 0x21C6A0u;
            goto label_21c6a0;
        }
    }
    ctx->pc = 0x21C680u;
label_21c680:
    // 0x21c680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c684:
    // 0x21c684: 0x10000006  b           . + 4 + (0x6 << 2)
label_21c688:
    if (ctx->pc == 0x21C688u) {
        ctx->pc = 0x21C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C684u;
        // 0x21c688: 0xaeb30018  sw          $s3, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C68Cu;
        goto label_21c68c;
    }
    ctx->pc = 0x21C684u;
    {
        const bool branch_taken_0x21c684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C684u;
        // 0x21c688: 0xaeb30018  sw          $s3, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c684) {
            ctx->pc = 0x21C6A0u;
            goto label_21c6a0;
        }
    }
    ctx->pc = 0x21C68Cu;
label_21c68c:
    // 0x21c68c: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x21c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_21c690:
    // 0x21c690: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21c690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21c694:
    // 0x21c694: 0x40f809  jalr        $v0
label_21c698:
    if (ctx->pc == 0x21C698u) {
        ctx->pc = 0x21C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C694u;
        // 0x21c698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C69Cu;
        goto label_21c69c;
    }
    ctx->pc = 0x21C694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C69Cu);
        ctx->pc = 0x21C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C694u;
        // 0x21c698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C694u, 0x21C69Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C69Cu;
label_21c69c:
    // 0x21c69c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21c6a0:
    // 0x21c6a0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x21c6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21c6a4:
    // 0x21c6a4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x21c6a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21c6a8:
    // 0x21c6a8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x21c6a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21c6ac:
    // 0x21c6ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x21c6acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21c6b0:
    // 0x21c6b0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x21c6b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21c6b4:
    // 0x21c6b4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x21c6b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21c6b8:
    // 0x21c6b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21c6bc:
    // 0x21c6bc: 0x3e00008  jr          $ra
label_21c6c0:
    if (ctx->pc == 0x21C6C0u) {
        ctx->pc = 0x21C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6BCu;
        // 0x21c6c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C6C4u;
        goto label_21c6c4;
    }
    ctx->pc = 0x21C6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6BCu;
        // 0x21c6c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C6C4u;
label_21c6c4:
    // 0x21c6c4: 0x0  nop
    ctx->pc = 0x21c6c4u;
    // NOP
    ctx->pc = 0x21c6c8u;
}
