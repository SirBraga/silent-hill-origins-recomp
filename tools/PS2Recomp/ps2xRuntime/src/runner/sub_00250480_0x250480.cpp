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

// Function: sub_00250480
// Address: 0x250480 - 0x250638
void sub_00250480_0x250480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250480_0x250480");
#endif

    switch (ctx->pc) {
        case 0x250480u: goto label_250480;
        case 0x250484u: goto label_250484;
        case 0x250488u: goto label_250488;
        case 0x25048cu: goto label_25048c;
        case 0x250490u: goto label_250490;
        case 0x250494u: goto label_250494;
        case 0x250498u: goto label_250498;
        case 0x25049cu: goto label_25049c;
        case 0x2504a0u: goto label_2504a0;
        case 0x2504a4u: goto label_2504a4;
        case 0x2504a8u: goto label_2504a8;
        case 0x2504acu: goto label_2504ac;
        case 0x2504b0u: goto label_2504b0;
        case 0x2504b4u: goto label_2504b4;
        case 0x2504b8u: goto label_2504b8;
        case 0x2504bcu: goto label_2504bc;
        case 0x2504c0u: goto label_2504c0;
        case 0x2504c4u: goto label_2504c4;
        case 0x2504c8u: goto label_2504c8;
        case 0x2504ccu: goto label_2504cc;
        case 0x2504d0u: goto label_2504d0;
        case 0x2504d4u: goto label_2504d4;
        case 0x2504d8u: goto label_2504d8;
        case 0x2504dcu: goto label_2504dc;
        case 0x2504e0u: goto label_2504e0;
        case 0x2504e4u: goto label_2504e4;
        case 0x2504e8u: goto label_2504e8;
        case 0x2504ecu: goto label_2504ec;
        case 0x2504f0u: goto label_2504f0;
        case 0x2504f4u: goto label_2504f4;
        case 0x2504f8u: goto label_2504f8;
        case 0x2504fcu: goto label_2504fc;
        case 0x250500u: goto label_250500;
        case 0x250504u: goto label_250504;
        case 0x250508u: goto label_250508;
        case 0x25050cu: goto label_25050c;
        case 0x250510u: goto label_250510;
        case 0x250514u: goto label_250514;
        case 0x250518u: goto label_250518;
        case 0x25051cu: goto label_25051c;
        case 0x250520u: goto label_250520;
        case 0x250524u: goto label_250524;
        case 0x250528u: goto label_250528;
        case 0x25052cu: goto label_25052c;
        case 0x250530u: goto label_250530;
        case 0x250534u: goto label_250534;
        case 0x250538u: goto label_250538;
        case 0x25053cu: goto label_25053c;
        case 0x250540u: goto label_250540;
        case 0x250544u: goto label_250544;
        case 0x250548u: goto label_250548;
        case 0x25054cu: goto label_25054c;
        case 0x250550u: goto label_250550;
        case 0x250554u: goto label_250554;
        case 0x250558u: goto label_250558;
        case 0x25055cu: goto label_25055c;
        case 0x250560u: goto label_250560;
        case 0x250564u: goto label_250564;
        case 0x250568u: goto label_250568;
        case 0x25056cu: goto label_25056c;
        case 0x250570u: goto label_250570;
        case 0x250574u: goto label_250574;
        case 0x250578u: goto label_250578;
        case 0x25057cu: goto label_25057c;
        case 0x250580u: goto label_250580;
        case 0x250584u: goto label_250584;
        case 0x250588u: goto label_250588;
        case 0x25058cu: goto label_25058c;
        case 0x250590u: goto label_250590;
        case 0x250594u: goto label_250594;
        case 0x250598u: goto label_250598;
        case 0x25059cu: goto label_25059c;
        case 0x2505a0u: goto label_2505a0;
        case 0x2505a4u: goto label_2505a4;
        case 0x2505a8u: goto label_2505a8;
        case 0x2505acu: goto label_2505ac;
        case 0x2505b0u: goto label_2505b0;
        case 0x2505b4u: goto label_2505b4;
        case 0x2505b8u: goto label_2505b8;
        case 0x2505bcu: goto label_2505bc;
        case 0x2505c0u: goto label_2505c0;
        case 0x2505c4u: goto label_2505c4;
        case 0x2505c8u: goto label_2505c8;
        case 0x2505ccu: goto label_2505cc;
        case 0x2505d0u: goto label_2505d0;
        case 0x2505d4u: goto label_2505d4;
        case 0x2505d8u: goto label_2505d8;
        case 0x2505dcu: goto label_2505dc;
        case 0x2505e0u: goto label_2505e0;
        case 0x2505e4u: goto label_2505e4;
        case 0x2505e8u: goto label_2505e8;
        case 0x2505ecu: goto label_2505ec;
        case 0x2505f0u: goto label_2505f0;
        case 0x2505f4u: goto label_2505f4;
        case 0x2505f8u: goto label_2505f8;
        case 0x2505fcu: goto label_2505fc;
        case 0x250600u: goto label_250600;
        case 0x250604u: goto label_250604;
        case 0x250608u: goto label_250608;
        case 0x25060cu: goto label_25060c;
        case 0x250610u: goto label_250610;
        case 0x250614u: goto label_250614;
        case 0x250618u: goto label_250618;
        case 0x25061cu: goto label_25061c;
        case 0x250620u: goto label_250620;
        case 0x250624u: goto label_250624;
        case 0x250628u: goto label_250628;
        case 0x25062cu: goto label_25062c;
        case 0x250630u: goto label_250630;
        case 0x250634u: goto label_250634;
        default: break;
    }

    ctx->pc = 0x250480u;

