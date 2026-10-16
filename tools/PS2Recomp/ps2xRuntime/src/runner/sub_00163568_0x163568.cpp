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

// Function: sub_00163568
// Address: 0x163568 - 0x163890
void sub_00163568_0x163568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163568_0x163568");
#endif

    switch (ctx->pc) {
        case 0x163568u: goto label_163568;
        case 0x16356cu: goto label_16356c;
        case 0x163570u: goto label_163570;
        case 0x163574u: goto label_163574;
        case 0x163578u: goto label_163578;
        case 0x16357cu: goto label_16357c;
        case 0x163580u: goto label_163580;
        case 0x163584u: goto label_163584;
        case 0x163588u: goto label_163588;
        case 0x16358cu: goto label_16358c;
        case 0x163590u: goto label_163590;
        case 0x163594u: goto label_163594;
        case 0x163598u: goto label_163598;
        case 0x16359cu: goto label_16359c;
        case 0x1635a0u: goto label_1635a0;
        case 0x1635a4u: goto label_1635a4;
        case 0x1635a8u: goto label_1635a8;
        case 0x1635acu: goto label_1635ac;
        case 0x1635b0u: goto label_1635b0;
        case 0x1635b4u: goto label_1635b4;
        case 0x1635b8u: goto label_1635b8;
        case 0x1635bcu: goto label_1635bc;
        case 0x1635c0u: goto label_1635c0;
        case 0x1635c4u: goto label_1635c4;
        case 0x1635c8u: goto label_1635c8;
        case 0x1635ccu: goto label_1635cc;
        case 0x1635d0u: goto label_1635d0;
        case 0x1635d4u: goto label_1635d4;
        case 0x1635d8u: goto label_1635d8;
        case 0x1635dcu: goto label_1635dc;
        case 0x1635e0u: goto label_1635e0;
        case 0x1635e4u: goto label_1635e4;
        case 0x1635e8u: goto label_1635e8;
        case 0x1635ecu: goto label_1635ec;
        case 0x1635f0u: goto label_1635f0;
        case 0x1635f4u: goto label_1635f4;
        case 0x1635f8u: goto label_1635f8;
        case 0x1635fcu: goto label_1635fc;
        case 0x163600u: goto label_163600;
        case 0x163604u: goto label_163604;
        case 0x163608u: goto label_163608;
        case 0x16360cu: goto label_16360c;
        case 0x163610u: goto label_163610;
        case 0x163614u: goto label_163614;
        case 0x163618u: goto label_163618;
        case 0x16361cu: goto label_16361c;
        case 0x163620u: goto label_163620;
        case 0x163624u: goto label_163624;
        case 0x163628u: goto label_163628;
        case 0x16362cu: goto label_16362c;
        case 0x163630u: goto label_163630;
        case 0x163634u: goto label_163634;
        case 0x163638u: goto label_163638;
        case 0x16363cu: goto label_16363c;
        case 0x163640u: goto label_163640;
        case 0x163644u: goto label_163644;
        case 0x163648u: goto label_163648;
        case 0x16364cu: goto label_16364c;
        case 0x163650u: goto label_163650;
        case 0x163654u: goto label_163654;
        case 0x163658u: goto label_163658;
        case 0x16365cu: goto label_16365c;
        case 0x163660u: goto label_163660;
        case 0x163664u: goto label_163664;
        case 0x163668u: goto label_163668;
        case 0x16366cu: goto label_16366c;
        case 0x163670u: goto label_163670;
        case 0x163674u: goto label_163674;
        case 0x163678u: goto label_163678;
        case 0x16367cu: goto label_16367c;
        case 0x163680u: goto label_163680;
        case 0x163684u: goto label_163684;
        case 0x163688u: goto label_163688;
        case 0x16368cu: goto label_16368c;
        case 0x163690u: goto label_163690;
        case 0x163694u: goto label_163694;
        case 0x163698u: goto label_163698;
        case 0x16369cu: goto label_16369c;
        case 0x1636a0u: goto label_1636a0;
        case 0x1636a4u: goto label_1636a4;
        case 0x1636a8u: goto label_1636a8;
        case 0x1636acu: goto label_1636ac;
        case 0x1636b0u: goto label_1636b0;
        case 0x1636b4u: goto label_1636b4;
        case 0x1636b8u: goto label_1636b8;
        case 0x1636bcu: goto label_1636bc;
        case 0x1636c0u: goto label_1636c0;
        case 0x1636c4u: goto label_1636c4;
        case 0x1636c8u: goto label_1636c8;
        case 0x1636ccu: goto label_1636cc;
        case 0x1636d0u: goto label_1636d0;
        case 0x1636d4u: goto label_1636d4;
        case 0x1636d8u: goto label_1636d8;
        case 0x1636dcu: goto label_1636dc;
        case 0x1636e0u: goto label_1636e0;
        case 0x1636e4u: goto label_1636e4;
        case 0x1636e8u: goto label_1636e8;
        case 0x1636ecu: goto label_1636ec;
        case 0x1636f0u: goto label_1636f0;
        case 0x1636f4u: goto label_1636f4;
        case 0x1636f8u: goto label_1636f8;
        case 0x1636fcu: goto label_1636fc;
        case 0x163700u: goto label_163700;
        case 0x163704u: goto label_163704;
        case 0x163708u: goto label_163708;
        case 0x16370cu: goto label_16370c;
        case 0x163710u: goto label_163710;
        case 0x163714u: goto label_163714;
        case 0x163718u: goto label_163718;
        case 0x16371cu: goto label_16371c;
        case 0x163720u: goto label_163720;
        case 0x163724u: goto label_163724;
        case 0x163728u: goto label_163728;
        case 0x16372cu: goto label_16372c;
        case 0x163730u: goto label_163730;
        case 0x163734u: goto label_163734;
        case 0x163738u: goto label_163738;
        case 0x16373cu: goto label_16373c;
        case 0x163740u: goto label_163740;
        case 0x163744u: goto label_163744;
        case 0x163748u: goto label_163748;
        case 0x16374cu: goto label_16374c;
        case 0x163750u: goto label_163750;
        case 0x163754u: goto label_163754;
        case 0x163758u: goto label_163758;
        case 0x16375cu: goto label_16375c;
        case 0x163760u: goto label_163760;
        case 0x163764u: goto label_163764;
        case 0x163768u: goto label_163768;
        case 0x16376cu: goto label_16376c;
        case 0x163770u: goto label_163770;
        case 0x163774u: goto label_163774;
        case 0x163778u: goto label_163778;
        case 0x16377cu: goto label_16377c;
        case 0x163780u: goto label_163780;
        case 0x163784u: goto label_163784;
        case 0x163788u: goto label_163788;
        case 0x16378cu: goto label_16378c;
        case 0x163790u: goto label_163790;
        case 0x163794u: goto label_163794;
        case 0x163798u: goto label_163798;
        case 0x16379cu: goto label_16379c;
        case 0x1637a0u: goto label_1637a0;
        case 0x1637a4u: goto label_1637a4;
        case 0x1637a8u: goto label_1637a8;
        case 0x1637acu: goto label_1637ac;
        case 0x1637b0u: goto label_1637b0;
        case 0x1637b4u: goto label_1637b4;
        case 0x1637b8u: goto label_1637b8;
        case 0x1637bcu: goto label_1637bc;
        case 0x1637c0u: goto label_1637c0;
        case 0x1637c4u: goto label_1637c4;
        case 0x1637c8u: goto label_1637c8;
        case 0x1637ccu: goto label_1637cc;
        case 0x1637d0u: goto label_1637d0;
        case 0x1637d4u: goto label_1637d4;
        case 0x1637d8u: goto label_1637d8;
        case 0x1637dcu: goto label_1637dc;
        case 0x1637e0u: goto label_1637e0;
        case 0x1637e4u: goto label_1637e4;
        case 0x1637e8u: goto label_1637e8;
        case 0x1637ecu: goto label_1637ec;
        case 0x1637f0u: goto label_1637f0;
        case 0x1637f4u: goto label_1637f4;
        case 0x1637f8u: goto label_1637f8;
        case 0x1637fcu: goto label_1637fc;
        case 0x163800u: goto label_163800;
        case 0x163804u: goto label_163804;
        case 0x163808u: goto label_163808;
        case 0x16380cu: goto label_16380c;
        case 0x163810u: goto label_163810;
        case 0x163814u: goto label_163814;
        case 0x163818u: goto label_163818;
        case 0x16381cu: goto label_16381c;
        case 0x163820u: goto label_163820;
        case 0x163824u: goto label_163824;
        case 0x163828u: goto label_163828;
        case 0x16382cu: goto label_16382c;
        case 0x163830u: goto label_163830;
        case 0x163834u: goto label_163834;
        case 0x163838u: goto label_163838;
        case 0x16383cu: goto label_16383c;
        case 0x163840u: goto label_163840;
        case 0x163844u: goto label_163844;
        case 0x163848u: goto label_163848;
        case 0x16384cu: goto label_16384c;
        case 0x163850u: goto label_163850;
        case 0x163854u: goto label_163854;
        case 0x163858u: goto label_163858;
        case 0x16385cu: goto label_16385c;
        case 0x163860u: goto label_163860;
        case 0x163864u: goto label_163864;
        case 0x163868u: goto label_163868;
        case 0x16386cu: goto label_16386c;
        case 0x163870u: goto label_163870;
        case 0x163874u: goto label_163874;
        case 0x163878u: goto label_163878;
        case 0x16387cu: goto label_16387c;
        case 0x163880u: goto label_163880;
        case 0x163884u: goto label_163884;
        case 0x163888u: goto label_163888;
        case 0x16388cu: goto label_16388c;
        default: break;
    }

    ctx->pc = 0x163568u;

