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

// Function: sub_00275570
// Address: 0x275570 - 0x275740
void sub_00275570_0x275570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275570_0x275570");
#endif

    switch (ctx->pc) {
        case 0x275570u: goto label_275570;
        case 0x275574u: goto label_275574;
        case 0x275578u: goto label_275578;
        case 0x27557cu: goto label_27557c;
        case 0x275580u: goto label_275580;
        case 0x275584u: goto label_275584;
        case 0x275588u: goto label_275588;
        case 0x27558cu: goto label_27558c;
        case 0x275590u: goto label_275590;
        case 0x275594u: goto label_275594;
        case 0x275598u: goto label_275598;
        case 0x27559cu: goto label_27559c;
        case 0x2755a0u: goto label_2755a0;
        case 0x2755a4u: goto label_2755a4;
        case 0x2755a8u: goto label_2755a8;
        case 0x2755acu: goto label_2755ac;
        case 0x2755b0u: goto label_2755b0;
        case 0x2755b4u: goto label_2755b4;
        case 0x2755b8u: goto label_2755b8;
        case 0x2755bcu: goto label_2755bc;
        case 0x2755c0u: goto label_2755c0;
        case 0x2755c4u: goto label_2755c4;
        case 0x2755c8u: goto label_2755c8;
        case 0x2755ccu: goto label_2755cc;
        case 0x2755d0u: goto label_2755d0;
        case 0x2755d4u: goto label_2755d4;
        case 0x2755d8u: goto label_2755d8;
        case 0x2755dcu: goto label_2755dc;
        case 0x2755e0u: goto label_2755e0;
        case 0x2755e4u: goto label_2755e4;
        case 0x2755e8u: goto label_2755e8;
        case 0x2755ecu: goto label_2755ec;
        case 0x2755f0u: goto label_2755f0;
        case 0x2755f4u: goto label_2755f4;
        case 0x2755f8u: goto label_2755f8;
        case 0x2755fcu: goto label_2755fc;
        case 0x275600u: goto label_275600;
        case 0x275604u: goto label_275604;
        case 0x275608u: goto label_275608;
        case 0x27560cu: goto label_27560c;
        case 0x275610u: goto label_275610;
        case 0x275614u: goto label_275614;
        case 0x275618u: goto label_275618;
        case 0x27561cu: goto label_27561c;
        case 0x275620u: goto label_275620;
        case 0x275624u: goto label_275624;
        case 0x275628u: goto label_275628;
        case 0x27562cu: goto label_27562c;
        case 0x275630u: goto label_275630;
        case 0x275634u: goto label_275634;
        case 0x275638u: goto label_275638;
        case 0x27563cu: goto label_27563c;
        case 0x275640u: goto label_275640;
        case 0x275644u: goto label_275644;
        case 0x275648u: goto label_275648;
        case 0x27564cu: goto label_27564c;
        case 0x275650u: goto label_275650;
        case 0x275654u: goto label_275654;
        case 0x275658u: goto label_275658;
        case 0x27565cu: goto label_27565c;
        case 0x275660u: goto label_275660;
        case 0x275664u: goto label_275664;
        case 0x275668u: goto label_275668;
        case 0x27566cu: goto label_27566c;
        case 0x275670u: goto label_275670;
        case 0x275674u: goto label_275674;
        case 0x275678u: goto label_275678;
        case 0x27567cu: goto label_27567c;
        case 0x275680u: goto label_275680;
        case 0x275684u: goto label_275684;
        case 0x275688u: goto label_275688;
        case 0x27568cu: goto label_27568c;
        case 0x275690u: goto label_275690;
        case 0x275694u: goto label_275694;
        case 0x275698u: goto label_275698;
        case 0x27569cu: goto label_27569c;
        case 0x2756a0u: goto label_2756a0;
        case 0x2756a4u: goto label_2756a4;
        case 0x2756a8u: goto label_2756a8;
        case 0x2756acu: goto label_2756ac;
        case 0x2756b0u: goto label_2756b0;
        case 0x2756b4u: goto label_2756b4;
        case 0x2756b8u: goto label_2756b8;
        case 0x2756bcu: goto label_2756bc;
        case 0x2756c0u: goto label_2756c0;
        case 0x2756c4u: goto label_2756c4;
        case 0x2756c8u: goto label_2756c8;
        case 0x2756ccu: goto label_2756cc;
        case 0x2756d0u: goto label_2756d0;
        case 0x2756d4u: goto label_2756d4;
        case 0x2756d8u: goto label_2756d8;
        case 0x2756dcu: goto label_2756dc;
        case 0x2756e0u: goto label_2756e0;
        case 0x2756e4u: goto label_2756e4;
        case 0x2756e8u: goto label_2756e8;
        case 0x2756ecu: goto label_2756ec;
        case 0x2756f0u: goto label_2756f0;
        case 0x2756f4u: goto label_2756f4;
        case 0x2756f8u: goto label_2756f8;
        case 0x2756fcu: goto label_2756fc;
        case 0x275700u: goto label_275700;
        case 0x275704u: goto label_275704;
        case 0x275708u: goto label_275708;
        case 0x27570cu: goto label_27570c;
        case 0x275710u: goto label_275710;
        case 0x275714u: goto label_275714;
        case 0x275718u: goto label_275718;
        case 0x27571cu: goto label_27571c;
        case 0x275720u: goto label_275720;
        case 0x275724u: goto label_275724;
        case 0x275728u: goto label_275728;
        case 0x27572cu: goto label_27572c;
        case 0x275730u: goto label_275730;
        case 0x275734u: goto label_275734;
        case 0x275738u: goto label_275738;
        case 0x27573cu: goto label_27573c;
        default: break;
    }

    ctx->pc = 0x275570u;

