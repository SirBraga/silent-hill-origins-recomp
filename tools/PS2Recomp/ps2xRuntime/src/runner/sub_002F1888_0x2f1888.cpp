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

// Function: sub_002F1888
// Address: 0x2f1888 - 0x2f1aa0
void sub_002F1888_0x2f1888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1888_0x2f1888");
#endif

    switch (ctx->pc) {
        case 0x2f1888u: goto label_2f1888;
        case 0x2f188cu: goto label_2f188c;
        case 0x2f1890u: goto label_2f1890;
        case 0x2f1894u: goto label_2f1894;
        case 0x2f1898u: goto label_2f1898;
        case 0x2f189cu: goto label_2f189c;
        case 0x2f18a0u: goto label_2f18a0;
        case 0x2f18a4u: goto label_2f18a4;
        case 0x2f18a8u: goto label_2f18a8;
        case 0x2f18acu: goto label_2f18ac;
        case 0x2f18b0u: goto label_2f18b0;
        case 0x2f18b4u: goto label_2f18b4;
        case 0x2f18b8u: goto label_2f18b8;
        case 0x2f18bcu: goto label_2f18bc;
        case 0x2f18c0u: goto label_2f18c0;
        case 0x2f18c4u: goto label_2f18c4;
        case 0x2f18c8u: goto label_2f18c8;
        case 0x2f18ccu: goto label_2f18cc;
        case 0x2f18d0u: goto label_2f18d0;
        case 0x2f18d4u: goto label_2f18d4;
        case 0x2f18d8u: goto label_2f18d8;
        case 0x2f18dcu: goto label_2f18dc;
        case 0x2f18e0u: goto label_2f18e0;
        case 0x2f18e4u: goto label_2f18e4;
        case 0x2f18e8u: goto label_2f18e8;
        case 0x2f18ecu: goto label_2f18ec;
        case 0x2f18f0u: goto label_2f18f0;
        case 0x2f18f4u: goto label_2f18f4;
        case 0x2f18f8u: goto label_2f18f8;
        case 0x2f18fcu: goto label_2f18fc;
        case 0x2f1900u: goto label_2f1900;
        case 0x2f1904u: goto label_2f1904;
        case 0x2f1908u: goto label_2f1908;
        case 0x2f190cu: goto label_2f190c;
        case 0x2f1910u: goto label_2f1910;
        case 0x2f1914u: goto label_2f1914;
        case 0x2f1918u: goto label_2f1918;
        case 0x2f191cu: goto label_2f191c;
        case 0x2f1920u: goto label_2f1920;
        case 0x2f1924u: goto label_2f1924;
        case 0x2f1928u: goto label_2f1928;
        case 0x2f192cu: goto label_2f192c;
        case 0x2f1930u: goto label_2f1930;
        case 0x2f1934u: goto label_2f1934;
        case 0x2f1938u: goto label_2f1938;
        case 0x2f193cu: goto label_2f193c;
        case 0x2f1940u: goto label_2f1940;
        case 0x2f1944u: goto label_2f1944;
        case 0x2f1948u: goto label_2f1948;
        case 0x2f194cu: goto label_2f194c;
        case 0x2f1950u: goto label_2f1950;
        case 0x2f1954u: goto label_2f1954;
        case 0x2f1958u: goto label_2f1958;
        case 0x2f195cu: goto label_2f195c;
        case 0x2f1960u: goto label_2f1960;
        case 0x2f1964u: goto label_2f1964;
        case 0x2f1968u: goto label_2f1968;
        case 0x2f196cu: goto label_2f196c;
        case 0x2f1970u: goto label_2f1970;
        case 0x2f1974u: goto label_2f1974;
        case 0x2f1978u: goto label_2f1978;
        case 0x2f197cu: goto label_2f197c;
        case 0x2f1980u: goto label_2f1980;
        case 0x2f1984u: goto label_2f1984;
        case 0x2f1988u: goto label_2f1988;
        case 0x2f198cu: goto label_2f198c;
        case 0x2f1990u: goto label_2f1990;
        case 0x2f1994u: goto label_2f1994;
        case 0x2f1998u: goto label_2f1998;
        case 0x2f199cu: goto label_2f199c;
        case 0x2f19a0u: goto label_2f19a0;
        case 0x2f19a4u: goto label_2f19a4;
        case 0x2f19a8u: goto label_2f19a8;
        case 0x2f19acu: goto label_2f19ac;
        case 0x2f19b0u: goto label_2f19b0;
        case 0x2f19b4u: goto label_2f19b4;
        case 0x2f19b8u: goto label_2f19b8;
        case 0x2f19bcu: goto label_2f19bc;
        case 0x2f19c0u: goto label_2f19c0;
        case 0x2f19c4u: goto label_2f19c4;
        case 0x2f19c8u: goto label_2f19c8;
        case 0x2f19ccu: goto label_2f19cc;
        case 0x2f19d0u: goto label_2f19d0;
        case 0x2f19d4u: goto label_2f19d4;
        case 0x2f19d8u: goto label_2f19d8;
        case 0x2f19dcu: goto label_2f19dc;
        case 0x2f19e0u: goto label_2f19e0;
        case 0x2f19e4u: goto label_2f19e4;
        case 0x2f19e8u: goto label_2f19e8;
        case 0x2f19ecu: goto label_2f19ec;
        case 0x2f19f0u: goto label_2f19f0;
        case 0x2f19f4u: goto label_2f19f4;
        case 0x2f19f8u: goto label_2f19f8;
        case 0x2f19fcu: goto label_2f19fc;
        case 0x2f1a00u: goto label_2f1a00;
        case 0x2f1a04u: goto label_2f1a04;
        case 0x2f1a08u: goto label_2f1a08;
        case 0x2f1a0cu: goto label_2f1a0c;
        case 0x2f1a10u: goto label_2f1a10;
        case 0x2f1a14u: goto label_2f1a14;
        case 0x2f1a18u: goto label_2f1a18;
        case 0x2f1a1cu: goto label_2f1a1c;
        case 0x2f1a20u: goto label_2f1a20;
        case 0x2f1a24u: goto label_2f1a24;
        case 0x2f1a28u: goto label_2f1a28;
        case 0x2f1a2cu: goto label_2f1a2c;
        case 0x2f1a30u: goto label_2f1a30;
        case 0x2f1a34u: goto label_2f1a34;
        case 0x2f1a38u: goto label_2f1a38;
        case 0x2f1a3cu: goto label_2f1a3c;
        case 0x2f1a40u: goto label_2f1a40;
        case 0x2f1a44u: goto label_2f1a44;
        case 0x2f1a48u: goto label_2f1a48;
        case 0x2f1a4cu: goto label_2f1a4c;
        case 0x2f1a50u: goto label_2f1a50;
        case 0x2f1a54u: goto label_2f1a54;
        case 0x2f1a58u: goto label_2f1a58;
        case 0x2f1a5cu: goto label_2f1a5c;
        case 0x2f1a60u: goto label_2f1a60;
        case 0x2f1a64u: goto label_2f1a64;
        case 0x2f1a68u: goto label_2f1a68;
        case 0x2f1a6cu: goto label_2f1a6c;
        case 0x2f1a70u: goto label_2f1a70;
        case 0x2f1a74u: goto label_2f1a74;
        case 0x2f1a78u: goto label_2f1a78;
        case 0x2f1a7cu: goto label_2f1a7c;
        case 0x2f1a80u: goto label_2f1a80;
        case 0x2f1a84u: goto label_2f1a84;
        case 0x2f1a88u: goto label_2f1a88;
        case 0x2f1a8cu: goto label_2f1a8c;
        case 0x2f1a90u: goto label_2f1a90;
        case 0x2f1a94u: goto label_2f1a94;
        case 0x2f1a98u: goto label_2f1a98;
        case 0x2f1a9cu: goto label_2f1a9c;
        default: break;
    }

    ctx->pc = 0x2f1888u;