label_163568:
    // 0x163568: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x163568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_16356c:
    // 0x16356c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x16356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_163570:
    // 0x163570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x163570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163574:
    // 0x163574: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x163574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_163578:
    // 0x163578: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x163578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_16357c:
    // 0x16357c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16357cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_163580:
    // 0x163580: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x163580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_163584:
    // 0x163584: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x163584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_163588:
    // 0x163588: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x163588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_16358c:
    // 0x16358c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x16358cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_163590:
    // 0x163590: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x163590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_163594:
    // 0x163594: 0x311400ff  andi        $s4, $t0, 0xFF
    ctx->pc = 0x163594u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_163598:
    // 0x163598: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x163598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16359c:
    // 0x16359c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1635a0:
    // 0x1635a0: 0xae206af4  sw          $zero, 0x6AF4($s1)
    ctx->pc = 0x1635a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 27380), GPR_U32(ctx, 0));
label_1635a4:
    // 0x1635a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1635a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1635a8:
    // 0x1635a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1635a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1635ac:
    // 0x1635ac: 0xc08063c  jal         func_2018F0
label_1635b0:
    if (ctx->pc == 0x1635B0u) {
        ctx->pc = 0x1635B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635ACu;
        // 0x1635b0: 0x26276af8  addiu       $a3, $s1, 0x6AF8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 27384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1635B4u;
        goto label_1635b4;
    }
    ctx->pc = 0x1635ACu;
    SET_GPR_U32(ctx, 31, 0x1635B4u);
    ctx->pc = 0x1635B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1635ACu;
    // 0x1635b0: 0x26276af8  addiu       $a3, $s1, 0x6AF8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 27384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x1635ACu, 0x1635B4u)) {
        return;
    }
    ctx->pc = 0x1635B4u;
