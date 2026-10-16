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

// Function: sub_00163890
// Address: 0x163890 - 0x163b38
void sub_00163890_0x163890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163890_0x163890");
#endif

    switch (ctx->pc) {
        case 0x163890u: goto label_163890;
        case 0x163894u: goto label_163894;
        case 0x163898u: goto label_163898;
        case 0x16389cu: goto label_16389c;
        case 0x1638a0u: goto label_1638a0;
        case 0x1638a4u: goto label_1638a4;
        case 0x1638a8u: goto label_1638a8;
        case 0x1638acu: goto label_1638ac;
        case 0x1638b0u: goto label_1638b0;
        case 0x1638b4u: goto label_1638b4;
        case 0x1638b8u: goto label_1638b8;
        case 0x1638bcu: goto label_1638bc;
        case 0x1638c0u: goto label_1638c0;
        case 0x1638c4u: goto label_1638c4;
        case 0x1638c8u: goto label_1638c8;
        case 0x1638ccu: goto label_1638cc;
        case 0x1638d0u: goto label_1638d0;
        case 0x1638d4u: goto label_1638d4;
        case 0x1638d8u: goto label_1638d8;
        case 0x1638dcu: goto label_1638dc;
        case 0x1638e0u: goto label_1638e0;
        case 0x1638e4u: goto label_1638e4;
        case 0x1638e8u: goto label_1638e8;
        case 0x1638ecu: goto label_1638ec;
        case 0x1638f0u: goto label_1638f0;
        case 0x1638f4u: goto label_1638f4;
        case 0x1638f8u: goto label_1638f8;
        case 0x1638fcu: goto label_1638fc;
        case 0x163900u: goto label_163900;
        case 0x163904u: goto label_163904;
        case 0x163908u: goto label_163908;
        case 0x16390cu: goto label_16390c;
        case 0x163910u: goto label_163910;
        case 0x163914u: goto label_163914;
        case 0x163918u: goto label_163918;
        case 0x16391cu: goto label_16391c;
        case 0x163920u: goto label_163920;
        case 0x163924u: goto label_163924;
        case 0x163928u: goto label_163928;
        case 0x16392cu: goto label_16392c;
        case 0x163930u: goto label_163930;
        case 0x163934u: goto label_163934;
        case 0x163938u: goto label_163938;
        case 0x16393cu: goto label_16393c;
        case 0x163940u: goto label_163940;
        case 0x163944u: goto label_163944;
        case 0x163948u: goto label_163948;
        case 0x16394cu: goto label_16394c;
        case 0x163950u: goto label_163950;
        case 0x163954u: goto label_163954;
        case 0x163958u: goto label_163958;
        case 0x16395cu: goto label_16395c;
        case 0x163960u: goto label_163960;
        case 0x163964u: goto label_163964;
        case 0x163968u: goto label_163968;
        case 0x16396cu: goto label_16396c;
        case 0x163970u: goto label_163970;
        case 0x163974u: goto label_163974;
        case 0x163978u: goto label_163978;
        case 0x16397cu: goto label_16397c;
        case 0x163980u: goto label_163980;
        case 0x163984u: goto label_163984;
        case 0x163988u: goto label_163988;
        case 0x16398cu: goto label_16398c;
        case 0x163990u: goto label_163990;
        case 0x163994u: goto label_163994;
        case 0x163998u: goto label_163998;
        case 0x16399cu: goto label_16399c;
        case 0x1639a0u: goto label_1639a0;
        case 0x1639a4u: goto label_1639a4;
        case 0x1639a8u: goto label_1639a8;
        case 0x1639acu: goto label_1639ac;
        case 0x1639b0u: goto label_1639b0;
        case 0x1639b4u: goto label_1639b4;
        case 0x1639b8u: goto label_1639b8;
        case 0x1639bcu: goto label_1639bc;
        case 0x1639c0u: goto label_1639c0;
        case 0x1639c4u: goto label_1639c4;
        case 0x1639c8u: goto label_1639c8;
        case 0x1639ccu: goto label_1639cc;
        case 0x1639d0u: goto label_1639d0;
        case 0x1639d4u: goto label_1639d4;
        case 0x1639d8u: goto label_1639d8;
        case 0x1639dcu: goto label_1639dc;
        case 0x1639e0u: goto label_1639e0;
        case 0x1639e4u: goto label_1639e4;
        case 0x1639e8u: goto label_1639e8;
        case 0x1639ecu: goto label_1639ec;
        case 0x1639f0u: goto label_1639f0;
        case 0x1639f4u: goto label_1639f4;
        case 0x1639f8u: goto label_1639f8;
        case 0x1639fcu: goto label_1639fc;
        case 0x163a00u: goto label_163a00;
        case 0x163a04u: goto label_163a04;
        case 0x163a08u: goto label_163a08;
        case 0x163a0cu: goto label_163a0c;
        case 0x163a10u: goto label_163a10;
        case 0x163a14u: goto label_163a14;
        case 0x163a18u: goto label_163a18;
        case 0x163a1cu: goto label_163a1c;
        case 0x163a20u: goto label_163a20;
        case 0x163a24u: goto label_163a24;
        case 0x163a28u: goto label_163a28;
        case 0x163a2cu: goto label_163a2c;
        case 0x163a30u: goto label_163a30;
        case 0x163a34u: goto label_163a34;
        case 0x163a38u: goto label_163a38;
        case 0x163a3cu: goto label_163a3c;
        case 0x163a40u: goto label_163a40;
        case 0x163a44u: goto label_163a44;
        case 0x163a48u: goto label_163a48;
        case 0x163a4cu: goto label_163a4c;
        case 0x163a50u: goto label_163a50;
        case 0x163a54u: goto label_163a54;
        case 0x163a58u: goto label_163a58;
        case 0x163a5cu: goto label_163a5c;
        case 0x163a60u: goto label_163a60;
        case 0x163a64u: goto label_163a64;
        case 0x163a68u: goto label_163a68;
        case 0x163a6cu: goto label_163a6c;
        case 0x163a70u: goto label_163a70;
        case 0x163a74u: goto label_163a74;
        case 0x163a78u: goto label_163a78;
        case 0x163a7cu: goto label_163a7c;
        case 0x163a80u: goto label_163a80;
        case 0x163a84u: goto label_163a84;
        case 0x163a88u: goto label_163a88;
        case 0x163a8cu: goto label_163a8c;
        case 0x163a90u: goto label_163a90;
        case 0x163a94u: goto label_163a94;
        case 0x163a98u: goto label_163a98;
        case 0x163a9cu: goto label_163a9c;
        case 0x163aa0u: goto label_163aa0;
        case 0x163aa4u: goto label_163aa4;
        case 0x163aa8u: goto label_163aa8;
        case 0x163aacu: goto label_163aac;
        case 0x163ab0u: goto label_163ab0;
        case 0x163ab4u: goto label_163ab4;
        case 0x163ab8u: goto label_163ab8;
        case 0x163abcu: goto label_163abc;
        case 0x163ac0u: goto label_163ac0;
        case 0x163ac4u: goto label_163ac4;
        case 0x163ac8u: goto label_163ac8;
        case 0x163accu: goto label_163acc;
        case 0x163ad0u: goto label_163ad0;
        case 0x163ad4u: goto label_163ad4;
        case 0x163ad8u: goto label_163ad8;
        case 0x163adcu: goto label_163adc;
        case 0x163ae0u: goto label_163ae0;
        case 0x163ae4u: goto label_163ae4;
        case 0x163ae8u: goto label_163ae8;
        case 0x163aecu: goto label_163aec;
        case 0x163af0u: goto label_163af0;
        case 0x163af4u: goto label_163af4;
        case 0x163af8u: goto label_163af8;
        case 0x163afcu: goto label_163afc;
        case 0x163b00u: goto label_163b00;
        case 0x163b04u: goto label_163b04;
        case 0x163b08u: goto label_163b08;
        case 0x163b0cu: goto label_163b0c;
        case 0x163b10u: goto label_163b10;
        case 0x163b14u: goto label_163b14;
        case 0x163b18u: goto label_163b18;
        case 0x163b1cu: goto label_163b1c;
        case 0x163b20u: goto label_163b20;
        case 0x163b24u: goto label_163b24;
        case 0x163b28u: goto label_163b28;
        case 0x163b2cu: goto label_163b2c;
        case 0x163b30u: goto label_163b30;
        case 0x163b34u: goto label_163b34;
        default: break;
    }

    ctx->pc = 0x163890u;