label_275570:
    // 0x275570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x275570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_275574:
    // 0x275574: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x275574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_275578:
    // 0x275578: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x275578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_27557c:
    // 0x27557c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27557cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275580:
    // 0x275580: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x275580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_275584:
    // 0x275584: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_275588:
    // 0x275588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27558c:
    // 0x27558c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27558cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_275590:
    // 0x275590: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x275590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_275594:
    // 0x275594: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x275594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_275598:
    // 0x275598: 0x8e28002c  lw          $t0, 0x2C($s1)
    ctx->pc = 0x275598u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_27559c:
    // 0x27559c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x27559cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2755a0:
    // 0x2755a0: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x2755a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2755a4:
    // 0x2755a4: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x2755a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_2755a8:
    // 0x2755a8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2755a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2755ac:
    // 0x2755ac: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2755acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2755b0:
    // 0x2755b0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2755b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2755b4:
    // 0x2755b4: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x2755b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2755b8:
    // 0x2755b8: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x2755b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_2755bc:
    // 0x2755bc: 0xae26003c  sw          $a2, 0x3C($s1)
    ctx->pc = 0x2755bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 6));
label_2755c0:
    // 0x2755c0: 0xae240040  sw          $a0, 0x40($s1)
    ctx->pc = 0x2755c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 4));
label_2755c4:
    // 0x2755c4: 0xae250044  sw          $a1, 0x44($s1)
    ctx->pc = 0x2755c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 5));
label_2755c8:
    // 0x2755c8: 0xae270048  sw          $a3, 0x48($s1)
    ctx->pc = 0x2755c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 7));
label_2755cc:
    // 0x2755cc: 0x19000015  blez        $t0, . + 4 + (0x15 << 2)
label_2755d0:
    if (ctx->pc == 0x2755D0u) {
        ctx->pc = 0x2755D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755CCu;
        // 0x2755d0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2755D4u;
        goto label_2755d4;
    }
    ctx->pc = 0x2755CCu;
    {
        const bool branch_taken_0x2755cc = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x2755D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755CCu;
        // 0x2755d0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2755cc) {
            ctx->pc = 0x275624u;
            goto label_275624;
        }
    }
    ctx->pc = 0x2755D4u;
label_2755d4:
    // 0x2755d4: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x2755d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2755d8:
    // 0x2755d8: 0x2083021  addu        $a2, $s0, $t0
    ctx->pc = 0x2755d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_2755dc:
    // 0x2755dc: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x2755dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2755e0:
    // 0x2755e0: 0xc51818  mult        $v1, $a2, $a1
    ctx->pc = 0x2755e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2755e4:
    // 0x2755e4: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x2755e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2755e8:
    // 0x2755e8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x2755e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2755ec:
    // 0x2755ec: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2755ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2755f0:
    // 0x2755f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2755f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2755f4:
    // 0x2755f4: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x2755f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2755f8:
    // 0x2755f8: 0x2051818  mult        $v1, $s0, $a1
    ctx->pc = 0x2755f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2755fc:
    // 0x2755fc: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x2755fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_275600:
    // 0x275600: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x275600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_275604:
    // 0x275604: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x275604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_275608:
    // 0x275608: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x275608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_27560c:
    // 0x27560c: 0x40f809  jalr        $v0