label_1635b4:
    // 0x1635b4: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
label_1635b8:
    if (ctx->pc == 0x1635B8u) {
        ctx->pc = 0x1635B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635B4u;
        // 0x1635b8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1635BCu;
        goto label_1635bc;
    }
    ctx->pc = 0x1635B4u;
    {
        const bool branch_taken_0x1635b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1635B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635B4u;
        // 0x1635b8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635b4) {
            ctx->pc = 0x163868u;
            goto label_163868;
        }
    }
    ctx->pc = 0x1635BCu;
label_1635bc:
    // 0x1635bc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1635bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_1635c0:
    // 0x1635c0: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x1635c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_1635c4:
    // 0x1635c4: 0x24843dd0  addiu       $a0, $a0, 0x3DD0
    ctx->pc = 0x1635c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15824));
label_1635c8:
    // 0x1635c8: 0x40f809  jalr        $v0
label_1635cc:
    if (ctx->pc == 0x1635CCu) {
        ctx->pc = 0x1635CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635C8u;
        // 0x1635cc: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1635D0u;
        goto label_1635d0;
    }
    ctx->pc = 0x1635C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1635D0u);
        ctx->pc = 0x1635CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635C8u;
        // 0x1635cc: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1635C8u, 0x1635D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1635D0u;
label_1635d0:
    // 0x1635d0: 0x144000a6  bnez        $v0, . + 4 + (0xA6 << 2)
label_1635d4:
    if (ctx->pc == 0x1635D4u) {
        ctx->pc = 0x1635D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635D0u;
        // 0x1635d4: 0x26226494  addiu       $v0, $s1, 0x6494 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 25748));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1635D8u;
        goto label_1635d8;
    }
    ctx->pc = 0x1635D0u;
    {
        const bool branch_taken_0x1635d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1635D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635D0u;
        // 0x1635d4: 0x26226494  addiu       $v0, $s1, 0x6494 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 25748));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635d0) {
            ctx->pc = 0x16386Cu;
            goto label_16386c;
        }
    }
    ctx->pc = 0x1635D8u;
label_1635d8:
    // 0x1635d8: 0x26356494  addiu       $s5, $s1, 0x6494
    ctx->pc = 0x1635d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 25748));
label_1635dc:
    // 0x1635dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1635dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1635e0:
    // 0x1635e0: 0xc0c4a72  jal         func_3129C8
label_1635e4:
    if (ctx->pc == 0x1635E4u) {
        ctx->pc = 0x1635E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635E0u;
        // 0x1635e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1635E8u;
        goto label_1635e8;
    }
    ctx->pc = 0x1635E0u;
    SET_GPR_U32(ctx, 31, 0x1635E8u);
    ctx->pc = 0x1635E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1635E0u;
    // 0x1635e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1635E0u, 0x1635E8u)) {
        return;
    }
    ctx->pc = 0x1635E8u;