label_2f1888:
    // 0x2f1888: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f1888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2f188c:
    // 0x2f188c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2f1890:
    // 0x2f1890: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f1890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2f1894:
    // 0x2f1894: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x2f1894u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
label_2f1898:
    // 0x2f1898: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f1898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2f189c:
    // 0x2f189c: 0x3c120071  lui         $s2, 0x71
    ctx->pc = 0x2f189cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
label_2f18a0:
    // 0x2f18a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f18a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2f18a4:
    // 0x2f18a4: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x2f18a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
label_2f18a8:
    // 0x2f18a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f18a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f18ac:
    // 0x2f18ac: 0x2642f620  addiu       $v0, $s2, -0x9E0
    ctx->pc = 0x2f18acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964768));
label_2f18b0:
    // 0x2f18b0: 0xc0c84d8  jal         func_321360
label_2f18b4:
    if (ctx->pc == 0x2F18B4u) {
        ctx->pc = 0x2F18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F18B0u;
        // 0x2f18b4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F18B8u;
        goto label_2f18b8;
    }
    ctx->pc = 0x2F18B0u;
    SET_GPR_U32(ctx, 31, 0x2F18B8u);
    ctx->pc = 0x2F18B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F18B0u;
    // 0x2f18b4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F18B0u, 0x2F18B8u)) {
        return;
    }
    ctx->pc = 0x2F18B8u;
