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

// Function: sub_001864A8
// Address: 0x1864a8 - 0x186a48
void sub_001864A8_0x1864a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001864A8_0x1864a8");
#endif

    switch (ctx->pc) {
        case 0x1864f0u: goto label_1864f0;
        case 0x186524u: goto label_186524;
        case 0x186530u: goto label_186530;
        case 0x18653cu: goto label_18653c;
        case 0x186550u: goto label_186550;
        case 0x186578u: goto label_186578;
        case 0x1865b8u: goto label_1865b8;
        case 0x1865ccu: goto label_1865cc;
        case 0x18663cu: goto label_18663c;
        case 0x186670u: goto label_186670;
        case 0x186680u: goto label_186680;
        case 0x18669cu: goto label_18669c;
        case 0x1866bcu: goto label_1866bc;
        case 0x1866ccu: goto label_1866cc;
        case 0x1866f0u: goto label_1866f0;
        case 0x186708u: goto label_186708;
        case 0x186768u: goto label_186768;
        case 0x186780u: goto label_186780;
        case 0x186790u: goto label_186790;
        case 0x1867a4u: goto label_1867a4;
        case 0x1867b4u: goto label_1867b4;
        case 0x1867ccu: goto label_1867cc;
        case 0x1867e4u: goto label_1867e4;
        case 0x186834u: goto label_186834;
        case 0x18684cu: goto label_18684c;
        case 0x186860u: goto label_186860;
        case 0x186870u: goto label_186870;
        case 0x186880u: goto label_186880;
        case 0x186898u: goto label_186898;
        case 0x1868fcu: goto label_1868fc;
        case 0x186910u: goto label_186910;
        case 0x186924u: goto label_186924;
        case 0x186934u: goto label_186934;
        case 0x186944u: goto label_186944;
        case 0x186960u: goto label_186960;
        case 0x1869c0u: goto label_1869c0;
        case 0x1869d4u: goto label_1869d4;
        case 0x1869e4u: goto label_1869e4;
        case 0x1869ecu: goto label_1869ec;
        case 0x186a08u: goto label_186a08;
        case 0x186a14u: goto label_186a14;
        default: break;
    }

    ctx->pc = 0x1864a8u;

    // 0x1864a8: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x1864a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x1864ac: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1864acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1864b0: 0xafa40e34  sw          $a0, 0xE34($sp)
    ctx->pc = 0x1864b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3636), GPR_U32(ctx, 4));
    // 0x1864b4: 0x27a50e30  addiu       $a1, $sp, 0xE30
    ctx->pc = 0x1864b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3632));
    // 0x1864b8: 0x8c448a60  lw          $a0, -0x75A0($v0)
    ctx->pc = 0x1864b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338A60u));
    // 0x1864bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1864bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1864c0: 0x7fb00ef0  sq          $s0, 0xEF0($sp)
    ctx->pc = 0x1864c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3824), GPR_VEC(ctx, 16));
    // 0x1864c4: 0x7fb10ee0  sq          $s1, 0xEE0($sp)
    ctx->pc = 0x1864c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3808), GPR_VEC(ctx, 17));
    // 0x1864c8: 0x7fb20ed0  sq          $s2, 0xED0($sp)
    ctx->pc = 0x1864c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3792), GPR_VEC(ctx, 18));
    // 0x1864cc: 0x7fb30ec0  sq          $s3, 0xEC0($sp)
    ctx->pc = 0x1864ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3776), GPR_VEC(ctx, 19));
    // 0x1864d0: 0x7fb40eb0  sq          $s4, 0xEB0($sp)
    ctx->pc = 0x1864d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3760), GPR_VEC(ctx, 20));
    // 0x1864d4: 0x7fb50ea0  sq          $s5, 0xEA0($sp)
    ctx->pc = 0x1864d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3744), GPR_VEC(ctx, 21));
    // 0x1864d8: 0x7fb60e90  sq          $s6, 0xE90($sp)
    ctx->pc = 0x1864d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3728), GPR_VEC(ctx, 22));
    // 0x1864dc: 0x7fb70e80  sq          $s7, 0xE80($sp)
    ctx->pc = 0x1864dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3712), GPR_VEC(ctx, 23));
    // 0x1864e0: 0x7fbe0e70  sq          $fp, 0xE70($sp)
    ctx->pc = 0x1864e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3696), GPR_VEC(ctx, 30));
    // 0x1864e4: 0xffbf0e60  sd          $ra, 0xE60($sp)
    ctx->pc = 0x1864e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3680), GPR_U64(ctx, 31));
    // 0x1864e8: 0xc0814fa  jal         func_2053E8
    ctx->pc = 0x1864E8u;
    SET_GPR_U32(ctx, 31, 0x1864F0u);
    ctx->pc = 0x1864ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1864E8u;
    // 0x1864ec: 0xafa00e30  sw          $zero, 0xE30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 3632), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2053E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2053E8u, 0x1864E8u, 0x1864F0u)) {
        return;
    }
    ctx->pc = 0x1864F0u;