label_163890:
    // 0x163890: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x163890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_163894:
    // 0x163894: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x163894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_163898:
    // 0x163898: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x163898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_16389c:
    // 0x16389c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x16389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1638a0:
    // 0x1638a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1638a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1638a4:
    // 0x1638a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1638a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1638a8:
    // 0x1638a8: 0x2451108c  addiu       $s1, $v0, 0x108C
    ctx->pc = 0x1638a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_1638ac:
    // 0x1638ac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1638acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1638b0:
    // 0x1638b0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1638b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1638b4:
    // 0x1638b4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1638b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1638b8:
    // 0x1638b8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1638b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_1638bc:
    // 0x1638bc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1638bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1638c0:
    // 0x1638c0: 0x24a53dd0  addiu       $a1, $a1, 0x3DD0
    ctx->pc = 0x1638c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15824));
label_1638c4:
    // 0x1638c4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1638c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1638c8:
    // 0x1638c8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1638c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1638cc:
    // 0x1638cc: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1638ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1638d0:
    // 0x1638d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1638d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1638d4:
    // 0x1638d4: 0xae406af4  sw          $zero, 0x6AF4($s2)
    ctx->pc = 0x1638d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 27380), GPR_U32(ctx, 0));
label_1638d8:
    // 0x1638d8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1638d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1638dc:
    // 0x1638dc: 0x40f809  jalr        $v0