label_250480:
    // 0x250480: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x250480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_250484:
    // 0x250484: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x250484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_250488:
    // 0x250488: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x250488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_25048c:
    // 0x25048c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25048cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_250490:
    // 0x250490: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x250490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_250494:
    // 0x250494: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x250494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_250498:
    // 0x250498: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x250498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_25049c:
    // 0x25049c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x25049cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_2504a0:
    // 0x2504a0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2504a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_2504a4:
    // 0x2504a4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2504a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2504a8:
    // 0x2504a8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2504a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_2504ac:
    // 0x2504ac: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2504acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2504b0:
    // 0x2504b0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2504b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_2504b4:
    // 0x2504b4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2504b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_2504b8:
    // 0x2504b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2504b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2504bc:
    // 0x2504bc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2504bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2504c0:
    // 0x2504c0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2504c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2504c4:
    // 0x2504c4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2504c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2504c8:
    // 0x2504c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2504c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2504cc:
    // 0x2504cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2504d0:
    if (ctx->pc == 0x2504D0u) {
        ctx->pc = 0x2504D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504CCu;
        // 0x2504d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2504D4u;
        goto label_2504d4;
    }
    ctx->pc = 0x2504CCu;
    {
        const bool branch_taken_0x2504cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2504D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504CCu;
        // 0x2504d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504cc) {
            ctx->pc = 0x2504DCu;
            goto label_2504dc;
        }
    }
    ctx->pc = 0x2504D4u;
label_2504d4:
    // 0x2504d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2504d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2504d8:
    // 0x2504d8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2504d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2504dc:
    // 0x2504dc: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2504dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2504e0:
    // 0x2504e0: 0x34d40001  ori         $s4, $a2, 0x1
    ctx->pc = 0x2504e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_2504e4:
    // 0x2504e4: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
label_2504e8:
    if (ctx->pc == 0x2504E8u) {
        ctx->pc = 0x2504E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504E4u;
        // 0x2504e8: 0x12b980  sll         $s7, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2504ECu;
        goto label_2504ec;
    }
    ctx->pc = 0x2504E4u;
    {
        const bool branch_taken_0x2504e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504E4u;
        // 0x2504e8: 0x12b980  sll         $s7, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504e4) {
            ctx->pc = 0x250514u;
            goto label_250514;
        }
    }
    ctx->pc = 0x2504ECu;
label_2504ec:
    // 0x2504ec: 0x0  nop
    ctx->pc = 0x2504ecu;
    // NOP