label_2f18b8:
    // 0x2f18b8: 0x2623f100  addiu       $v1, $s1, -0xF00
    ctx->pc = 0x2f18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f18bc:
    // 0x2f18bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2f18bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2f18c0:
    // 0x2f18c0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2f18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_2f18c4:
    // 0x2f18c4: 0x2c430017  sltiu       $v1, $v0, 0x17
    ctx->pc = 0x2f18c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_2f18c8:
    // 0x2f18c8: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
label_2f18cc:
    if (ctx->pc == 0x2F18CCu) {
        ctx->pc = 0x2F18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F18C8u;
        // 0x2f18cc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F18D0u;
        goto label_2f18d0;
    }
    ctx->pc = 0x2F18C8u;
    {
        const bool branch_taken_0x2f18c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F18C8u;
        // 0x2f18cc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f18c8) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F18D0u;
label_2f18d0:
    // 0x2f18d0: 0x266300e0  addiu       $v1, $s3, 0xE0
    ctx->pc = 0x2f18d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_2f18d4:
    // 0x2f18d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f18d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f18d8:
    // 0x2f18d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f18d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f18dc:
    // 0x2f18dc: 0x800008  jr          $a0
label_2f18e0:
    if (ctx->pc == 0x2F18E0u) {
        ctx->pc = 0x2F18E4u;
        goto label_2f18e4;
    }
    ctx->pc = 0x2F18DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F18DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F18E4u;
label_2f18e4:
    // 0x2f18e4: 0x2630f100  addiu       $s0, $s1, -0xF00
    ctx->pc = 0x2f18e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f18e8:
    // 0x2f18e8: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f18e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f18ec:
    // 0x2f18ec: 0xc0bcaf0  jal         func_2F2BC0
label_2f18f0:
    if (ctx->pc == 0x2F18F0u) {
        ctx->pc = 0x2F18F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F18ECu;
        // 0x2f18f0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F18F4u;
        goto label_2f18f4;
    }
    ctx->pc = 0x2F18ECu;
    SET_GPR_U32(ctx, 31, 0x2F18F4u);
    ctx->pc = 0x2F18F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F18ECu;
    // 0x2f18f0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2BC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2BC0u, 0x2F18ECu, 0x2F18F4u)) {
        return;
    }
    ctx->pc = 0x2F18F4u;
label_2f18f4:
    // 0x2f18f4: 0x1000005c  b           . + 4 + (0x5C << 2)