label_1638e0:
    if (ctx->pc == 0x1638E0u) {
        ctx->pc = 0x1638E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638DCu;
        // 0x1638e0: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1638E4u;
        goto label_1638e4;
    }
    ctx->pc = 0x1638DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1638E4u);
        ctx->pc = 0x1638E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638DCu;
        // 0x1638e0: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1638DCu, 0x1638E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1638E4u;
label_1638e4:
    // 0x1638e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1638e8:
    if (ctx->pc == 0x1638E8u) {
        ctx->pc = 0x1638E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638E4u;
        // 0x1638e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1638ECu;
        goto label_1638ec;
    }
    ctx->pc = 0x1638E4u;
    {
        const bool branch_taken_0x1638e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1638E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638E4u;
        // 0x1638e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638e4) {
            ctx->pc = 0x163920u;
            goto label_163920;
        }
    }
    ctx->pc = 0x1638ECu;
label_1638ec:
    // 0x1638ec: 0x10000087  b           . + 4 + (0x87 << 2)
label_1638f0:
    if (ctx->pc == 0x1638F0u) {
        ctx->pc = 0x1638F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638ECu;
        // 0x1638f0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1638F4u;
        goto label_1638f4;
    }
    ctx->pc = 0x1638ECu;
    {
        const bool branch_taken_0x1638ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1638F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638ECu;
        // 0x1638f0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638ec) {
            ctx->pc = 0x163B0Cu;
            goto label_163b0c;
        }
    }
    ctx->pc = 0x1638F4u;
label_1638f4:
    // 0x1638f4: 0xc0a1c22  jal         func_287088
label_1638f8:
    if (ctx->pc == 0x1638F8u) {
        ctx->pc = 0x1638F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638F4u;
        // 0x1638f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1638FCu;
        goto label_1638fc;
    }
    ctx->pc = 0x1638F4u;
    SET_GPR_U32(ctx, 31, 0x1638FCu);
    ctx->pc = 0x1638F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1638F4u;
    // 0x1638f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287088u, 0x1638F4u, 0x1638FCu)) {
        return;
    }
    ctx->pc = 0x1638FCu;
label_1638fc:
    // 0x1638fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1638fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163900:
    // 0x163900: 0xc0a1c2c  jal         func_2870B0
label_163904:
    if (ctx->pc == 0x163904u) {
        ctx->pc = 0x163904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163900u;
        // 0x163904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163908u;
        goto label_163908;
    }
    ctx->pc = 0x163900u;
    SET_GPR_U32(ctx, 31, 0x163908u);
    ctx->pc = 0x163904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163900u;
    // 0x163904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2870B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2870B0u, 0x163900u, 0x163908u)) {
        return;
    }
    ctx->pc = 0x163908u;
label_163908:
    // 0x163908: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x163908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16390c:
    // 0x16390c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16390cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_163910:
    // 0x163910: 0x10000030  b           . + 4 + (0x30 << 2)
label_163914:
    if (ctx->pc == 0x163914u) {
        ctx->pc = 0x163914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163910u;
        // 0x163914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163918u;
        goto label_163918;
    }
    ctx->pc = 0x163910u;
    {
        const bool branch_taken_0x163910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163910u;
        // 0x163914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163910) {
            ctx->pc = 0x1639D4u;
            goto label_1639d4;
        }
    }
    ctx->pc = 0x163918u;