label_1864f0:
    // 0x1864f0: 0x10400148  beqz        $v0, . + 4 + (0x148 << 2)
    ctx->pc = 0x1864F0u;
    {
        const bool branch_taken_0x1864f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1864F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864F0u;
        // 0x1864f4: 0xafa20e38  sw          $v0, 0xE38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864f0) {
            ctx->pc = 0x186A14u;
            goto label_186a14;
        }
    }
    ctx->pc = 0x1864F8u;
    // 0x1864f8: 0x8fa20e30  lw          $v0, 0xE30($sp)
    ctx->pc = 0x1864f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3632)));
    // 0x1864fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1864fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186500: 0x8fa30e38  lw          $v1, 0xE38($sp)
    ctx->pc = 0x186500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3640)));
    // 0x186504: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x186504u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186508: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x186508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18650c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18650cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186510: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x186510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186514: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x186514u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x186518: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x186518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18651c: 0xc065dea  jal         func_1977A8
    ctx->pc = 0x18651Cu;
    SET_GPR_U32(ctx, 31, 0x186524u);
    ctx->pc = 0x186520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18651Cu;
    // 0x186520: 0x8fa50e38  lw          $a1, 0xE38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1977A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1977A8u, 0x18651Cu, 0x186524u)) {
        return;
    }
    ctx->pc = 0x186524u;
label_186524:
    // 0x186524: 0xafa00e3c  sw          $zero, 0xE3C($sp)
    ctx->pc = 0x186524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3644), GPR_U32(ctx, 0));
    // 0x186528: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x186528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18652c: 0x0  nop
    ctx->pc = 0x18652cu;
    // NOP
label_186530:
    // 0x186530: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x186530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186534: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x186534u;
    SET_GPR_U32(ctx, 31, 0x18653Cu);
    ctx->pc = 0x186538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186534u;
    // 0x186538: 0x8c458a64  lw          $a1, -0x759C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x186534u, 0x18653Cu)) {
        return;
    }
    ctx->pc = 0x18653Cu;
label_18653c:
    // 0x18653c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x18653Cu;
    {
        const bool branch_taken_0x18653c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18653Cu;
        // 0x186540: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18653c) {
            ctx->pc = 0x18662Cu;
            goto label_18662c;
        }
    }
    ctx->pc = 0x186544u;
    // 0x186544: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x186544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186548: 0xc065e16  jal         func_197858
    ctx->pc = 0x186548u;
    SET_GPR_U32(ctx, 31, 0x186550u);
    ctx->pc = 0x18654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186548u;
    // 0x18654c: 0x8c658a68  lw          $a1, -0x7598($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197858u, 0x186548u, 0x186550u)) {
        return;
    }
    ctx->pc = 0x186550u;
label_186550:
    // 0x186550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186554: 0x8fa20e34  lw          $v0, 0xE34($sp)
    ctx->pc = 0x186554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3636)));
    // 0x186558: 0x1a000034  blez        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x186558u;
    {
        const bool branch_taken_0x186558 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x18655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186558u;
        // 0x18655c: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186558) {
            ctx->pc = 0x18662Cu;
            goto label_18662c;
        }
    }
    ctx->pc = 0x186560u;
    // 0x186560: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x186560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x186564: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x186564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186568: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x186568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x18656c: 0x2612ffff  addiu       $s2, $s0, -0x1
    ctx->pc = 0x18656cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x186570: 0xc080924  jal         func_202490
    ctx->pc = 0x186570u;
    SET_GPR_U32(ctx, 31, 0x186578u);
    ctx->pc = 0x186574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186570u;
    // 0x186574: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x186570u, 0x186578u)) {
        return;
    }
    ctx->pc = 0x186578u;
label_186578:
    // 0x186578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18657c: 0x24940010  addiu       $s4, $a0, 0x10
    ctx->pc = 0x18657cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x186580: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x186580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x186584: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x186584u;
    {
        const bool branch_taken_0x186584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x186588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186584u;
        // 0x186588: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186584) {
            ctx->pc = 0x186624u;
            goto label_186624;
        }
    }
    ctx->pc = 0x18658Cu;
    // 0x18658c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18658cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x186590: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x186590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x186594: 0x24468768  addiu       $a2, $v0, -0x7898
    ctx->pc = 0x186594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936424));
    // 0x186598: 0x24658750  addiu       $a1, $v1, -0x78B0
    ctx->pc = 0x186598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936400));
    // 0x18659c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1865a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1865a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1865a4: 0x245e8738  addiu       $fp, $v0, -0x78C8
    ctx->pc = 0x1865a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936376));
    // 0x1865a8: 0x24778720  addiu       $s7, $v1, -0x78E0
    ctx->pc = 0x1865a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936352));
    // 0x1865ac: 0x2490004c  addiu       $s0, $a0, 0x4C
    ctx->pc = 0x1865acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x1865b0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1865b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1865b4: 0x0  nop
    ctx->pc = 0x1865b4u;
    // NOP
