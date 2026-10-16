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

// Function: sub_0031F3B8
// Address: 0x31f3b8 - 0x31f560
void sub_0031F3B8_0x31f3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F3B8_0x31f3b8");
#endif

    switch (ctx->pc) {
        case 0x31f438u: goto label_31f438;
        case 0x31f488u: goto label_31f488;
        case 0x31f4acu: goto label_31f4ac;
        case 0x31f4d4u: goto label_31f4d4;
        case 0x31f4fcu: goto label_31f4fc;
        case 0x31f508u: goto label_31f508;
        case 0x31f52cu: goto label_31f52c;
        case 0x31f548u: goto label_31f548;
        default: break;
    }

    ctx->pc = 0x31f3b8u;

    // 0x31f3b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31f3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31f3bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31f3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31f3c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31f3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31f3c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31f3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f3c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31f3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31f3cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f3d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31f3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f3d4: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x31f3d4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31f3d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31f3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f3dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31f3dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31f3e0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x31f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x31f3e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f3e8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x31f3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x31f3ec: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31F3ECu;
    {
        const bool branch_taken_0x31f3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F3ECu;
        // 0x31f3f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f3ec) {
            ctx->pc = 0x31F440u;
            goto label_31f440;
        }
    }
    ctx->pc = 0x31F3F4u;
    // 0x31f3f4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x31f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x31f3f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f3fc: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x31f3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x31f400: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31f400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f404: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F404u;
    {
        const bool branch_taken_0x31f404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F404u;
        // 0x31f408: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f404) {
            ctx->pc = 0x31F418u;
            goto label_31f418;
        }
    }
    ctx->pc = 0x31F40Cu;
    // 0x31f40c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x31F40Cu;
    {
        const bool branch_taken_0x31f40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F40Cu;
        // 0x31f410: 0xdc622340  ld          $v0, 0x2340($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 9024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f40c) {
            ctx->pc = 0x31F548u;
            goto label_31f548;
        }
    }
    ctx->pc = 0x31F414u;
    // 0x31f414: 0x0  nop
    ctx->pc = 0x31f414u;
    // NOP
label_31f418:
    // 0x31f418: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F418u;
    {
        const bool branch_taken_0x31f418 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x31F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F418u;
        // 0x31f41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f418) {
            ctx->pc = 0x31F428u;
            goto label_31f428;
        }
    }
    ctx->pc = 0x31F420u;
    // 0x31f420: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x31F420u;
    {
        const bool branch_taken_0x31f420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F420u;
        // 0x31f424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f420) {
            ctx->pc = 0x31F548u;
            goto label_31f548;
        }
    }
    ctx->pc = 0x31F428u;
label_31f428:
    // 0x31f428: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x31f428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x31f42c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x31f42cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x31f430: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F430u;
    SET_GPR_U32(ctx, 31, 0x31F438u);
    ctx->pc = 0x31F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F430u;
    // 0x31f434: 0x2412ffca  addiu       $s2, $zero, -0x36 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F430u, 0x31F438u)) {
        return;
    }
    ctx->pc = 0x31F438u;
label_31f438:
    // 0x31f438: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31f438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f43c: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x31f43cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
label_31f440:
    // 0x31f440: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x31f440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x31f444: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f448: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x31f448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x31f44c: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x31F44Cu;
    {
        const bool branch_taken_0x31f44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f44c) {
            ctx->pc = 0x31F450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F44Cu;
            // 0x31f450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F538u;
            goto label_31f538;
        }
    }
    ctx->pc = 0x31F454u;
    // 0x31f454: 0x101503  sra         $v0, $s0, 20
    ctx->pc = 0x31f454u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 20));
    // 0x31f458: 0x2644fc01  addiu       $a0, $s2, -0x3FF
    ctx->pc = 0x31f458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966273));
    // 0x31f45c: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x31f45cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31f460: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x31f460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x31f464: 0x1227c2  srl         $a0, $s2, 31
    ctx->pc = 0x31f464u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x31f468: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x31f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x31f46c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x31f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31f470: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31f470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31f474: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x31f474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x31f478: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x31f478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x31f47c: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x31f47cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31f480: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x31F480u;
    SET_GPR_U32(ctx, 31, 0x31F488u);
    ctx->pc = 0x31F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F480u;
    // 0x31f484: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x31F480u, 0x31F488u)) {
        return;
    }
    ctx->pc = 0x31F488u;