label_163918:
    // 0x163918: 0x10000061  b           . + 4 + (0x61 << 2)
label_16391c:
    if (ctx->pc == 0x16391Cu) {
        ctx->pc = 0x16391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163918u;
        // 0x16391c: 0x2423821  addu        $a3, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163920u;
        goto label_163920;
    }
    ctx->pc = 0x163918u;
    {
        const bool branch_taken_0x163918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163918u;
        // 0x16391c: 0x2423821  addu        $a3, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163918) {
            ctx->pc = 0x163AA0u;
            goto label_163aa0;
        }
    }
    ctx->pc = 0x163920u;
label_163920:
    // 0x163920: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x163920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_163924:
    // 0x163924: 0xae426af8  sw          $v0, 0x6AF8($s2)
    ctx->pc = 0x163924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 27384), GPR_U32(ctx, 2));
label_163928:
    // 0x163928: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_16392c:
    if (ctx->pc == 0x16392Cu) {
        ctx->pc = 0x16392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163928u;
        // 0x16392c: 0x8eb00018  lw          $s0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163930u;
        goto label_163930;
    }
    ctx->pc = 0x163928u;
    {
        const bool branch_taken_0x163928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163928u;
        // 0x16392c: 0x8eb00018  lw          $s0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163928) {
            ctx->pc = 0x163948u;
            goto label_163948;
        }
    }
    ctx->pc = 0x163930u;
label_163930:
    // 0x163930: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x163930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_163934:
    // 0x163934: 0xc041e86  jal         func_107A18
label_163938:
    if (ctx->pc == 0x163938u) {
        ctx->pc = 0x163938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163934u;
        // 0x163938: 0x24843e60  addiu       $a0, $a0, 0x3E60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16393Cu;
        goto label_16393c;
    }
    ctx->pc = 0x163934u;
    SET_GPR_U32(ctx, 31, 0x16393Cu);
    ctx->pc = 0x163938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163934u;
    // 0x163938: 0x24843e60  addiu       $a0, $a0, 0x3E60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x163934u, 0x16393Cu)) {
        return;
    }
    ctx->pc = 0x16393Cu;
label_16393c:
    // 0x16393c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16393cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_163940:
    // 0x163940: 0x24423e88  addiu       $v0, $v0, 0x3E88
    ctx->pc = 0x163940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16008));
label_163944:
    // 0x163944: 0xae426af8  sw          $v0, 0x6AF8($s2)
    ctx->pc = 0x163944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 27384), GPR_U32(ctx, 2));
label_163948:
    // 0x163948: 0x26426494  addiu       $v0, $s2, 0x6494
    ctx->pc = 0x163948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 25748));
label_16394c:
    // 0x16394c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163950:
    // 0x163950: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x163950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163954:
    // 0x163954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163958:
    // 0x163958: 0xc065b1c  jal         func_196C70
label_16395c:
    if (ctx->pc == 0x16395Cu) {
        ctx->pc = 0x16395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163958u;
        // 0x16395c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163960u;
        goto label_163960;
    }
    ctx->pc = 0x163958u;
    SET_GPR_U32(ctx, 31, 0x163960u);
    ctx->pc = 0x16395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163958u;
    // 0x16395c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196C70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196C70u, 0x163958u, 0x163960u)) {
        return;
    }
    ctx->pc = 0x163960u;
label_163960:
    // 0x163960: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x163960u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163964:
    // 0x163964: 0x13c00067  beqz        $fp, . + 4 + (0x67 << 2)
label_163968:
    if (ctx->pc == 0x163968u) {
        ctx->pc = 0x163968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163964u;
        // 0x163968: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16396Cu;
        goto label_16396c;
    }
    ctx->pc = 0x163964u;
    {
        const bool branch_taken_0x163964 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x163968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163964u;
        // 0x163968: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163964) {
            ctx->pc = 0x163B04u;
            goto label_163b04;
        }
    }
    ctx->pc = 0x16396Cu;
label_16396c:
    // 0x16396c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x16396cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_163970:
    // 0x163970: 0xafbd0004  sw          $sp, 0x4($sp)
    ctx->pc = 0x163970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 29));
label_163974:
    // 0x163974: 0x8fd40004  lw          $s4, 0x4($fp)
    ctx->pc = 0x163974u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_163978:
    // 0x163978: 0xc0a1ba4  jal         func_286E90