label_1635e8:
    // 0x1635e8: 0x92221008  lbu         $v0, 0x1008($s1)
    ctx->pc = 0x1635e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4104)));
label_1635ec:
    // 0x1635ec: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1635f0:
    if (ctx->pc == 0x1635F0u) {
        ctx->pc = 0x1635F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635ECu;
        // 0x1635f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1635F4u;
        goto label_1635f4;
    }
    ctx->pc = 0x1635ECu;
    {
        const bool branch_taken_0x1635ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1635F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635ECu;
        // 0x1635f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635ec) {
            ctx->pc = 0x16364Cu;
            goto label_16364c;
        }
    }
    ctx->pc = 0x1635F4u;
label_1635f4:
    // 0x1635f4: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1635f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1635f8:
    // 0x1635f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1635f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1635fc:
    // 0x1635fc: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1635fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_163600:
    // 0x163600: 0x8c82fff4  lw          $v0, -0xC($a0)
    ctx->pc = 0x163600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967284)));
label_163604:
    // 0x163604: 0x1448000d  bne         $v0, $t0, . + 4 + (0xD << 2)
label_163608:
    if (ctx->pc == 0x163608u) {
        ctx->pc = 0x163608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163604u;
        // 0x163608: 0x53100  sll         $a2, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16360Cu;
        goto label_16360c;
    }
    ctx->pc = 0x163604u;
    {
        const bool branch_taken_0x163604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x163608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163604u;
        // 0x163608: 0x53100  sll         $a2, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163604) {
            ctx->pc = 0x16363Cu;
            goto label_16363c;
        }
    }
    ctx->pc = 0x16360Cu;
label_16360c:
    // 0x16360c: 0x8c83fff8  lw          $v1, -0x8($a0)
    ctx->pc = 0x16360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_163610:
    // 0x163610: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x163610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_163614:
    // 0x163614: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_163618:
    if (ctx->pc == 0x163618u) {
        ctx->pc = 0x163618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163614u;
        // 0x163618: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16361Cu;
        goto label_16361c;
    }
    ctx->pc = 0x163614u;
    {
        const bool branch_taken_0x163614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163614) {
            ctx->pc = 0x163618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163614u;
            // 0x163618: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163640u;
            goto label_163640;
        }
    }
    ctx->pc = 0x16361Cu;
label_16361c:
    // 0x16361c: 0x8c83fffc  lw          $v1, -0x4($a0)
    ctx->pc = 0x16361cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_163620:
    // 0x163620: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x163620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_163624:
    // 0x163624: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_163628:
    if (ctx->pc == 0x163628u) {
        ctx->pc = 0x163628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163624u;
        // 0x163628: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16362Cu;
        goto label_16362c;
    }
    ctx->pc = 0x163624u;
    {
        const bool branch_taken_0x163624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163624) {
            ctx->pc = 0x163628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163624u;
            // 0x163628: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163640u;
            goto label_163640;
        }
    }
    ctx->pc = 0x16362Cu;
label_16362c:
    // 0x16362c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16362cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_163630:
    // 0x163630: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x163630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_163634:
    // 0x163634: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
label_163638:
    if (ctx->pc == 0x163638u) {
        ctx->pc = 0x163638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163634u;
        // 0x163638: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16363Cu;
        goto label_16363c;
    }
    ctx->pc = 0x163634u;
    {
        const bool branch_taken_0x163634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x163638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163634u;
        // 0x163638: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163634) {
            ctx->pc = 0x163798u;
            goto label_163798;
        }
    }
    ctx->pc = 0x16363Cu;
label_16363c:
    // 0x16363c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16363cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_163640:
    // 0x163640: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x163640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_163644:
    // 0x163644: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_163648:
    if (ctx->pc == 0x163648u) {
        ctx->pc = 0x163648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163644u;
        // 0x163648: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16364Cu;
        goto label_16364c;
    }
    ctx->pc = 0x163644u;
    {
        const bool branch_taken_0x163644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163644u;
        // 0x163648: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163644) {
            ctx->pc = 0x163600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163600;
        }
    }
    ctx->pc = 0x16364Cu;
label_16364c:
    // 0x16364c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16364cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163650:
    // 0x163650: 0x54e00013  bnel        $a3, $zero, . + 4 + (0x13 << 2)
label_163654:
    if (ctx->pc == 0x163654u) {
        ctx->pc = 0x163654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163650u;
        // 0x163654: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163658u;
        goto label_163658;
    }
    ctx->pc = 0x163650u;
    {
        const bool branch_taken_0x163650 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x163650) {
            ctx->pc = 0x163654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163650u;
            // 0x163654: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1636A0u;
            goto label_1636a0;
        }
    }
    ctx->pc = 0x163658u;