label_2f18f8:
    if (ctx->pc == 0x2F18F8u) {
        ctx->pc = 0x2F18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F18F4u;
        // 0x2f18f8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F18FCu;
        goto label_2f18fc;
    }
    ctx->pc = 0x2F18F4u;
    {
        const bool branch_taken_0x2f18f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F18F4u;
        // 0x2f18f8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f18f4) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F18FCu;
label_2f18fc:
    // 0x2f18fc: 0x2630f100  addiu       $s0, $s1, -0xF00
    ctx->pc = 0x2f18fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f1900:
    // 0x2f1900: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f1900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f1904:
    // 0x2f1904: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2f1904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f1908:
    // 0x2f1908: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x2f1908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_2f190c:
    // 0x2f190c: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x2f190cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2f1910:
    // 0x2f1910: 0xc0bd42c  jal         func_2F50B0
label_2f1914:
    if (ctx->pc == 0x2F1914u) {
        ctx->pc = 0x2F1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1910u;
        // 0x2f1914: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1918u;
        goto label_2f1918;
    }
    ctx->pc = 0x2F1910u;
    SET_GPR_U32(ctx, 31, 0x2F1918u);
    ctx->pc = 0x2F1914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1910u;
    // 0x2f1914: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F50B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F50B0u, 0x2F1910u, 0x2F1918u)) {
        return;
    }
    ctx->pc = 0x2F1918u;
label_2f1918:
    // 0x2f1918: 0x10000053  b           . + 4 + (0x53 << 2)
label_2f191c:
    if (ctx->pc == 0x2F191Cu) {
        ctx->pc = 0x2F191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1918u;
        // 0x2f191c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1920u;
        goto label_2f1920;
    }
    ctx->pc = 0x2F1918u;
    {
        const bool branch_taken_0x2f1918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1918u;
        // 0x2f191c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1918) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F1920u;
label_2f1920:
    // 0x2f1920: 0x2630f100  addiu       $s0, $s1, -0xF00
    ctx->pc = 0x2f1920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f1924:
    // 0x2f1924: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f1924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f1928:
    // 0x2f1928: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2f1928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f192c:
    // 0x2f192c: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x2f192cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_2f1930:
    // 0x2f1930: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x2f1930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2f1934:
    // 0x2f1934: 0xc0bd4ae  jal         func_2F52B8
label_2f1938:
    if (ctx->pc == 0x2F1938u) {
        ctx->pc = 0x2F1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1934u;
        // 0x2f1938: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F193Cu;
        goto label_2f193c;
    }
    ctx->pc = 0x2F1934u;
    SET_GPR_U32(ctx, 31, 0x2F193Cu);
    ctx->pc = 0x2F1938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1934u;
    // 0x2f1938: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F52B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F52B8u, 0x2F1934u, 0x2F193Cu)) {
        return;
    }
    ctx->pc = 0x2F193Cu;
label_2f193c:
    // 0x2f193c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_2f1940:
    if (ctx->pc == 0x2F1940u) {
        ctx->pc = 0x2F1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F193Cu;
        // 0x2f1940: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1944u;
        goto label_2f1944;
    }
    ctx->pc = 0x2F193Cu;
    {
        const bool branch_taken_0x2f193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F193Cu;
        // 0x2f1940: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f193c) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F1944u;
label_2f1944:
    // 0x2f1944: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f1944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f1948:
    // 0x2f1948: 0xc0bcbd6  jal         func_2F2F58
label_2f194c:
    if (ctx->pc == 0x2F194Cu) {
        ctx->pc = 0x2F194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1948u;
        // 0x2f194c: 0x2630f100  addiu       $s0, $s1, -0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1950u;
        goto label_2f1950;
    }
    ctx->pc = 0x2F1948u;
    SET_GPR_U32(ctx, 31, 0x2F1950u);
    ctx->pc = 0x2F194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1948u;
    // 0x2f194c: 0x2630f100  addiu       $s0, $s1, -0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2F58u, 0x2F1948u, 0x2F1950u)) {
        return;
    }
    ctx->pc = 0x2F1950u;
label_2f1950:
    // 0x2f1950: 0x10000045  b           . + 4 + (0x45 << 2)