label_275610:
    if (ctx->pc == 0x275610u) {
        ctx->pc = 0x275610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27560Cu;
        // 0x275610: 0x8e470014  lw          $a3, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275614u;
        goto label_275614;
    }
    ctx->pc = 0x27560Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275614u);
        ctx->pc = 0x275610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27560Cu;
        // 0x275610: 0x8e470014  lw          $a3, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27560Cu, 0x275614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275614u;
label_275614:
    // 0x275614: 0x8e28002c  lw          $t0, 0x2C($s1)
    ctx->pc = 0x275614u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_275618:
    // 0x275618: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x275618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_27561c:
    // 0x27561c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_275620:
    if (ctx->pc == 0x275620u) {
        ctx->pc = 0x275620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27561Cu;
        // 0x275620: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275624u;
        goto label_275624;
    }
    ctx->pc = 0x27561Cu;
    {
        const bool branch_taken_0x27561c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27561c) {
            ctx->pc = 0x275620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27561Cu;
            // 0x275620: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2755D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2755d8;
        }
    }
    ctx->pc = 0x275624u;
label_275624:
    // 0x275624: 0x8e29002c  lw          $t1, 0x2C($s1)
    ctx->pc = 0x275624u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_275628:
    // 0x275628: 0x262a004c  addiu       $t2, $s1, 0x4C
    ctx->pc = 0x275628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_27562c:
    // 0x27562c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x27562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_275630:
    // 0x275630: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x275630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_275634:
    // 0x275634: 0x1231018  mult        $v0, $t1, $v1
    ctx->pc = 0x275634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_275638:
    // 0x275638: 0x19200033  blez        $t1, . + 4 + (0x33 << 2)
label_27563c:
    if (ctx->pc == 0x27563Cu) {
        ctx->pc = 0x27563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275638u;
        // 0x27563c: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275640u;
        goto label_275640;
    }
    ctx->pc = 0x275638u;
    {
        const bool branch_taken_0x275638 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x27563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275638u;
        // 0x27563c: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275638) {
            ctx->pc = 0x275708u;
            goto label_275708;
        }
    }
    ctx->pc = 0x275640u;
label_275640:
    // 0x275640: 0x91023  negu        $v0, $t1
    ctx->pc = 0x275640u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
label_275644:
    // 0x275644: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x275644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_275648:
    // 0x275648: 0x30470003  andi        $a3, $v0, 0x3
    ctx->pc = 0x275648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_27564c:
    // 0x27564c: 0x8e280024  lw          $t0, 0x24($s1)
    ctx->pc = 0x27564cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_275650:
    // 0x275650: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x275650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_275654:
    // 0x275654: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
label_275658:
    if (ctx->pc == 0x275658u) {
        ctx->pc = 0x275658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275654u;
        // 0x275658: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27565Cu;
        goto label_27565c;
    }
    ctx->pc = 0x275654u;
    {
        const bool branch_taken_0x275654 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x275658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275654u;
        // 0x275658: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275654) {
            ctx->pc = 0x2756B0u;
            goto label_2756b0;
        }
    }
    ctx->pc = 0x27565Cu;
label_27565c:
    // 0x27565c: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x27565cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_275660:
    // 0x275660: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_275664:
    if (ctx->pc == 0x275664u) {
        ctx->pc = 0x275664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275660u;
        // 0x275664: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x275668u;
        goto label_275668;
    }
    ctx->pc = 0x275660u;
    {
        const bool branch_taken_0x275660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275660u;
        // 0x275664: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275660) {
            ctx->pc = 0x2756A0u;
            goto label_2756a0;
        }
    }
    ctx->pc = 0x275668u;
label_275668:
    // 0x275668: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_27566c:
    if (ctx->pc == 0x27566Cu) {
        ctx->pc = 0x27566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275668u;
        // 0x27566c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275670u;
        goto label_275670;
    }
    ctx->pc = 0x275668u;
    {
        const bool branch_taken_0x275668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275668) {
            ctx->pc = 0x27566Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275668u;
            // 0x27566c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27568Cu;
            goto label_27568c;
        }
    }
    ctx->pc = 0x275670u;