label_1865b8:
    // 0x1865b8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1865b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1865bc: 0x7fa50e40  sq          $a1, 0xE40($sp)
    ctx->pc = 0x1865bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3648), GPR_VEC(ctx, 5));
    // 0x1865c0: 0x7fa60e50  sq          $a2, 0xE50($sp)
    ctx->pc = 0x1865c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3664), GPR_VEC(ctx, 6));
    // 0x1865c4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1865C4u;
    SET_GPR_U32(ctx, 31, 0x1865CCu);
    ctx->pc = 0x1865C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1865C4u;
    // 0x1865c8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1865C4u, 0x1865CCu)) {
        return;
    }
    ctx->pc = 0x1865CCu;
label_1865cc:
    // 0x1865cc: 0x2631004c  addiu       $s1, $s1, 0x4C
    ctx->pc = 0x1865ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x1865d0: 0x7ba60e50  lq          $a2, 0xE50($sp)
    ctx->pc = 0x1865d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 3664)));
    // 0x1865d4: 0xae00ffd0  sw          $zero, -0x30($s0)
    ctx->pc = 0x1865d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967248), GPR_U32(ctx, 0));
    // 0x1865d8: 0xae06ffdc  sw          $a2, -0x24($s0)
    ctx->pc = 0x1865d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967260), GPR_U32(ctx, 6));
    // 0x1865dc: 0xae00ffd4  sw          $zero, -0x2C($s0)
    ctx->pc = 0x1865dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967252), GPR_U32(ctx, 0));
    // 0x1865e0: 0xae00ffd8  sw          $zero, -0x28($s0)
    ctx->pc = 0x1865e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967256), GPR_U32(ctx, 0));
    // 0x1865e4: 0x7ba50e40  lq          $a1, 0xE40($sp)
    ctx->pc = 0x1865e4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 3648)));
    // 0x1865e8: 0xae00ffe0  sw          $zero, -0x20($s0)
    ctx->pc = 0x1865e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967264), GPR_U32(ctx, 0));
    // 0x1865ec: 0xae05ffec  sw          $a1, -0x14($s0)
    ctx->pc = 0x1865ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 5));
    // 0x1865f0: 0xae00ffe4  sw          $zero, -0x1C($s0)
    ctx->pc = 0x1865f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967268), GPR_U32(ctx, 0));
    // 0x1865f4: 0xae00ffe8  sw          $zero, -0x18($s0)
    ctx->pc = 0x1865f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967272), GPR_U32(ctx, 0));
    // 0x1865f8: 0xae1efffc  sw          $fp, -0x4($s0)
    ctx->pc = 0x1865f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 30));
    // 0x1865fc: 0xae00fff0  sw          $zero, -0x10($s0)
    ctx->pc = 0x1865fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_U32(ctx, 0));
    // 0x186600: 0xae00fff4  sw          $zero, -0xC($s0)
    ctx->pc = 0x186600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 0));
    // 0x186604: 0xae00fff8  sw          $zero, -0x8($s0)
    ctx->pc = 0x186604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U32(ctx, 0));
    // 0x186608: 0xae17000c  sw          $s7, 0xC($s0)
    ctx->pc = 0x186608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 23));
    // 0x18660c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x18660cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x186610: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x186610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x186614: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x186614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x186618: 0xae00ffc4  sw          $zero, -0x3C($s0)
    ctx->pc = 0x186618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967236), GPR_U32(ctx, 0));
    // 0x18661c: 0x1656ffe6  bne         $s2, $s6, . + 4 + (-0x1A << 2)
    ctx->pc = 0x18661Cu;
    {
        const bool branch_taken_0x18661c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x186620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18661Cu;
        // 0x186620: 0x2610004c  addiu       $s0, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18661c) {
            ctx->pc = 0x1865B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1865b8;
        }
    }
    ctx->pc = 0x186624u;
label_186624:
    // 0x186624: 0x8fa30e34  lw          $v1, 0xE34($sp)
    ctx->pc = 0x186624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3636)));
    // 0x186628: 0xac74000c  sw          $s4, 0xC($v1)
    ctx->pc = 0x186628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 20));
label_18662c:
    // 0x18662c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x186630: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x186630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186634: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x186634u;
    SET_GPR_U32(ctx, 31, 0x18663Cu);
    ctx->pc = 0x186638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186634u;
    // 0x186638: 0x8c458a68  lw          $a1, -0x7598($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x186634u, 0x18663Cu)) {
        return;
    }
    ctx->pc = 0x18663Cu;