label_2504f0:
    // 0x2504f0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2504f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2504f4:
    // 0x2504f4: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x2504f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2504f8:
    // 0x2504f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2504f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2504fc:
    // 0x2504fc: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x2504fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_250500:
    // 0x250500: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x250500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_250504:
    // 0x250504: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x250504u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4));
label_250508:
    // 0x250508: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x250508u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_25050c:
    // 0x25050c: 0x14e0fff8  bnez        $a3, . + 4 + (-0x8 << 2)
label_250510:
    if (ctx->pc == 0x250510u) {
        ctx->pc = 0x250510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25050Cu;
        // 0x250510: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250514u;
        goto label_250514;
    }
    ctx->pc = 0x25050Cu;
    {
        const bool branch_taken_0x25050c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x250510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25050Cu;
        // 0x250510: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25050c) {
            ctx->pc = 0x2504F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2504f0;
        }
    }
    ctx->pc = 0x250514u;
label_250514:
    // 0x250514: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x250514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_250518:
    // 0x250518: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x250518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_25051c:
    // 0x25051c: 0x8c8441a4  lw          $a0, 0x41A4($a0)
    ctx->pc = 0x25051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16804)));
label_250520:
    // 0x250520: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x250520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_250524:
    // 0x250524: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x250524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_250528:
    // 0x250528: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x250528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_25052c:
    // 0x25052c: 0x40f809  jalr        $v0
label_250530:
    if (ctx->pc == 0x250530u) {
        ctx->pc = 0x250530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25052Cu;
        // 0x250530: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250534u;
        goto label_250534;
    }
    ctx->pc = 0x25052Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250534u);
        ctx->pc = 0x250530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25052Cu;
        // 0x250530: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25052Cu, 0x250534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250534u;
label_250534:
    // 0x250534: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x250534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_250538:
    // 0x250538: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x250538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25053c:
    // 0x25053c: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x25053cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
label_250540:
    // 0x250540: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x250540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_250544:
    // 0x250544: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x250544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_250548:
    // 0x250548: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x250548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25054c:
    // 0x25054c: 0xc09d964  jal         func_276590
label_250550:
    if (ctx->pc == 0x250550u) {
        ctx->pc = 0x250550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25054Cu;
        // 0x250550: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250554u;
        goto label_250554;
    }
    ctx->pc = 0x25054Cu;
    SET_GPR_U32(ctx, 31, 0x250554u);
    ctx->pc = 0x250550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25054Cu;
    // 0x250550: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276590u, 0x25054Cu, 0x250554u)) {
        return;
    }
    ctx->pc = 0x250554u;
label_250554:
    // 0x250554: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_250558:
    if (ctx->pc == 0x250558u) {
        ctx->pc = 0x250558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250554u;
        // 0x250558: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25055Cu;
        goto label_25055c;
    }
    ctx->pc = 0x250554u;
    {
        const bool branch_taken_0x250554 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x250558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250554u;
        // 0x250558: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250554) {
            ctx->pc = 0x250568u;
            goto label_250568;
        }
    }
    ctx->pc = 0x25055Cu;
label_25055c:
    // 0x25055c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_250560:
    // 0x250560: 0x1000001a  b           . + 4 + (0x1A << 2)
label_250564:
    if (ctx->pc == 0x250564u) {
        ctx->pc = 0x250564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250560u;
        // 0x250564: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250568u;
        goto label_250568;
    }
    ctx->pc = 0x250560u;
    {
        const bool branch_taken_0x250560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250560u;
        // 0x250564: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250560) {
            ctx->pc = 0x2505CCu;
            goto label_2505cc;
        }
    }
    ctx->pc = 0x250568u;
label_250568:
    // 0x250568: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x250568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25056c:
    // 0x25056c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x25056cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_250570:
    // 0x250570: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
label_250574:
    if (ctx->pc == 0x250574u) {
        ctx->pc = 0x250574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250570u;
        // 0x250574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250578u;
        goto label_250578;
    }
    ctx->pc = 0x250570u;
    {
        const bool branch_taken_0x250570 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x250574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250570u;
        // 0x250574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250570) {
            ctx->pc = 0x2505C8u;
            goto label_2505c8;
        }
    }
    ctx->pc = 0x250578u;