label_31f488:
    // 0x31f488: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x31f488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f48c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x31f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31f490: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31f490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31f494: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x31f494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x31f498: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x31f498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x31f49c: 0x658825  or          $s1, $v1, $a1
    ctx->pc = 0x31f49cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x31f4a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31f4a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f4a4: 0xc0c7b68  jal         func_31EDA0
    ctx->pc = 0x31F4A4u;
    SET_GPR_U32(ctx, 31, 0x31F4ACu);
    ctx->pc = 0x31F4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F4A4u;
    // 0x31f4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31EDA0u, 0x31F4A4u, 0x31F4ACu)) {
        return;
    }
    ctx->pc = 0x31F4ACu;
label_31f4ac:
    // 0x31f4ac: 0x3405f567  ori         $a1, $zero, 0xF567
    ctx->pc = 0x31f4acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62823);
    // 0x31f4b0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f4b4: 0x34a5fbcc  ori         $a1, $a1, 0xFBCC
    ctx->pc = 0x31f4b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64460);
    // 0x31f4b8: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x31f4b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x31f4bc: 0x34a58f89  ori         $a1, $a1, 0x8F89
    ctx->pc = 0x31f4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36745);
    // 0x31f4c0: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x31f4c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x31f4c4: 0x34a50b36  ori         $a1, $a1, 0xB36
    ctx->pc = 0x31f4c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2870);
    // 0x31f4c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31f4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f4cc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F4CCu;
    SET_GPR_U32(ctx, 31, 0x31F4D4u);
    ctx->pc = 0x31F4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F4CCu;
    // 0x31f4d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F4CCu, 0x31F4D4u)) {
        return;
    }
    ctx->pc = 0x31F4D4u;
label_31f4d4:
    // 0x31f4d4: 0x3405ff6f  ori         $a1, $zero, 0xFF6F
    ctx->pc = 0x31f4d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65391);
    // 0x31f4d8: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x31f4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x31f4dc: 0x34a5b7b1  ori         $a1, $a1, 0xB7B1
    ctx->pc = 0x31f4dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47025);
    // 0x31f4e0: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x31f4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x31f4e4: 0x34a5a4dc  ori         $a1, $a1, 0xA4DC
    ctx->pc = 0x31f4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42204);
    // 0x31f4e8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x31f4e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x31f4ec: 0x34a5050e  ori         $a1, $a1, 0x50E
    ctx->pc = 0x31f4ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1294);
    // 0x31f4f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f4f4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F4F4u;
    SET_GPR_U32(ctx, 31, 0x31F4FCu);
    ctx->pc = 0x31F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F4F4u;
    // 0x31f4f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F4F4u, 0x31F4FCu)) {
        return;
    }
    ctx->pc = 0x31F4FCu;
label_31f4fc:
    // 0x31f4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31f4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f500: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31F500u;
    SET_GPR_U32(ctx, 31, 0x31F508u);
    ctx->pc = 0x31F504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F500u;
    // 0x31f504: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31F500u, 0x31F508u)) {
        return;
    }
    ctx->pc = 0x31F508u;
label_31f508:
    // 0x31f508: 0x3405ff4d  ori         $a1, $zero, 0xFF4D
    ctx->pc = 0x31f508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65357);
    // 0x31f50c: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x31f50cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x31f510: 0x34a5826a  ori         $a1, $a1, 0x826A
    ctx->pc = 0x31f510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33386);
    // 0x31f514: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x31f514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x31f518: 0x34a59f60  ori         $a1, $a1, 0x9F60
    ctx->pc = 0x31f518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40800);
    // 0x31f51c: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x31f51cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x31f520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f524: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F524u;
    SET_GPR_U32(ctx, 31, 0x31F52Cu);
    ctx->pc = 0x31F528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F524u;
    // 0x31f528: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F524u, 0x31F52Cu)) {
        return;
    }
    ctx->pc = 0x31F52Cu;
label_31f52c:
    // 0x31f52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31f52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f530: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31F530u;
    {
        const bool branch_taken_0x31f530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F530u;
        // 0x31f534: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f530) {
            ctx->pc = 0x31F540u;
            goto label_31f540;
        }
    }
    ctx->pc = 0x31F538u;
label_31f538:
    // 0x31f538: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31f538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f53c: 0x0  nop
    ctx->pc = 0x31f53cu;
    // NOP
label_31f540:
    // 0x31f540: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31F540u;
    SET_GPR_U32(ctx, 31, 0x31F548u);
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31F540u, 0x31F548u)) {
        return;
    }
    ctx->pc = 0x31F548u;
label_31f548:
    // 0x31f548: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31f548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31f54c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31f54cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31f550: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31f550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f558: 0x3e00008  jr          $ra
    ctx->pc = 0x31F558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F558u;
        // 0x31f55c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F560u;
}