label_2f1954:
    if (ctx->pc == 0x2F1954u) {
        ctx->pc = 0x2F1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1950u;
        // 0x2f1954: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1958u;
        goto label_2f1958;
    }
    ctx->pc = 0x2F1950u;
    {
        const bool branch_taken_0x2f1950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1950u;
        // 0x2f1954: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1950) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F1958u;
label_2f1958:
    // 0x2f1958: 0x2630f100  addiu       $s0, $s1, -0xF00
    ctx->pc = 0x2f1958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f195c:
    // 0x2f195c: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f195cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f1960:
    // 0x2f1960: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2f1960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f1964:
    // 0x2f1964: 0xc0bd2c8  jal         func_2F4B20
label_2f1968:
    if (ctx->pc == 0x2F1968u) {
        ctx->pc = 0x2F1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1964u;
        // 0x2f1968: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F196Cu;
        goto label_2f196c;
    }
    ctx->pc = 0x2F1964u;
    SET_GPR_U32(ctx, 31, 0x2F196Cu);
    ctx->pc = 0x2F1968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1964u;
    // 0x2f1968: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4B20u, 0x2F1964u, 0x2F196Cu)) {
        return;
    }
    ctx->pc = 0x2F196Cu;
label_2f196c:
    // 0x2f196c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2f1970:
    if (ctx->pc == 0x2F1970u) {
        ctx->pc = 0x2F1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F196Cu;
        // 0x2f1970: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1974u;
        goto label_2f1974;
    }
    ctx->pc = 0x2F196Cu;
    {
        const bool branch_taken_0x2f196c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F196Cu;
        // 0x2f1970: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f196c) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F1974u;
label_2f1974:
    // 0x2f1974: 0x2630f100  addiu       $s0, $s1, -0xF00
    ctx->pc = 0x2f1974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f1978:
    // 0x2f1978: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f1978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f197c:
    // 0x2f197c: 0xc0bd626  jal         func_2F5898
label_2f1980:
    if (ctx->pc == 0x2F1980u) {
        ctx->pc = 0x2F1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F197Cu;
        // 0x2f1980: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1984u;
        goto label_2f1984;
    }
    ctx->pc = 0x2F197Cu;
    SET_GPR_U32(ctx, 31, 0x2F1984u);
    ctx->pc = 0x2F1980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F197Cu;
    // 0x2f1980: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F5898u, 0x2F197Cu, 0x2F1984u)) {
        return;
    }
    ctx->pc = 0x2F1984u;
label_2f1984:
    // 0x2f1984: 0x10000038  b           . + 4 + (0x38 << 2)
label_2f1988:
    if (ctx->pc == 0x2F1988u) {
        ctx->pc = 0x2F1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1984u;
        // 0x2f1988: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F198Cu;
        goto label_2f198c;
    }
    ctx->pc = 0x2F1984u;
    {
        const bool branch_taken_0x2f1984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1984u;
        // 0x2f1988: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1984) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F198Cu;
label_2f198c:
    // 0x2f198c: 0x2630f100  addiu       $s0, $s1, -0xF00
    ctx->pc = 0x2f198cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f1990:
    // 0x2f1990: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f1990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f1994:
    // 0x2f1994: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2f1994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f1998:
    // 0x2f1998: 0xc0bd2c8  jal         func_2F4B20
label_2f199c:
    if (ctx->pc == 0x2F199Cu) {
        ctx->pc = 0x2F199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1998u;
        // 0x2f199c: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F19A0u;
        goto label_2f19a0;
    }
    ctx->pc = 0x2F1998u;
    SET_GPR_U32(ctx, 31, 0x2F19A0u);
    ctx->pc = 0x2F199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1998u;
    // 0x2f199c: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4B20u, 0x2F1998u, 0x2F19A0u)) {
        return;
    }
    ctx->pc = 0x2F19A0u;
label_2f19a0:
    // 0x2f19a0: 0x10000031  b           . + 4 + (0x31 << 2)
label_2f19a4:
    if (ctx->pc == 0x2F19A4u) {
        ctx->pc = 0x2F19A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19A0u;
        // 0x2f19a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F19A8u;
        goto label_2f19a8;
    }
    ctx->pc = 0x2F19A0u;
    {
        const bool branch_taken_0x2f19a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F19A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19A0u;
        // 0x2f19a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f19a0) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F19A8u;
label_2f19a8:
    // 0x2f19a8: 0x2630f100  addiu       $s0, $s1, -0xF00
    ctx->pc = 0x2f19a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f19ac:
    // 0x2f19ac: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f19acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f19b0:
    // 0x2f19b0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2f19b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f19b4:
    // 0x2f19b4: 0xc0bd6b2  jal         func_2F5AC8
label_2f19b8:
    if (ctx->pc == 0x2F19B8u) {
        ctx->pc = 0x2F19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19B4u;
        // 0x2f19b8: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F19BCu;
        goto label_2f19bc;
    }
    ctx->pc = 0x2F19B4u;
    SET_GPR_U32(ctx, 31, 0x2F19BCu);
    ctx->pc = 0x2F19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F19B4u;
    // 0x2f19b8: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5AC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F5AC8u, 0x2F19B4u, 0x2F19BCu)) {
        return;
    }
    ctx->pc = 0x2F19BCu;