label_250578:
    // 0x250578: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x250578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_25057c:
    // 0x25057c: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x25057cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_250580:
    // 0x250580: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x250580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_250584:
    // 0x250584: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x250584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_250588:
    // 0x250588: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25058c:
    if (ctx->pc == 0x25058Cu) {
        ctx->pc = 0x25058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250588u;
        // 0x25058c: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250590u;
        goto label_250590;
    }
    ctx->pc = 0x250588u;
    {
        const bool branch_taken_0x250588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250588u;
        // 0x25058c: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250588) {
            ctx->pc = 0x250598u;
            goto label_250598;
        }
    }
    ctx->pc = 0x250590u;
label_250590:
    // 0x250590: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x250590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_250594:
    // 0x250594: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x250594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_250598:
    // 0x250598: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x250598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_25059c:
    // 0x25059c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2505a0:
    // 0x2505a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2505a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2505a4:
    // 0x2505a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2505a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2505a8:
    // 0x2505a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2505ac:
    if (ctx->pc == 0x2505ACu) {
        ctx->pc = 0x2505ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505A8u;
        // 0x2505ac: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505B0u;
        goto label_2505b0;
    }
    ctx->pc = 0x2505A8u;
    {
        const bool branch_taken_0x2505a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2505ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505A8u;
        // 0x2505ac: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505a8) {
            ctx->pc = 0x2505B8u;
            goto label_2505b8;
        }
    }
    ctx->pc = 0x2505B0u;
label_2505b0:
    // 0x2505b0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2505b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_2505b4:
    // 0x2505b4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2505b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2505b8:
    // 0x2505b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2505b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2505bc:
    // 0x2505bc: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x2505bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2505c0:
    // 0x2505c0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_2505c4:
    if (ctx->pc == 0x2505C4u) {
        ctx->pc = 0x2505C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505C0u;
        // 0x2505c4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505C8u;
        goto label_2505c8;
    }
    ctx->pc = 0x2505C0u;
    {
        const bool branch_taken_0x2505c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2505C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505C0u;
        // 0x2505c4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505c0) {
            ctx->pc = 0x250580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250580;
        }
    }
    ctx->pc = 0x2505C8u;
label_2505c8:
    // 0x2505c8: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x2505c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
label_2505cc:
    // 0x2505cc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2505ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2505d0:
    // 0x2505d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2505d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2505d4:
    // 0x2505d4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2505d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2505d8:
    // 0x2505d8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x2505d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_2505dc:
    // 0x2505dc: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2505dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2505e0:
    // 0x2505e0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2505e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2505e4:
    // 0x2505e4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2505e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2505e8:
    // 0x2505e8: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x2505e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_2505ec:
    // 0x2505ec: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2505ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2505f0:
    // 0x2505f0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2505f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2505f4:
    // 0x2505f4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2505f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2505f8:
    // 0x2505f8: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2505f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_2505fc:
    // 0x2505fc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2505fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_250600:
    // 0x250600: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x250600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_250604:
    // 0x250604: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x250604u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_250608:
    // 0x250608: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x250608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_25060c:
    // 0x25060c: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x25060cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
label_250610:
    // 0x250610: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x250610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_250614:
    // 0x250614: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x250614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_250618:
    // 0x250618: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x250618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_25061c:
    // 0x25061c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x25061cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_250620:
    // 0x250620: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x250620u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_250624:
    // 0x250624: 0x3e00008  jr          $ra
label_250628:
    if (ctx->pc == 0x250628u) {
        ctx->pc = 0x250628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250624u;
        // 0x250628: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25062Cu;
        goto label_25062c;
    }
    ctx->pc = 0x250624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250624u;
        // 0x250628: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25062Cu;
label_25062c:
    // 0x25062c: 0x0  nop
    ctx->pc = 0x25062cu;
    // NOP
label_250630:
    // 0x250630: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x250630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_250634:
    // 0x250634: 0x0  nop
    ctx->pc = 0x250634u;
    // NOP
    ctx->pc = 0x250638u;
}