label_18663c:
    // 0x18663c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x18663Cu;
    {
        const bool branch_taken_0x18663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18663Cu;
        // 0x186640: 0x8fa20e34  lw          $v0, 0xE34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18663c) {
            ctx->pc = 0x1866BCu;
            goto label_1866bc;
        }
    }
    ctx->pc = 0x186644u;
    // 0x186644: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x186644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x186648: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x186648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18664c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18664cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186650: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x186650u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x186654: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x186654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x186658: 0x8fa20e3c  lw          $v0, 0xE3C($sp)
    ctx->pc = 0x186658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3644)));
    // 0x18665c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x18665cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x186660: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x186660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x186664: 0x8c458a7c  lw          $a1, -0x7584($v0)
    ctx->pc = 0x186664u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338A7Cu));
    // 0x186668: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x186668u;
    SET_GPR_U32(ctx, 31, 0x186670u);
    ctx->pc = 0x18666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186668u;
    // 0x18666c: 0x1039821  addu        $s3, $t0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x186668u, 0x186670u)) {
        return;
    }
    ctx->pc = 0x186670u;
label_186670:
    // 0x186670: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186670u;
    {
        const bool branch_taken_0x186670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186670u;
        // 0x186674: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186670) {
            ctx->pc = 0x186684u;
            goto label_186684;
        }
    }
    ctx->pc = 0x186678u;
    // 0x186678: 0xc081b56  jal         func_206D58
    ctx->pc = 0x186678u;
    SET_GPR_U32(ctx, 31, 0x186680u);
    ctx->pc = 0x18667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186678u;
    // 0x18667c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x186678u, 0x186680u)) {
        return;
    }
    ctx->pc = 0x186680u;
label_186680:
    // 0x186680: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x186680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_186684:
    // 0x186684: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x186684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x186688: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x186688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18668c: 0x8c458a80  lw          $a1, -0x7580($v0)
    ctx->pc = 0x18668cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338A80u));
    // 0x186690: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x186690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186694: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x186694u;
    SET_GPR_U32(ctx, 31, 0x18669Cu);
    ctx->pc = 0x186698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186694u;
    // 0x186698: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x186694u, 0x18669Cu)) {
        return;
    }
    ctx->pc = 0x18669Cu;
label_18669c:
    // 0x18669c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18669Cu;
    {
        const bool branch_taken_0x18669c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18669Cu;
        // 0x1866a0: 0x83a20000  lb          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18669c) {
            ctx->pc = 0x1866BCu;
            goto label_1866bc;
        }
    }
    ctx->pc = 0x1866A4u;
    // 0x1866a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1866A4u;
    {
        const bool branch_taken_0x1866a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866A4u;
        // 0x1866a8: 0x8fa40e34  lw          $a0, 0xE34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866a4) {
            ctx->pc = 0x1866BCu;
            goto label_1866bc;
        }
    }
    ctx->pc = 0x1866ACu;
    // 0x1866ac: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x1866acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1866b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1866b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1866b4: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x1866B4u;
    SET_GPR_U32(ctx, 31, 0x1866BCu);
    ctx->pc = 0x1866B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1866B4u;
    // 0x1866b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x1866B4u, 0x1866BCu)) {
        return;
    }
    ctx->pc = 0x1866BCu;
label_1866bc:
    // 0x1866bc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1866bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1866c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1866c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1866c4: 0xc065e84  jal         func_197A10
    ctx->pc = 0x1866C4u;
    SET_GPR_U32(ctx, 31, 0x1866CCu);
    ctx->pc = 0x1866C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1866C4u;
    // 0x1866c8: 0x8c658a68  lw          $a1, -0x7598($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A10u, 0x1866C4u, 0x1866CCu)) {
        return;
    }
    ctx->pc = 0x1866CCu;
label_1866cc:
    // 0x1866cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1866CCu;
    {
        const bool branch_taken_0x1866cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866CCu;
        // 0x1866d0: 0x8fa20e3c  lw          $v0, 0xE3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866cc) {
            ctx->pc = 0x1866E0u;
            goto label_1866e0;
        }
    }
    ctx->pc = 0x1866D4u;
    // 0x1866d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1866d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1866d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1866d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1866dc: 0xafa20e3c  sw          $v0, 0xE3C($sp)
    ctx->pc = 0x1866dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3644), GPR_U32(ctx, 2));
label_1866e0:
    // 0x1866e0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1866e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1866e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1866e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1866e8: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1866E8u;
    SET_GPR_U32(ctx, 31, 0x1866F0u);
    ctx->pc = 0x1866ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1866E8u;
    // 0x1866ec: 0x8c658a6c  lw          $a1, -0x7594($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1866E8u, 0x1866F0u)) {
        return;
    }
    ctx->pc = 0x1866F0u;
label_1866f0:
    // 0x1866f0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1866F0u;
    {
        const bool branch_taken_0x1866f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866F0u;
        // 0x1866f4: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866f0) {
            ctx->pc = 0x186798u;
            goto label_186798;
        }
    }
    ctx->pc = 0x1866F8u;
    // 0x1866f8: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x1866F8u;
    {
        const bool branch_taken_0x1866f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866F8u;
        // 0x1866fc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866f8) {
            ctx->pc = 0x186798u;
            goto label_186798;
        }
    }
    ctx->pc = 0x186700u;
    // 0x186700: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x186700u;
    SET_GPR_U32(ctx, 31, 0x186708u);
    ctx->pc = 0x186704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186700u;
    // 0x186704: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x186700u, 0x186708u)) {
        return;
    }
    ctx->pc = 0x186708u;