label_2f19bc:
    // 0x2f19bc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2f19c0:
    if (ctx->pc == 0x2F19C0u) {
        ctx->pc = 0x2F19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19BCu;
        // 0x2f19c0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F19C4u;
        goto label_2f19c4;
    }
    ctx->pc = 0x2F19BCu;
    {
        const bool branch_taken_0x2f19bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19BCu;
        // 0x2f19c0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f19bc) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F19C4u;
label_2f19c4:
    // 0x2f19c4: 0x2630f100  addiu       $s0, $s1, -0xF00
    ctx->pc = 0x2f19c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f19c8:
    // 0x2f19c8: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f19c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f19cc:
    // 0x2f19cc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2f19ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f19d0:
    // 0x2f19d0: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x2f19d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_2f19d4:
    // 0x2f19d4: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x2f19d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2f19d8:
    // 0x2f19d8: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x2f19d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2f19dc:
    // 0x2f19dc: 0xc0bd6fc  jal         func_2F5BF0
label_2f19e0:
    if (ctx->pc == 0x2F19E0u) {
        ctx->pc = 0x2F19E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19DCu;
        // 0x2f19e0: 0x8e090018  lw          $t1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F19E4u;
        goto label_2f19e4;
    }
    ctx->pc = 0x2F19DCu;
    SET_GPR_U32(ctx, 31, 0x2F19E4u);
    ctx->pc = 0x2F19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F19DCu;
    // 0x2f19e0: 0x8e090018  lw          $t1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F5BF0u, 0x2F19DCu, 0x2F19E4u)) {
        return;
    }
    ctx->pc = 0x2F19E4u;
label_2f19e4:
    // 0x2f19e4: 0x10000020  b           . + 4 + (0x20 << 2)
label_2f19e8:
    if (ctx->pc == 0x2F19E8u) {
        ctx->pc = 0x2F19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19E4u;
        // 0x2f19e8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F19ECu;
        goto label_2f19ec;
    }
    ctx->pc = 0x2F19E4u;
    {
        const bool branch_taken_0x2f19e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19E4u;
        // 0x2f19e8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f19e4) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F19ECu;
label_2f19ec:
    // 0x2f19ec: 0x2630f100  addiu       $s0, $s1, -0xF00
    ctx->pc = 0x2f19ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f19f0:
    // 0x2f19f0: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f19f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f19f4:
    // 0x2f19f4: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x2f19f4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2f19f8:
    // 0x2f19f8: 0xc0bd844  jal         func_2F6110
label_2f19fc:
    if (ctx->pc == 0x2F19FCu) {
        ctx->pc = 0x2F19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19F8u;
        // 0x2f19fc: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A00u;
        goto label_2f1a00;
    }
    ctx->pc = 0x2F19F8u;
    SET_GPR_U32(ctx, 31, 0x2F1A00u);
    ctx->pc = 0x2F19FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F19F8u;
    // 0x2f19fc: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6110u, 0x2F19F8u, 0x2F1A00u)) {
        return;
    }
    ctx->pc = 0x2F1A00u;
label_2f1a00:
    // 0x2f1a00: 0x10000019  b           . + 4 + (0x19 << 2)