label_16397c:
    if (ctx->pc == 0x16397Cu) {
        ctx->pc = 0x16397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163978u;
        // 0x16397c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163980u;
        goto label_163980;
    }
    ctx->pc = 0x163978u;
    SET_GPR_U32(ctx, 31, 0x163980u);
    ctx->pc = 0x16397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163978u;
    // 0x16397c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286E90u, 0x163978u, 0x163980u)) {
        return;
    }
    ctx->pc = 0x163980u;
label_163980:
    // 0x163980: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x163980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163984:
    // 0x163984: 0x1a600013  blez        $s3, . + 4 + (0x13 << 2)
label_163988:
    if (ctx->pc == 0x163988u) {
        ctx->pc = 0x163988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163984u;
        // 0x163988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16398Cu;
        goto label_16398c;
    }
    ctx->pc = 0x163984u;
    {
        const bool branch_taken_0x163984 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x163988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163984u;
        // 0x163988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163984) {
            ctx->pc = 0x1639D4u;
            goto label_1639d4;
        }
    }
    ctx->pc = 0x16398Cu;
label_16398c:
    // 0x16398c: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x16398cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163990:
    // 0x163990: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x163990u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
label_163994:
    // 0x163994: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163998:
    // 0x163998: 0xc0a1b98  jal         func_286E60
label_16399c:
    if (ctx->pc == 0x16399Cu) {
        ctx->pc = 0x16399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163998u;
        // 0x16399c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639A0u;
        goto label_1639a0;
    }
    ctx->pc = 0x163998u;
    SET_GPR_U32(ctx, 31, 0x1639A0u);
    ctx->pc = 0x16399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163998u;
    // 0x16399c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286E60u, 0x163998u, 0x1639A0u)) {
        return;
    }
    ctx->pc = 0x1639A0u;
label_1639a0:
    // 0x1639a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1639a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1639a4:
    // 0x1639a4: 0xc0a1c20  jal         func_287080
label_1639a8:
    if (ctx->pc == 0x1639A8u) {
        ctx->pc = 0x1639A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639A4u;
        // 0x1639a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639ACu;
        goto label_1639ac;
    }
    ctx->pc = 0x1639A4u;
    SET_GPR_U32(ctx, 31, 0x1639ACu);
    ctx->pc = 0x1639A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1639A4u;
    // 0x1639a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287080u, 0x1639A4u, 0x1639ACu)) {
        return;
    }
    ctx->pc = 0x1639ACu;
label_1639ac:
    // 0x1639ac: 0x8ee30024  lw          $v1, 0x24($s7)
    ctx->pc = 0x1639acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_1639b0:
    // 0x1639b0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1639b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1639b4:
    // 0x1639b4: 0x60f809  jalr        $v1
label_1639b8:
    if (ctx->pc == 0x1639B8u) {
        ctx->pc = 0x1639B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639B4u;
        // 0x1639b8: 0x26c43e40  addiu       $a0, $s6, 0x3E40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 15936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639BCu;
        goto label_1639bc;
    }
    ctx->pc = 0x1639B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1639BCu);
        ctx->pc = 0x1639B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639B4u;
        // 0x1639b8: 0x26c43e40  addiu       $a0, $s6, 0x3E40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 15936));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1639B4u, 0x1639BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1639BCu;
label_1639bc:
    // 0x1639bc: 0x1040ffcd  beqz        $v0, . + 4 + (-0x33 << 2)
label_1639c0:
    if (ctx->pc == 0x1639C0u) {
        ctx->pc = 0x1639C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639BCu;
        // 0x1639c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639C4u;
        goto label_1639c4;
    }
    ctx->pc = 0x1639BCu;
    {
        const bool branch_taken_0x1639bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639BCu;
        // 0x1639c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639bc) {
            ctx->pc = 0x1638F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1638f4;
        }
    }
    ctx->pc = 0x1639C4u;
label_1639c4:
    // 0x1639c4: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1639c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1639c8:
    // 0x1639c8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1639cc:
    if (ctx->pc == 0x1639CCu) {
        ctx->pc = 0x1639CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639C8u;
        // 0x1639cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639D0u;
        goto label_1639d0;
    }
    ctx->pc = 0x1639C8u;
    {
        const bool branch_taken_0x1639c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1639CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639C8u;
        // 0x1639cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639c8) {
            ctx->pc = 0x163998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163998;
        }
    }
    ctx->pc = 0x1639D0u;