label_163658:
    // 0x163658: 0xc0594f2  jal         func_1653C8
label_16365c:
    if (ctx->pc == 0x16365Cu) {
        ctx->pc = 0x16365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163658u;
        // 0x16365c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163660u;
        goto label_163660;
    }
    ctx->pc = 0x163658u;
    SET_GPR_U32(ctx, 31, 0x163660u);
    ctx->pc = 0x16365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163658u;
    // 0x16365c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1653C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1653C8u, 0x163658u, 0x163660u)) {
        return;
    }
    ctx->pc = 0x163660u;
label_163660:
    // 0x163660: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_163664:
    // 0x163664: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_163668:
    // 0x163668: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x163668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_16366c:
    // 0x16366c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x16366cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_163670:
    // 0x163670: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x163670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_163674:
    // 0x163674: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x163674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_163678:
    // 0x163678: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x163678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16367c:
    // 0x16367c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16367cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_163680:
    // 0x163680: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x163680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_163684:
    // 0x163684: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x163684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_163688:
    // 0x163688: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x163688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_16368c:
    // 0x16368c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x16368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_163690:
    // 0x163690: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x163690u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_163694:
    // 0x163694: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x163694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_163698:
    // 0x163698: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x163698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_16369c:
    // 0x16369c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x16369cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_1636a0:
    // 0x1636a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1636a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1636a4:
    // 0x1636a4: 0xa3a00024  sb          $zero, 0x24($sp)
    ctx->pc = 0x1636a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 36), (uint8_t)GPR_U32(ctx, 0));
label_1636a8:
    // 0x1636a8: 0x1280002a  beqz        $s4, . + 4 + (0x2A << 2)
label_1636ac:
    if (ctx->pc == 0x1636ACu) {
        ctx->pc = 0x1636ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636A8u;
        // 0x1636ac: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636B0u;
        goto label_1636b0;
    }
    ctx->pc = 0x1636A8u;
    {
        const bool branch_taken_0x1636a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636A8u;
        // 0x1636ac: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636a8) {
            ctx->pc = 0x163754u;
            goto label_163754;
        }
    }
    ctx->pc = 0x1636B0u;
label_1636b0:
    // 0x1636b0: 0x27a80005  addiu       $t0, $sp, 0x5
    ctx->pc = 0x1636b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5));
label_1636b4:
    // 0x1636b4: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x1636b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1636b8:
    // 0x1636b8: 0x27a60006  addiu       $a2, $sp, 0x6
    ctx->pc = 0x1636b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 6));
label_1636bc:
    // 0x1636bc: 0x0  nop
    ctx->pc = 0x1636bcu;
    // NOP
label_1636c0:
    // 0x1636c0: 0x93a20024  lbu         $v0, 0x24($sp)
    ctx->pc = 0x1636c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 36)));
label_1636c4:
    // 0x1636c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1636c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1636c8:
    // 0x1636c8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1636cc:
    if (ctx->pc == 0x1636CCu) {
        ctx->pc = 0x1636CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636C8u;
        // 0x1636cc: 0x1022021  addu        $a0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636D0u;
        goto label_1636d0;
    }
    ctx->pc = 0x1636C8u;
    {
        const bool branch_taken_0x1636c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636C8u;
        // 0x1636cc: 0x1022021  addu        $a0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636c8) {
            ctx->pc = 0x1636E4u;
            goto label_1636e4;
        }
    }
    ctx->pc = 0x1636D0u;
label_1636d0:
    // 0x1636d0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1636d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1636d4:
    // 0x1636d4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1636d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1636d8:
    // 0x1636d8: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1636d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1636dc:
    // 0x1636dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1636e0:
    if (ctx->pc == 0x1636E0u) {
        ctx->pc = 0x1636E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636DCu;
        // 0x1636e0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636E4u;
        goto label_1636e4;
    }
    ctx->pc = 0x1636DCu;
    {
        const bool branch_taken_0x1636dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636DCu;
        // 0x1636e0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636dc) {
            ctx->pc = 0x1636E8u;
            goto label_1636e8;
        }
    }
    ctx->pc = 0x1636E4u;
label_1636e4:
    // 0x1636e4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1636e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1636e8:
    // 0x1636e8: 0x93a20024  lbu         $v0, 0x24($sp)
    ctx->pc = 0x1636e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 36)));
label_1636ec:
    // 0x1636ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1636ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1636f0:
    // 0x1636f0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1636f4:
    if (ctx->pc == 0x1636F4u) {
        ctx->pc = 0x1636F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636F0u;
        // 0x1636f4: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636F8u;
        goto label_1636f8;
    }
    ctx->pc = 0x1636F0u;
    {
        const bool branch_taken_0x1636f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636F0u;
        // 0x1636f4: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636f0) {
            ctx->pc = 0x16370Cu;
            goto label_16370c;
        }
    }
    ctx->pc = 0x1636F8u;