label_2f1a04:
    if (ctx->pc == 0x2F1A04u) {
        ctx->pc = 0x2F1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A00u;
        // 0x2f1a04: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A08u;
        goto label_2f1a08;
    }
    ctx->pc = 0x2F1A00u;
    {
        const bool branch_taken_0x2f1a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A00u;
        // 0x2f1a04: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a00) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F1A08u;
label_2f1a08:
    // 0x2f1a08: 0x2630f100  addiu       $s0, $s1, -0xF00
    ctx->pc = 0x2f1a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f1a0c:
    // 0x2f1a0c: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f1a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f1a10:
    // 0x2f1a10: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x2f1a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_2f1a14:
    // 0x2f1a14: 0xc0bd8a6  jal         func_2F6298
label_2f1a18:
    if (ctx->pc == 0x2F1A18u) {
        ctx->pc = 0x2F1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A14u;
        // 0x2f1a18: 0x2606049c  addiu       $a2, $s0, 0x49C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A1Cu;
        goto label_2f1a1c;
    }
    ctx->pc = 0x2F1A14u;
    SET_GPR_U32(ctx, 31, 0x2F1A1Cu);
    ctx->pc = 0x2F1A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A14u;
    // 0x2f1a18: 0x2606049c  addiu       $a2, $s0, 0x49C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6298u, 0x2F1A14u, 0x2F1A1Cu)) {
        return;
    }
    ctx->pc = 0x2F1A1Cu;
label_2f1a1c:
    // 0x2f1a1c: 0x10000012  b           . + 4 + (0x12 << 2)
label_2f1a20:
    if (ctx->pc == 0x2F1A20u) {
        ctx->pc = 0x2F1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A1Cu;
        // 0x2f1a20: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A24u;
        goto label_2f1a24;
    }
    ctx->pc = 0x2F1A1Cu;
    {
        const bool branch_taken_0x2f1a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A1Cu;
        // 0x2f1a20: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a1c) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F1A24u;
label_2f1a24:
    // 0x2f1a24: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f1a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f1a28:
    // 0x2f1a28: 0xc0bce22  jal         func_2F3888
label_2f1a2c:
    if (ctx->pc == 0x2F1A2Cu) {
        ctx->pc = 0x2F1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A28u;
        // 0x2f1a2c: 0x2630f100  addiu       $s0, $s1, -0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A30u;
        goto label_2f1a30;
    }
    ctx->pc = 0x2F1A28u;
    SET_GPR_U32(ctx, 31, 0x2F1A30u);
    ctx->pc = 0x2F1A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A28u;
    // 0x2f1a2c: 0x2630f100  addiu       $s0, $s1, -0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3888u, 0x2F1A28u, 0x2F1A30u)) {
        return;
    }
    ctx->pc = 0x2F1A30u;
label_2f1a30:
    // 0x2f1a30: 0x1000000d  b           . + 4 + (0xD << 2)
label_2f1a34:
    if (ctx->pc == 0x2F1A34u) {
        ctx->pc = 0x2F1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A30u;
        // 0x2f1a34: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A38u;
        goto label_2f1a38;
    }
    ctx->pc = 0x2F1A30u;
    {
        const bool branch_taken_0x2f1a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A30u;
        // 0x2f1a34: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a30) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F1A38u;
label_2f1a38:
    // 0x2f1a38: 0x2630f100  addiu       $s0, $s1, -0xF00
    ctx->pc = 0x2f1a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f1a3c:
    // 0x2f1a3c: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f1a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f1a40:
    // 0x2f1a40: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2f1a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f1a44:
    // 0x2f1a44: 0xc0bd28c  jal         func_2F4A30
label_2f1a48:
    if (ctx->pc == 0x2F1A48u) {
        ctx->pc = 0x2F1A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A44u;
        // 0x2f1a48: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A4Cu;
        goto label_2f1a4c;
    }
    ctx->pc = 0x2F1A44u;
    SET_GPR_U32(ctx, 31, 0x2F1A4Cu);
    ctx->pc = 0x2F1A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A44u;
    // 0x2f1a48: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4A30u, 0x2F1A44u, 0x2F1A4Cu)) {
        return;
    }
    ctx->pc = 0x2F1A4Cu;
label_2f1a4c:
    // 0x2f1a4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f1a50:
    if (ctx->pc == 0x2F1A50u) {
        ctx->pc = 0x2F1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A4Cu;
        // 0x2f1a50: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A54u;
        goto label_2f1a54;
    }
    ctx->pc = 0x2F1A4Cu;
    {
        const bool branch_taken_0x2f1a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A4Cu;
        // 0x2f1a50: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a4c) {
            ctx->pc = 0x2F1A68u;
            goto label_2f1a68;
        }
    }
    ctx->pc = 0x2F1A54u;