label_1639d0:
    // 0x1639d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1639d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1639d4:
    // 0x1639d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1639d8:
    if (ctx->pc == 0x1639D8u) {
        ctx->pc = 0x1639D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639D4u;
        // 0x1639d8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639DCu;
        goto label_1639dc;
    }
    ctx->pc = 0x1639D4u;
    {
        const bool branch_taken_0x1639d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1639D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639D4u;
        // 0x1639d8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639d4) {
            ctx->pc = 0x1639F4u;
            goto label_1639f4;
        }
    }
    ctx->pc = 0x1639DCu;
label_1639dc:
    // 0x1639dc: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x1639dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
label_1639e0:
    // 0x1639e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1639e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1639e4:
    // 0x1639e4: 0x24a55290  addiu       $a1, $a1, 0x5290
    ctx->pc = 0x1639e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21136));
label_1639e8:
    // 0x1639e8: 0xc09545a  jal         func_255168
label_1639ec:
    if (ctx->pc == 0x1639ECu) {
        ctx->pc = 0x1639ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639E8u;
        // 0x1639ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639F0u;
        goto label_1639f0;
    }
    ctx->pc = 0x1639E8u;
    SET_GPR_U32(ctx, 31, 0x1639F0u);
    ctx->pc = 0x1639ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1639E8u;
    // 0x1639ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1639E8u, 0x1639F0u)) {
        return;
    }
    ctx->pc = 0x1639F0u;
label_1639f0:
    // 0x1639f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1639f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1639f4:
    // 0x1639f4: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_1639f8:
    if (ctx->pc == 0x1639F8u) {
        ctx->pc = 0x1639F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639F4u;
        // 0x1639f8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639FCu;
        goto label_1639fc;
    }
    ctx->pc = 0x1639F4u;
    {
        const bool branch_taken_0x1639f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639F4u;
        // 0x1639f8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639f4) {
            ctx->pc = 0x163AFCu;
            goto label_163afc;
        }
    }
    ctx->pc = 0x1639FCu;
label_1639fc:
    // 0x1639fc: 0x26103e98  addiu       $s0, $s0, 0x3E98
    ctx->pc = 0x1639fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16024));
label_163a00:
    // 0x163a00: 0xc0c4ab8  jal         func_312AE0
label_163a04:
    if (ctx->pc == 0x163A04u) {
        ctx->pc = 0x163A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A00u;
        // 0x163a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A08u;
        goto label_163a08;
    }
    ctx->pc = 0x163A00u;
    SET_GPR_U32(ctx, 31, 0x163A08u);
    ctx->pc = 0x163A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A00u;
    // 0x163a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x163A00u, 0x163A08u)) {
        return;
    }
    ctx->pc = 0x163A08u;
label_163a08:
    // 0x163a08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x163a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163a0c:
    // 0x163a0c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x163a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_163a10:
    // 0x163a10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163a14:
    // 0x163a14: 0xc0c4b78  jal         func_312DE0
label_163a18:
    if (ctx->pc == 0x163A18u) {
        ctx->pc = 0x163A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A14u;
        // 0x163a18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A1Cu;
        goto label_163a1c;
    }
    ctx->pc = 0x163A14u;
    SET_GPR_U32(ctx, 31, 0x163A1Cu);
    ctx->pc = 0x163A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A14u;
    // 0x163a18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312DE0u, 0x163A14u, 0x163A1Cu)) {
        return;
    }
    ctx->pc = 0x163A1Cu;
label_163a1c:
    // 0x163a1c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_163a20:
    if (ctx->pc == 0x163A20u) {
        ctx->pc = 0x163A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A1Cu;
        // 0x163a20: 0x92421008  lbu         $v0, 0x1008($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A24u;
        goto label_163a24;
    }
    ctx->pc = 0x163A1Cu;
    {
        const bool branch_taken_0x163a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163a1c) {
            ctx->pc = 0x163A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163A1Cu;
            // 0x163a20: 0x92421008  lbu         $v0, 0x1008($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163A34u;
            goto label_163a34;
        }
    }
    ctx->pc = 0x163A24u;
label_163a24:
    // 0x163a24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x163a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_163a28:
    // 0x163a28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x163a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_163a2c:
    // 0x163a2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x163a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_163a30:
    // 0x163a30: 0x92421008  lbu         $v0, 0x1008($s2)
    ctx->pc = 0x163a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4104)));