label_1636f8:
    // 0x1636f8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1636f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1636fc:
    // 0x1636fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1636fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_163700:
    // 0x163700: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x163700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_163704:
    // 0x163704: 0x10000002  b           . + 4 + (0x2 << 2)
label_163708:
    if (ctx->pc == 0x163708u) {
        ctx->pc = 0x163708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163704u;
        // 0x163708: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16370Cu;
        goto label_16370c;
    }
    ctx->pc = 0x163704u;
    {
        const bool branch_taken_0x163704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163704u;
        // 0x163708: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163704) {
            ctx->pc = 0x163710u;
            goto label_163710;
        }
    }
    ctx->pc = 0x16370Cu;
label_16370c:
    // 0x16370c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x16370cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_163710:
    // 0x163710: 0x93a20024  lbu         $v0, 0x24($sp)
    ctx->pc = 0x163710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 36)));
label_163714:
    // 0x163714: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_163718:
    // 0x163718: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_16371c:
    if (ctx->pc == 0x16371Cu) {
        ctx->pc = 0x16371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163718u;
        // 0x16371c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163720u;
        goto label_163720;
    }
    ctx->pc = 0x163718u;
    {
        const bool branch_taken_0x163718 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163718u;
        // 0x16371c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163718) {
            ctx->pc = 0x163734u;
            goto label_163734;
        }
    }
    ctx->pc = 0x163720u;
label_163720:
    // 0x163720: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x163720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_163724:
    // 0x163724: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x163724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_163728:
    // 0x163728: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x163728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_16372c:
    // 0x16372c: 0x10000002  b           . + 4 + (0x2 << 2)
label_163730:
    if (ctx->pc == 0x163730u) {
        ctx->pc = 0x163730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16372Cu;
        // 0x163730: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163734u;
        goto label_163734;
    }
    ctx->pc = 0x16372Cu;
    {
        const bool branch_taken_0x16372c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16372Cu;
        // 0x163730: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16372c) {
            ctx->pc = 0x163738u;
            goto label_163738;
        }
    }
    ctx->pc = 0x163734u;
label_163734:
    // 0x163734: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x163734u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_163738:
    // 0x163738: 0x93a20024  lbu         $v0, 0x24($sp)
    ctx->pc = 0x163738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 36)));
label_16373c:
    // 0x16373c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x16373cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_163740:
    // 0x163740: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x163740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_163744:
    // 0x163744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_163748:
    // 0x163748: 0xb4182b  sltu        $v1, $a1, $s4
    ctx->pc = 0x163748u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_16374c:
    // 0x16374c: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_163750:
    if (ctx->pc == 0x163750u) {
        ctx->pc = 0x163750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16374Cu;
        // 0x163750: 0xa3a20024  sb          $v0, 0x24($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163754u;
        goto label_163754;
    }
    ctx->pc = 0x16374Cu;
    {
        const bool branch_taken_0x16374c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16374Cu;
        // 0x163750: 0xa3a20024  sb          $v0, 0x24($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16374c) {
            ctx->pc = 0x1636C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1636c0;
        }
    }
    ctx->pc = 0x163754u;
label_163754:
    // 0x163754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163758:
    // 0x163758: 0xc058b9e  jal         func_162E78
label_16375c:
    if (ctx->pc == 0x16375Cu) {
        ctx->pc = 0x16375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163758u;
        // 0x16375c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163760u;
        goto label_163760;
    }
    ctx->pc = 0x163758u;
    SET_GPR_U32(ctx, 31, 0x163760u);
    ctx->pc = 0x16375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163758u;
    // 0x16375c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x162E78u, 0x163758u, 0x163760u)) {
        return;
    }
    ctx->pc = 0x163760u;
label_163760:
    // 0x163760: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x163760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163764:
    // 0x163764: 0x5460003e  bnel        $v1, $zero, . + 4 + (0x3E << 2)
label_163768:
    if (ctx->pc == 0x163768u) {
        ctx->pc = 0x163768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163764u;
        // 0x163768: 0xaea30040  sw          $v1, 0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16376Cu;
        goto label_16376c;
    }
    ctx->pc = 0x163764u;
    {
        const bool branch_taken_0x163764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x163764) {
            ctx->pc = 0x163768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163764u;
            // 0x163768: 0xaea30040  sw          $v1, 0x40($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163860u;
            goto label_163860;
        }
    }
    ctx->pc = 0x16376Cu;
label_16376c:
    // 0x16376c: 0x8e22648c  lw          $v0, 0x648C($s1)
    ctx->pc = 0x16376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25740)));