label_186708:
    // 0x186708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18670c: 0x2663000c  addiu       $v1, $s3, 0xC
    ctx->pc = 0x18670cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x186710: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x186710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x186714: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x186714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x186718: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x186718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x18671c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x18671cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x186720: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x186724: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x186724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x186728: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x186728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x18672c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x186730: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x186730u;
    {
        const bool branch_taken_0x186730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186730) {
            ctx->pc = 0x186734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186730u;
            // 0x186734: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186738u;
            goto label_186738;
        }
    }
    ctx->pc = 0x186738u;
label_186738:
    // 0x186738: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x186738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18673c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18673Cu;
    {
        const bool branch_taken_0x18673c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18673c) {
            ctx->pc = 0x186740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18673Cu;
            // 0x186740: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186744u;
            goto label_186744;
        }
    }
    ctx->pc = 0x186744u;
label_186744:
    // 0x186744: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x186744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x186748: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x186748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18674c: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x18674cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x186750: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x186750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x186754: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x186754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x186758: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x186758u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x18675c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x186760: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x186760u;
    SET_GPR_U32(ctx, 31, 0x186768u);
    ctx->pc = 0x186764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186760u;
    // 0x186764: 0x8c458a8c  lw          $a1, -0x7574($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x186760u, 0x186768u)) {
        return;
    }
    ctx->pc = 0x186768u;
label_186768:
    // 0x186768: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x186768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x18676c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18676cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186770: 0x8c658a84  lw          $a1, -0x757C($v1)
    ctx->pc = 0x186770u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338A84u));
    // 0x186774: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x186774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186778: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x186778u;
    SET_GPR_U32(ctx, 31, 0x186780u);
    ctx->pc = 0x18677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186778u;
    // 0x18677c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x186778u, 0x186780u)) {
        return;
    }
    ctx->pc = 0x186780u;
label_186780:
    // 0x186780: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186780u;
    {
        const bool branch_taken_0x186780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186780u;
        // 0x186784: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186780) {
            ctx->pc = 0x186794u;
            goto label_186794;
        }
    }
    ctx->pc = 0x186788u;
    // 0x186788: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x186788u;
    SET_GPR_U32(ctx, 31, 0x186790u);
    ctx->pc = 0x18678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186788u;
    // 0x18678c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x186788u, 0x186790u)) {
        return;
    }
    ctx->pc = 0x186790u;
label_186790:
    // 0x186790: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x186790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_186794:
    // 0x186794: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x186794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_186798:
    // 0x186798: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18679c: 0xc065e84  jal         func_197A10
    ctx->pc = 0x18679Cu;
    SET_GPR_U32(ctx, 31, 0x1867A4u);
    ctx->pc = 0x1867A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18679Cu;
    // 0x1867a0: 0x8c658a6c  lw          $a1, -0x7594($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A10u, 0x18679Cu, 0x1867A4u)) {
        return;
    }
    ctx->pc = 0x1867A4u;
label_1867a4:
    // 0x1867a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1867a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1867a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1867a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1867ac: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1867ACu;
    SET_GPR_U32(ctx, 31, 0x1867B4u);
    ctx->pc = 0x1867B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1867ACu;
    // 0x1867b0: 0x8c458a70  lw          $a1, -0x7590($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1867ACu, 0x1867B4u)) {
        return;
    }
    ctx->pc = 0x1867B4u;
label_1867b4:
    // 0x1867b4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1867B4u;
    {
        const bool branch_taken_0x1867b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1867B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867B4u;
        // 0x1867b8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867b4) {
            ctx->pc = 0x186864u;
            goto label_186864;
        }
    }
    ctx->pc = 0x1867BCu;
    // 0x1867bc: 0x12600029  beqz        $s3, . + 4 + (0x29 << 2)
    ctx->pc = 0x1867BCu;
    {
        const bool branch_taken_0x1867bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1867C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867BCu;
        // 0x1867c0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867bc) {
            ctx->pc = 0x186864u;
            goto label_186864;
        }
    }
    ctx->pc = 0x1867C4u;
    // 0x1867c4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1867C4u;
    SET_GPR_U32(ctx, 31, 0x1867CCu);
    ctx->pc = 0x1867C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1867C4u;
    // 0x1867c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1867C4u, 0x1867CCu)) {
        return;
    }
    ctx->pc = 0x1867CCu;
label_1867cc:
    // 0x1867cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1867ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867d0: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x1867d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1867d4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1867d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1867d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1867d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1867dc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1867DCu;
    SET_GPR_U32(ctx, 31, 0x1867E4u);
    ctx->pc = 0x1867E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1867DCu;
    // 0x1867e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1867DCu, 0x1867E4u)) {
        return;
    }
    ctx->pc = 0x1867E4u;