label_163a34:
    // 0x163a34: 0x26b00028  addiu       $s0, $s5, 0x28
    ctx->pc = 0x163a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
label_163a38:
    // 0x163a38: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x163a38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_163a3c:
    // 0x163a3c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_163a40:
    if (ctx->pc == 0x163A40u) {
        ctx->pc = 0x163A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A3Cu;
        // 0x163a40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A44u;
        goto label_163a44;
    }
    ctx->pc = 0x163A3Cu;
    {
        const bool branch_taken_0x163a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A3Cu;
        // 0x163a40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a3c) {
            ctx->pc = 0x163A9Cu;
            goto label_163a9c;
        }
    }
    ctx->pc = 0x163A44u;
label_163a44:
    // 0x163a44: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x163a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_163a48:
    // 0x163a48: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x163a48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163a4c:
    // 0x163a4c: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x163a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_163a50:
    // 0x163a50: 0x8c82fff4  lw          $v0, -0xC($a0)
    ctx->pc = 0x163a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967284)));
label_163a54:
    // 0x163a54: 0x1445000d  bne         $v0, $a1, . + 4 + (0xD << 2)
label_163a58:
    if (ctx->pc == 0x163A58u) {
        ctx->pc = 0x163A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A54u;
        // 0x163a58: 0x63900  sll         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A5Cu;
        goto label_163a5c;
    }
    ctx->pc = 0x163A54u;
    {
        const bool branch_taken_0x163a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x163A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A54u;
        // 0x163a58: 0x63900  sll         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a54) {
            ctx->pc = 0x163A8Cu;
            goto label_163a8c;
        }
    }
    ctx->pc = 0x163A5Cu;
label_163a5c:
    // 0x163a5c: 0x8c83fff8  lw          $v1, -0x8($a0)
    ctx->pc = 0x163a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_163a60:
    // 0x163a60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x163a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_163a64:
    // 0x163a64: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_163a68:
    if (ctx->pc == 0x163A68u) {
        ctx->pc = 0x163A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A64u;
        // 0x163a68: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A6Cu;
        goto label_163a6c;
    }
    ctx->pc = 0x163A64u;
    {
        const bool branch_taken_0x163a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163a64) {
            ctx->pc = 0x163A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163A64u;
            // 0x163a68: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163A90u;
            goto label_163a90;
        }
    }
    ctx->pc = 0x163A6Cu;
label_163a6c:
    // 0x163a6c: 0x8c83fffc  lw          $v1, -0x4($a0)
    ctx->pc = 0x163a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_163a70:
    // 0x163a70: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x163a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_163a74:
    // 0x163a74: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_163a78:
    if (ctx->pc == 0x163A78u) {
        ctx->pc = 0x163A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A74u;
        // 0x163a78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A7Cu;
        goto label_163a7c;
    }
    ctx->pc = 0x163A74u;
    {
        const bool branch_taken_0x163a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163a74) {
            ctx->pc = 0x163A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163A74u;
            // 0x163a78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163A90u;
            goto label_163a90;
        }
    }
    ctx->pc = 0x163A7Cu;
label_163a7c:
    // 0x163a7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x163a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_163a80:
    // 0x163a80: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x163a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_163a84:
    // 0x163a84: 0x1062ffa4  beq         $v1, $v0, . + 4 + (-0x5C << 2)
label_163a88:
    if (ctx->pc == 0x163A88u) {
        ctx->pc = 0x163A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A84u;
        // 0x163a88: 0x24e20008  addiu       $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A8Cu;
        goto label_163a8c;
    }
    ctx->pc = 0x163A84u;
    {
        const bool branch_taken_0x163a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x163A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A84u;
        // 0x163a88: 0x24e20008  addiu       $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a84) {
            ctx->pc = 0x163918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163918;
        }
    }
    ctx->pc = 0x163A8Cu;
label_163a8c:
    // 0x163a8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x163a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_163a90:
    // 0x163a90: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x163a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_163a94:
    // 0x163a94: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_163a98:
    if (ctx->pc == 0x163A98u) {
        ctx->pc = 0x163A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A94u;
        // 0x163a98: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A9Cu;
        goto label_163a9c;
    }
    ctx->pc = 0x163A94u;
    {
        const bool branch_taken_0x163a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A94u;
        // 0x163a98: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a94) {
            ctx->pc = 0x163A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163a50;
        }
    }
    ctx->pc = 0x163A9Cu;