label_163770:
    // 0x163770: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x163770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_163774:
    // 0x163774: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x163774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163778:
    // 0x163778: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x163778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16377c:
    // 0x16377c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_163780:
    if (ctx->pc == 0x163780u) {
        ctx->pc = 0x163780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16377Cu;
        // 0x163780: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163784u;
        goto label_163784;
    }
    ctx->pc = 0x16377Cu;
    {
        const bool branch_taken_0x16377c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16377Cu;
        // 0x163780: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16377c) {
            ctx->pc = 0x1637C4u;
            goto label_1637c4;
        }
    }
    ctx->pc = 0x163784u;
label_163784:
    // 0x163784: 0x8e22100c  lw          $v0, 0x100C($s1)
    ctx->pc = 0x163784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4108)));
label_163788:
    // 0x163788: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_16378c:
    if (ctx->pc == 0x16378Cu) {
        ctx->pc = 0x16378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163788u;
        // 0x16378c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163790u;
        goto label_163790;
    }
    ctx->pc = 0x163788u;
    {
        const bool branch_taken_0x163788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163788u;
        // 0x16378c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163788) {
            ctx->pc = 0x1637A0u;
            goto label_1637a0;
        }
    }
    ctx->pc = 0x163790u;
label_163790:
    // 0x163790: 0x1000000c  b           . + 4 + (0xC << 2)
label_163794:
    if (ctx->pc == 0x163794u) {
        ctx->pc = 0x163794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163790u;
        // 0x163794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163798u;
        goto label_163798;
    }
    ctx->pc = 0x163790u;
    {
        const bool branch_taken_0x163790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163790u;
        // 0x163794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163790) {
            ctx->pc = 0x1637C4u;
            goto label_1637c4;
        }
    }
    ctx->pc = 0x163798u;
label_163798:
    // 0x163798: 0x1000ffad  b           . + 4 + (-0x53 << 2)
label_16379c:
    if (ctx->pc == 0x16379Cu) {
        ctx->pc = 0x16379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163798u;
        // 0x16379c: 0x2223821  addu        $a3, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1637A0u;
        goto label_1637a0;
    }
    ctx->pc = 0x163798u;
    {
        const bool branch_taken_0x163798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163798u;
        // 0x16379c: 0x2223821  addu        $a3, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163798) {
            ctx->pc = 0x163650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163650;
        }
    }
    ctx->pc = 0x1637A0u;
label_1637a0:
    // 0x1637a0: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x1637a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1637a4:
    // 0x1637a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1637a8:
    if (ctx->pc == 0x1637A8u) {
        ctx->pc = 0x1637A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637A4u;
        // 0x1637a8: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1637ACu;
        goto label_1637ac;
    }
    ctx->pc = 0x1637A4u;
    {
        const bool branch_taken_0x1637a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1637A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637A4u;
        // 0x1637a8: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637a4) {
            ctx->pc = 0x1637C4u;
            goto label_1637c4;
        }
    }
    ctx->pc = 0x1637ACu;
label_1637ac:
    // 0x1637ac: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1637acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1637b0:
    // 0x1637b0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1637b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1637b4:
    // 0x1637b4: 0x8c43100c  lw          $v1, 0x100C($v0)
    ctx->pc = 0x1637b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4108)));
label_1637b8:
    // 0x1637b8: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_1637bc:
    if (ctx->pc == 0x1637BCu) {
        ctx->pc = 0x1637BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637B8u;
        // 0x1637bc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1637C0u;
        goto label_1637c0;
    }
    ctx->pc = 0x1637B8u;
    {
        const bool branch_taken_0x1637b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1637b8) {
            ctx->pc = 0x1637BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1637B8u;
            // 0x1637bc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1637A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1637a0;
        }
    }
    ctx->pc = 0x1637C0u;
label_1637c0:
    // 0x1637c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1637c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1637c4:
    // 0x1637c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1637c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1637c8:
    // 0x1637c8: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_1637cc:
    if (ctx->pc == 0x1637CCu) {
        ctx->pc = 0x1637CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637C8u;
        // 0x1637cc: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1637D0u;
        goto label_1637d0;
    }
    ctx->pc = 0x1637C8u;
    {
        const bool branch_taken_0x1637c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1637CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637C8u;
        // 0x1637cc: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637c8) {
            ctx->pc = 0x1637E0u;
            goto label_1637e0;
        }
    }
    ctx->pc = 0x1637D0u;
label_1637d0:
    // 0x1637d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1637d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1637d4:
    // 0x1637d4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1637d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1637d8:
    // 0x1637d8: 0xae22648c  sw          $v0, 0x648C($s1)
    ctx->pc = 0x1637d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 25740), GPR_U32(ctx, 2));