label_2f1a54:
    // 0x2f1a54: 0x2630f100  addiu       $s0, $s1, -0xF00
    ctx->pc = 0x2f1a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f1a58:
    // 0x2f1a58: 0x8e24f100  lw          $a0, -0xF00($s1)
    ctx->pc = 0x2f1a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963456)));
label_2f1a5c:
    // 0x2f1a5c: 0xc0bd906  jal         func_2F6418
label_2f1a60:
    if (ctx->pc == 0x2F1A60u) {
        ctx->pc = 0x2F1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A5Cu;
        // 0x2f1a60: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A64u;
        goto label_2f1a64;
    }
    ctx->pc = 0x2F1A5Cu;
    SET_GPR_U32(ctx, 31, 0x2F1A64u);
    ctx->pc = 0x2F1A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A5Cu;
    // 0x2f1a60: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6418u, 0x2F1A5Cu, 0x2F1A64u)) {
        return;
    }
    ctx->pc = 0x2F1A64u;
label_2f1a64:
    // 0x2f1a64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2f1a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2f1a68:
    // 0x2f1a68: 0x2624f100  addiu       $a0, $s1, -0xF00
    ctx->pc = 0x2f1a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963456));
label_2f1a6c:
    // 0x2f1a6c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
label_2f1a70:
    // 0x2f1a70: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2f1a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2f1a74:
    // 0x2f1a74: 0x34429fff  ori         $v0, $v0, 0x9FFF
    ctx->pc = 0x2f1a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40959);
label_2f1a78:
    // 0x2f1a78: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2f1a7c:
    if (ctx->pc == 0x2F1A7Cu) {
        ctx->pc = 0x2F1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A78u;
        // 0x2f1a7c: 0x2642f620  addiu       $v0, $s2, -0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A80u;
        goto label_2f1a80;
    }
    ctx->pc = 0x2F1A78u;
    {
        const bool branch_taken_0x2f1a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A78u;
        // 0x2f1a7c: 0x2642f620  addiu       $v0, $s2, -0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a78) {
            ctx->pc = 0x2F1A90u;
            goto label_2f1a90;
        }
    }
    ctx->pc = 0x2F1A80u;
label_2f1a80:
    // 0x2f1a80: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
label_2f1a84:
    // 0x2f1a84: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2f1a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2f1a88:
    // 0x2f1a88: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2f1a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2f1a8c:
    // 0x2f1a8c: 0x2642f620  addiu       $v0, $s2, -0x9E0
    ctx->pc = 0x2f1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964768));
label_2f1a90:
    // 0x2f1a90: 0xc0c84d0  jal         func_321340
label_2f1a94:
    if (ctx->pc == 0x2F1A94u) {
        ctx->pc = 0x2F1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A90u;
        // 0x2f1a94: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A98u;
        goto label_2f1a98;
    }
    ctx->pc = 0x2F1A90u;
    SET_GPR_U32(ctx, 31, 0x2F1A98u);
    ctx->pc = 0x2F1A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A90u;
    // 0x2f1a94: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1A90u, 0x2F1A98u)) {
        return;
    }
    ctx->pc = 0x2F1A98u;
label_2f1a98:
    // 0x2f1a98: 0x1000ff85  b           . + 4 + (-0x7B << 2)
label_2f1a9c:
    if (ctx->pc == 0x2F1A9Cu) {
        ctx->pc = 0x2F1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A98u;
        // 0x2f1a9c: 0x2642f620  addiu       $v0, $s2, -0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1AA0u;
        goto label_fallthrough_0x2f1a98;
    }
    ctx->pc = 0x2F1A98u;
    {
        const bool branch_taken_0x2f1a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A98u;
        // 0x2f1a9c: 0x2642f620  addiu       $v0, $s2, -0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a98) {
            ctx->pc = 0x2F18B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f18b0;
        }
    }
label_fallthrough_0x2f1a98:
    ctx->pc = 0x2F1AA0u;
}