label_1867e4:
    // 0x1867e4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1867e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1867e8: 0x2663001c  addiu       $v1, $s3, 0x1C
    ctx->pc = 0x1867e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x1867ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1867ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1867f0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1867f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1867f4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1867f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1867f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1867f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1867fc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1867FCu;
    {
        const bool branch_taken_0x1867fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1867fc) {
            ctx->pc = 0x186800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1867FCu;
            // 0x186800: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186804u;
            goto label_186804;
        }
    }
    ctx->pc = 0x186804u;
label_186804:
    // 0x186804: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x186804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x186808: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x186808u;
    {
        const bool branch_taken_0x186808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186808) {
            ctx->pc = 0x18680Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186808u;
            // 0x18680c: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186810u;
            goto label_186810;
        }
    }
    ctx->pc = 0x186810u;
label_186810:
    // 0x186810: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x186810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x186814: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x186814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x186818: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x186818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x18681c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18681cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186820: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x186820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x186824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x186824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x186828: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x186828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x18682c: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x18682Cu;
    SET_GPR_U32(ctx, 31, 0x186834u);
    ctx->pc = 0x186830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18682Cu;
    // 0x186830: 0x8c658a8c  lw          $a1, -0x7574($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x18682Cu, 0x186834u)) {
        return;
    }
    ctx->pc = 0x186834u;
label_186834:
    // 0x186834: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x186834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x186838: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x186838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18683c: 0x8c658a88  lw          $a1, -0x7578($v1)
    ctx->pc = 0x18683cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338A88u));
    // 0x186840: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x186840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186844: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x186844u;
    SET_GPR_U32(ctx, 31, 0x18684Cu);
    ctx->pc = 0x186848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186844u;
    // 0x186848: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x186844u, 0x18684Cu)) {
        return;
    }
    ctx->pc = 0x18684Cu;
label_18684c:
    // 0x18684c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18684Cu;
    {
        const bool branch_taken_0x18684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18684Cu;
        // 0x186850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18684c) {
            ctx->pc = 0x186860u;
            goto label_186860;
        }
    }
    ctx->pc = 0x186854u;
    // 0x186854: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x186854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186858: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x186858u;
    SET_GPR_U32(ctx, 31, 0x186860u);
    ctx->pc = 0x18685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186858u;
    // 0x18685c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x186858u, 0x186860u)) {
        return;
    }
    ctx->pc = 0x186860u;
label_186860:
    // 0x186860: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x186860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_186864:
    // 0x186864: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186868: 0xc065e84  jal         func_197A10
    ctx->pc = 0x186868u;
    SET_GPR_U32(ctx, 31, 0x186870u);
    ctx->pc = 0x18686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186868u;
    // 0x18686c: 0x8c458a70  lw          $a1, -0x7590($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A10u, 0x186868u, 0x186870u)) {
        return;
    }
    ctx->pc = 0x186870u;
label_186870:
    // 0x186870: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x186870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x186874: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186878: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x186878u;
    SET_GPR_U32(ctx, 31, 0x186880u);
    ctx->pc = 0x18687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186878u;
    // 0x18687c: 0x8c658a74  lw          $a1, -0x758C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x186878u, 0x186880u)) {
        return;
    }
    ctx->pc = 0x186880u;
label_186880:
    // 0x186880: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x186880u;
    {
        const bool branch_taken_0x186880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186880u;
        // 0x186884: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186880) {
            ctx->pc = 0x186928u;
            goto label_186928;
        }
    }
    ctx->pc = 0x186888u;
    // 0x186888: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x186888u;
    {
        const bool branch_taken_0x186888 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186888u;
        // 0x18688c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186888) {
            ctx->pc = 0x186928u;
            goto label_186928;
        }
    }
    ctx->pc = 0x186890u;
    // 0x186890: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x186890u;
    SET_GPR_U32(ctx, 31, 0x186898u);
    ctx->pc = 0x186894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186890u;
    // 0x186894: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x186890u, 0x186898u)) {
        return;
    }
    ctx->pc = 0x186898u;
label_186898:
    // 0x186898: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18689c: 0x2663002c  addiu       $v1, $s3, 0x2C
    ctx->pc = 0x18689cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x1868a0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1868a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1868a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1868a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1868a8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1868a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1868ac: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1868acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1868b0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1868b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1868b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1868b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1868b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1868b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1868bc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1868bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1868c0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1868c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1868c4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1868C4u;
    {
        const bool branch_taken_0x1868c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1868c4) {
            ctx->pc = 0x1868C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1868C4u;
            // 0x1868c8: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1868CCu;
            goto label_1868cc;
        }
    }
    ctx->pc = 0x1868CCu;