label_1637dc:
    // 0x1637dc: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1637dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1637e0:
    // 0x1637e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1637e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1637e4:
    // 0x1637e4: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1637e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1637e8:
    // 0x1637e8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1637e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1637ec:
    // 0x1637ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1637ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1637f0:
    // 0x1637f0: 0x2442100c  addiu       $v0, $v0, 0x100C
    ctx->pc = 0x1637f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4108));
label_1637f4:
    // 0x1637f4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1637f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1637f8:
    // 0x1637f8: 0xaea40040  sw          $a0, 0x40($s5)
    ctx->pc = 0x1637f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 4));
label_1637fc:
    // 0x1637fc: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x1637fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_163800:
    // 0x163800: 0x93a20024  lbu         $v0, 0x24($sp)
    ctx->pc = 0x163800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 36)));
label_163804:
    // 0x163804: 0xa0820024  sb          $v0, 0x24($a0)
    ctx->pc = 0x163804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 2));
label_163808:
    // 0x163808: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x163808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16380c:
    // 0x16380c: 0x93a20024  lbu         $v0, 0x24($sp)
    ctx->pc = 0x16380cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 36)));
label_163810:
    // 0x163810: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_163814:
    if (ctx->pc == 0x163814u) {
        ctx->pc = 0x163814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163810u;
        // 0x163814: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163818u;
        goto label_163818;
    }
    ctx->pc = 0x163810u;
    {
        const bool branch_taken_0x163810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163810u;
        // 0x163814: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163810) {
            ctx->pc = 0x163860u;
            goto label_163860;
        }
    }
    ctx->pc = 0x163818u;
label_163818:
    // 0x163818: 0x24860005  addiu       $a2, $a0, 0x5
    ctx->pc = 0x163818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_16381c:
    // 0x16381c: 0x27a50005  addiu       $a1, $sp, 0x5
    ctx->pc = 0x16381cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5));
label_163820:
    // 0x163820: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x163820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
label_163824:
    // 0x163824: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x163824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_163828:
    // 0x163828: 0xa0c3ffff  sb          $v1, -0x1($a2)
    ctx->pc = 0x163828u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294967295), (uint8_t)GPR_U32(ctx, 3));
label_16382c:
    // 0x16382c: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x16382cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_163830:
    // 0x163830: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x163830u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
label_163834:
    // 0x163834: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x163834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_163838:
    // 0x163838: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x163838u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
label_16383c:
    // 0x16383c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x16383cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_163840:
    // 0x163840: 0x91020024  lbu         $v0, 0x24($t0)
    ctx->pc = 0x163840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 36)));
label_163844:
    // 0x163844: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x163844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_163848:
    // 0x163848: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x163848u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_16384c:
    // 0x16384c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x16384cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_163850:
    // 0x163850: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_163854:
    if (ctx->pc == 0x163854u) {
        ctx->pc = 0x163854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163850u;
        // 0x163854: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163858u;
        goto label_163858;
    }
    ctx->pc = 0x163850u;
    {
        const bool branch_taken_0x163850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163850u;
        // 0x163854: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163850) {
            ctx->pc = 0x163820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163820;
        }
    }
    ctx->pc = 0x163858u;
label_163858:
    // 0x163858: 0x10000002  b           . + 4 + (0x2 << 2)
label_16385c:
    if (ctx->pc == 0x16385Cu) {
        ctx->pc = 0x16385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163858u;
        // 0x16385c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163860u;
        goto label_163860;
    }
    ctx->pc = 0x163858u;
    {
        const bool branch_taken_0x163858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163858u;
        // 0x16385c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163858) {
            ctx->pc = 0x163864u;
            goto label_163864;
        }
    }
    ctx->pc = 0x163860u;
label_163860:
    // 0x163860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163864:
    // 0x163864: 0xae226af4  sw          $v0, 0x6AF4($s1)
    ctx->pc = 0x163864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 27380), GPR_U32(ctx, 2));
label_163868:
    // 0x163868: 0x26226494  addiu       $v0, $s1, 0x6494
    ctx->pc = 0x163868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 25748));
label_16386c:
    // 0x16386c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x16386cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_163870:
    // 0x163870: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x163870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_163874:
    // 0x163874: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x163874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_163878:
    // 0x163878: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x163878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16387c:
    // 0x16387c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x16387cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_163880:
    // 0x163880: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x163880u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_163884:
    // 0x163884: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x163884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_163888:
    // 0x163888: 0x3e00008  jr          $ra
label_16388c:
    if (ctx->pc == 0x16388Cu) {
        ctx->pc = 0x16388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163888u;
        // 0x16388c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163890u;
        goto label_fallthrough_0x163888;
    }
    ctx->pc = 0x163888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163888u;
        // 0x16388c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x163888:
    ctx->pc = 0x163890u;
}