label_275670:
    // 0x275670: 0xae25004c  sw          $a1, 0x4C($s1)
    ctx->pc = 0x275670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 5));
label_275674:
    // 0x275674: 0x1481821  addu        $v1, $t2, $t0
    ctx->pc = 0x275674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_275678:
    // 0x275678: 0xad440004  sw          $a0, 0x4($t2)
    ctx->pc = 0x275678u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 4));
label_27567c:
    // 0x27567c: 0x2530ffff  addiu       $s0, $t1, -0x1
    ctx->pc = 0x27567cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_275680:
    // 0x275680: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x275680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_275684:
    // 0x275684: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x275684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_275688:
    // 0x275688: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x275688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_27568c:
    // 0x27568c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27568cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_275690:
    // 0x275690: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x275690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_275694:
    // 0x275694: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x275694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_275698:
    // 0x275698: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x275698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_27569c:
    // 0x27569c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x27569cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2756a0:
    // 0x2756a0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2756a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_2756a4:
    // 0x2756a4: 0x10000013  b           . + 4 + (0x13 << 2)
label_2756a8:
    if (ctx->pc == 0x2756A8u) {
        ctx->pc = 0x2756A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756A4u;
        // 0x2756a8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2756ACu;
        goto label_2756ac;
    }
    ctx->pc = 0x2756A4u;
    {
        const bool branch_taken_0x2756a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2756A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756A4u;
        // 0x2756a8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756a4) {
            ctx->pc = 0x2756F4u;
            goto label_2756f4;
        }
    }
    ctx->pc = 0x2756ACu;
label_2756ac:
    // 0x2756ac: 0x0  nop
    ctx->pc = 0x2756acu;
    // NOP
label_2756b0:
    // 0x2756b0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2756b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_2756b4:
    // 0x2756b4: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x2756b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_2756b8:
    // 0x2756b8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2756b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_2756bc:
    // 0x2756bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2756bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2756c0:
    // 0x2756c0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2756c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2756c4:
    // 0x2756c4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2756c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2756c8:
    // 0x2756c8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2756c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_2756cc:
    // 0x2756cc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2756ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_2756d0:
    // 0x2756d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2756d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2756d4:
    // 0x2756d4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2756d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2756d8:
    // 0x2756d8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2756d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2756dc:
    // 0x2756dc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2756dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_2756e0:
    // 0x2756e0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2756e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_2756e4:
    // 0x2756e4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2756e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2756e8:
    // 0x2756e8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2756e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2756ec:
    // 0x2756ec: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2756ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2756f0:
    // 0x2756f0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2756f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_2756f4:
    // 0x2756f4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2756f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_2756f8:
    // 0x2756f8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2756f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2756fc:
    // 0x2756fc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2756fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_275700:
    // 0x275700: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
label_275704:
    if (ctx->pc == 0x275704u) {
        ctx->pc = 0x275704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275700u;
        // 0x275704: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275708u;
        goto label_275708;
    }
    ctx->pc = 0x275700u;
    {
        const bool branch_taken_0x275700 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x275704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275700u;
        // 0x275704: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275700) {
            ctx->pc = 0x2756B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2756b0;
        }
    }
    ctx->pc = 0x275708u;
label_275708:
    // 0x275708: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x275708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_27570c:
    // 0x27570c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275710:
    // 0x275710: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x275710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_275714:
    // 0x275714: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x275714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_275718:
    // 0x275718: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x275718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27571c:
    // 0x27571c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27571cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_275720:
    // 0x275720: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x275720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_275724:
    // 0x275724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_275728:
    // 0x275728: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x275728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_27572c:
    // 0x27572c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27572cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_275730:
    // 0x275730: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x275730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_275734:
    // 0x275734: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x275734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_275738:
    // 0x275738: 0x3e00008  jr          $ra
label_27573c:
    if (ctx->pc == 0x27573Cu) {
        ctx->pc = 0x27573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275738u;
        // 0x27573c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275740u;
        goto label_fallthrough_0x275738;
    }
    ctx->pc = 0x275738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275738u;
        // 0x27573c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x275738:
    ctx->pc = 0x275740u;
}