label_1868cc:
    // 0x1868cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1868ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1868d0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1868D0u;
    {
        const bool branch_taken_0x1868d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868d0) {
            ctx->pc = 0x1868D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1868D0u;
            // 0x1868d4: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1868D8u;
            goto label_1868d8;
        }
    }
    ctx->pc = 0x1868D8u;
label_1868d8:
    // 0x1868d8: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1868d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x1868dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1868dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1868e0: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1868e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1868e4: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x1868e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1868e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1868e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1868ec: 0xae62002c  sw          $v0, 0x2C($s3)
    ctx->pc = 0x1868ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    // 0x1868f0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1868f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1868f4: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1868F4u;
    SET_GPR_U32(ctx, 31, 0x1868FCu);
    ctx->pc = 0x1868F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1868F4u;
    // 0x1868f8: 0x8c458a8c  lw          $a1, -0x7574($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1868F4u, 0x1868FCu)) {
        return;
    }
    ctx->pc = 0x1868FCu;
label_1868fc:
    // 0x1868fc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1868fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x186900: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x186900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186904: 0x8c658a90  lw          $a1, -0x7570($v1)
    ctx->pc = 0x186904u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338A90u));
    // 0x186908: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x186908u;
    SET_GPR_U32(ctx, 31, 0x186910u);
    ctx->pc = 0x18690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186908u;
    // 0x18690c: 0x2606000c  addiu       $a2, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x186908u, 0x186910u)) {
        return;
    }
    ctx->pc = 0x186910u;
label_186910:
    // 0x186910: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x186910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x186914: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x186914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x186918: 0x8c658a94  lw          $a1, -0x756C($v1)
    ctx->pc = 0x186918u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338A94u));
    // 0x18691c: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x18691Cu;
    SET_GPR_U32(ctx, 31, 0x186924u);
    ctx->pc = 0x186920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18691Cu;
    // 0x186920: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x18691Cu, 0x186924u)) {
        return;
    }
    ctx->pc = 0x186924u;
label_186924:
    // 0x186924: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x186924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_186928:
    // 0x186928: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18692c: 0xc065e84  jal         func_197A10
    ctx->pc = 0x18692Cu;
    SET_GPR_U32(ctx, 31, 0x186934u);
    ctx->pc = 0x186930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18692Cu;
    // 0x186930: 0x8c458a74  lw          $a1, -0x758C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A10u, 0x18692Cu, 0x186934u)) {
        return;
    }
    ctx->pc = 0x186934u;
label_186934:
    // 0x186934: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x186934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x186938: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18693c: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x18693Cu;
    SET_GPR_U32(ctx, 31, 0x186944u);
    ctx->pc = 0x186940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18693Cu;
    // 0x186940: 0x8c658a78  lw          $a1, -0x7588($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x18693Cu, 0x186944u)) {
        return;
    }
    ctx->pc = 0x186944u;
label_186944:
    // 0x186944: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x186944u;
    {
        const bool branch_taken_0x186944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186944u;
        // 0x186948: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186944) {
            ctx->pc = 0x1869D8u;
            goto label_1869d8;
        }
    }
    ctx->pc = 0x18694Cu;
    // 0x18694c: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x18694Cu;
    {
        const bool branch_taken_0x18694c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x186950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18694Cu;
        // 0x186950: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18694c) {
            ctx->pc = 0x1869DCu;
            goto label_1869dc;
        }
    }
    ctx->pc = 0x186954u;
    // 0x186954: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x186954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x186958: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x186958u;
    SET_GPR_U32(ctx, 31, 0x186960u);
    ctx->pc = 0x18695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186958u;
    // 0x18695c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x186958u, 0x186960u)) {
        return;
    }
    ctx->pc = 0x186960u;
label_186960:
    // 0x186960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186964: 0x2663003c  addiu       $v1, $s3, 0x3C
    ctx->pc = 0x186964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x186968: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x186968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x18696c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18696cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x186970: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x186970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x186974: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x186974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x186978: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18697c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x18697cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x186980: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x186980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x186984: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x186988: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x186988u;
    {
        const bool branch_taken_0x186988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186988) {
            ctx->pc = 0x18698Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186988u;
            // 0x18698c: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186990u;
            goto label_186990;
        }
    }
    ctx->pc = 0x186990u;
label_186990:
    // 0x186990: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x186990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x186994: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x186994u;
    {
        const bool branch_taken_0x186994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186994) {
            ctx->pc = 0x186998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186994u;
            // 0x186998: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18699Cu;
            goto label_18699c;
        }
    }
    ctx->pc = 0x18699Cu;
label_18699c:
    // 0x18699c: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x18699cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x1869a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1869a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1869a4: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1869a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1869a8: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x1869a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1869ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1869acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1869b0: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x1869b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x1869b4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1869b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1869b8: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1869B8u;
    SET_GPR_U32(ctx, 31, 0x1869C0u);
    ctx->pc = 0x1869BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1869B8u;
    // 0x1869bc: 0x8c458a8c  lw          $a1, -0x7574($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1869B8u, 0x1869C0u)) {
        return;
    }
    ctx->pc = 0x1869C0u;