label_163a9c:
    // 0x163a9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163aa0:
    // 0x163aa0: 0x54e00013  bnel        $a3, $zero, . + 4 + (0x13 << 2)
label_163aa4:
    if (ctx->pc == 0x163AA4u) {
        ctx->pc = 0x163AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AA0u;
        // 0x163aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163AA8u;
        goto label_163aa8;
    }
    ctx->pc = 0x163AA0u;
    {
        const bool branch_taken_0x163aa0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x163aa0) {
            ctx->pc = 0x163AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163AA0u;
            // 0x163aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163AF0u;
            goto label_163af0;
        }
    }
    ctx->pc = 0x163AA8u;
label_163aa8:
    // 0x163aa8: 0xc0594f2  jal         func_1653C8
label_163aac:
    if (ctx->pc == 0x163AACu) {
        ctx->pc = 0x163AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AA8u;
        // 0x163aac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163AB0u;
        goto label_163ab0;
    }
    ctx->pc = 0x163AA8u;
    SET_GPR_U32(ctx, 31, 0x163AB0u);
    ctx->pc = 0x163AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AA8u;
    // 0x163aac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1653C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1653C8u, 0x163AA8u, 0x163AB0u)) {
        return;
    }
    ctx->pc = 0x163AB0u;
label_163ab0:
    // 0x163ab0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_163ab4:
    // 0x163ab4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_163ab8:
    // 0x163ab8: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x163ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_163abc:
    // 0x163abc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x163abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_163ac0:
    // 0x163ac0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x163ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_163ac4:
    // 0x163ac4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x163ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_163ac8:
    // 0x163ac8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x163ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_163acc:
    // 0x163acc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x163accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_163ad0:
    // 0x163ad0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x163ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_163ad4:
    // 0x163ad4: 0x2423821  addu        $a3, $s2, $v0
    ctx->pc = 0x163ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_163ad8:
    // 0x163ad8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x163ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_163adc:
    // 0x163adc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x163adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_163ae0:
    // 0x163ae0: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x163ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_163ae4:
    // 0x163ae4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x163ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_163ae8:
    // 0x163ae8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x163ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_163aec:
    // 0x163aec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163af0:
    // 0x163af0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163af4:
    // 0x163af4: 0xc058c10  jal         func_163040
label_163af8:
    if (ctx->pc == 0x163AF8u) {
        ctx->pc = 0x163AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AF4u;
        // 0x163af8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163AFCu;
        goto label_163afc;
    }
    ctx->pc = 0x163AF4u;
    SET_GPR_U32(ctx, 31, 0x163AFCu);
    ctx->pc = 0x163AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AF4u;
    // 0x163af8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x163040u, 0x163AF4u, 0x163AFCu)) {
        return;
    }
    ctx->pc = 0x163AFCu;
label_163afc:
    // 0x163afc: 0xc0955f8  jal         func_2557E0
label_163b00:
    if (ctx->pc == 0x163B00u) {
        ctx->pc = 0x163B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AFCu;
        // 0x163b00: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B04u;
        goto label_163b04;
    }
    ctx->pc = 0x163AFCu;
    SET_GPR_U32(ctx, 31, 0x163B04u);
    ctx->pc = 0x163B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AFCu;
    // 0x163b00: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x163AFCu, 0x163B04u)) {
        return;
    }
    ctx->pc = 0x163B04u;
label_163b04:
    // 0x163b04: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x163b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_163b08:
    // 0x163b08: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x163b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_163b0c:
    // 0x163b0c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x163b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_163b10:
    // 0x163b10: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x163b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_163b14:
    // 0x163b14: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x163b14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_163b18:
    // 0x163b18: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x163b18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_163b1c:
    // 0x163b1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x163b1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_163b20:
    // 0x163b20: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x163b20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_163b24:
    // 0x163b24: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x163b24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_163b28:
    // 0x163b28: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x163b28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_163b2c:
    // 0x163b2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x163b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163b30:
    // 0x163b30: 0x3e00008  jr          $ra
label_163b34:
    if (ctx->pc == 0x163B34u) {
        ctx->pc = 0x163B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B30u;
        // 0x163b34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B38u;
        goto label_fallthrough_0x163b30;
    }
    ctx->pc = 0x163B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B30u;
        // 0x163b34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x163b30:
    ctx->pc = 0x163B38u;
}