label_1869c0:
    // 0x1869c0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1869c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1869c4: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x1869c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1869c8: 0x8c658a90  lw          $a1, -0x7570($v1)
    ctx->pc = 0x1869c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338A90u));
    // 0x1869cc: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1869CCu;
    SET_GPR_U32(ctx, 31, 0x1869D4u);
    ctx->pc = 0x1869D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1869CCu;
    // 0x1869d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1869CCu, 0x1869D4u)) {
        return;
    }
    ctx->pc = 0x1869D4u;
label_1869d4:
    // 0x1869d4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1869d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1869d8:
    // 0x1869d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1869d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1869dc:
    // 0x1869dc: 0xc065e84  jal         func_197A10
    ctx->pc = 0x1869DCu;
    SET_GPR_U32(ctx, 31, 0x1869E4u);
    ctx->pc = 0x1869E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1869DCu;
    // 0x1869e0: 0x8c458a78  lw          $a1, -0x7588($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A10u, 0x1869DCu, 0x1869E4u)) {
        return;
    }
    ctx->pc = 0x1869E4u;
label_1869e4:
    // 0x1869e4: 0xc065cba  jal         func_1972E8
    ctx->pc = 0x1869E4u;
    SET_GPR_U32(ctx, 31, 0x1869ECu);
    ctx->pc = 0x1869E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1869E4u;
    // 0x1869e8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1972E8u, 0x1869E4u, 0x1869ECu)) {
        return;
    }
    ctx->pc = 0x1869ECu;
label_1869ec:
    // 0x1869ec: 0x1040fed0  beqz        $v0, . + 4 + (-0x130 << 2)
    ctx->pc = 0x1869ECu;
    {
        const bool branch_taken_0x1869ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1869F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869ECu;
        // 0x1869f0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869ec) {
            ctx->pc = 0x186530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186530;
        }
    }
    ctx->pc = 0x1869F4u;
    // 0x1869f4: 0x8fa30e38  lw          $v1, 0xE38($sp)
    ctx->pc = 0x1869f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3640)));
    // 0x1869f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1869F8u;
    {
        const bool branch_taken_0x1869f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1869FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869F8u;
        // 0x1869fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869f8) {
            ctx->pc = 0x186A0Cu;
            goto label_186a0c;
        }
    }
    ctx->pc = 0x186A00u;
    // 0x186a00: 0xc0808d4  jal         func_202350
    ctx->pc = 0x186A00u;
    SET_GPR_U32(ctx, 31, 0x186A08u);
    ctx->pc = 0x186A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186A00u;
    // 0x186a04: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x186A00u, 0x186A08u)) {
        return;
    }
    ctx->pc = 0x186A08u;
label_186a08:
    // 0x186a08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x186a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_186a0c:
    // 0x186a0c: 0xc065df8  jal         func_1977E0
    ctx->pc = 0x186A0Cu;
    SET_GPR_U32(ctx, 31, 0x186A14u);
    ctx->pc = 0x186A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186A0Cu;
    // 0x186a10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1977E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1977E0u, 0x186A0Cu, 0x186A14u)) {
        return;
    }
    ctx->pc = 0x186A14u;
label_186a14:
    // 0x186a14: 0x7bb00ef0  lq          $s0, 0xEF0($sp)
    ctx->pc = 0x186a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3824)));
    // 0x186a18: 0x7bb10ee0  lq          $s1, 0xEE0($sp)
    ctx->pc = 0x186a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 3808)));
    // 0x186a1c: 0x7bb20ed0  lq          $s2, 0xED0($sp)
    ctx->pc = 0x186a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 3792)));
    // 0x186a20: 0x7bb30ec0  lq          $s3, 0xEC0($sp)
    ctx->pc = 0x186a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 3776)));
    // 0x186a24: 0x7bb40eb0  lq          $s4, 0xEB0($sp)
    ctx->pc = 0x186a24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 3760)));
    // 0x186a28: 0x7bb50ea0  lq          $s5, 0xEA0($sp)
    ctx->pc = 0x186a28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 3744)));
    // 0x186a2c: 0x7bb60e90  lq          $s6, 0xE90($sp)
    ctx->pc = 0x186a2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 3728)));
    // 0x186a30: 0x7bb70e80  lq          $s7, 0xE80($sp)
    ctx->pc = 0x186a30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 3712)));
    // 0x186a34: 0x7bbe0e70  lq          $fp, 0xE70($sp)
    ctx->pc = 0x186a34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 3696)));
    // 0x186a38: 0xdfbf0e60  ld          $ra, 0xE60($sp)
    ctx->pc = 0x186a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3680)));
    // 0x186a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x186A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A3Cu;
        // 0x186a40: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186A44u;
    // 0x186a44: 0x0  nop
    ctx->pc = 0x186a44u;
    // NOP
    ctx->pc = 0x186a48u;
}
