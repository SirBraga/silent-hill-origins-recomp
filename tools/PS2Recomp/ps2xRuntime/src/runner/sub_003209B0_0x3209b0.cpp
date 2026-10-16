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

// Function: sub_003209B0
// Address: 0x3209b0 - 0x320b48
void sub_003209B0_0x3209b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003209B0_0x3209b0");
#endif

    switch (ctx->pc) {
        case 0x3209f0u: goto label_3209f0;
        default: break;
    }

    ctx->pc = 0x3209b0u;

    // 0x3209b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3209b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3209b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3209b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3209b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3209b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3209bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3209bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3209c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3209c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3209c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3209c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3209c8: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x3209c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x3209cc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3209ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3209d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3209d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3209d4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3209d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3209d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3209d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3209dc: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x3209dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3209e0: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x3209e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x3209e4: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x3209e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3209e8: 0xc0c8044  jal         func_320110
    ctx->pc = 0x3209E8u;
    SET_GPR_U32(ctx, 31, 0x3209F0u);
    ctx->pc = 0x3209ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3209E8u;
    // 0x3209ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320110u, 0x3209E8u, 0x3209F0u)) {
        return;
    }
    ctx->pc = 0x3209F0u;
label_3209f0:
    // 0x3209f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3209f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3209f4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3209f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3209f8: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x3209f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x3209fc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3209fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x320a00: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x320A00u;
    {
        const bool branch_taken_0x320a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A00u;
        // 0x320a04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a00) {
            ctx->pc = 0x320A70u;
            goto label_320a70;
        }
    }
    ctx->pc = 0x320A08u;
    // 0x320a08: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x320a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x320a0c: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x320a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x320a10: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x320a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x320a14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x320a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320a18: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x320a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x320a1c: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x320a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x320a20: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x320a20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x320a24: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x320a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x320a28: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x320a28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x320a2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x320a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x320a30: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x320a30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x320a34: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x320A34u;
    {
        const bool branch_taken_0x320a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A34u;
        // 0x320a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a34) {
            ctx->pc = 0x320A40u;
            goto label_320a40;
        }
    }
    ctx->pc = 0x320A3Cu;
    // 0x320a3c: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x320a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_320a40:
    // 0x320a40: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x320a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x320a44: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x320a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x320a48: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x320a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x320a4c: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x320a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x320a50: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x320a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x320a54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x320a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x320a58: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x320a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320a5c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x320a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x320a60: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x320a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x320a64: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x320a64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x320a68: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x320A68u;
    {
        const bool branch_taken_0x320a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A68u;
        // 0x320a6c: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a68) {
            ctx->pc = 0x320B20u;
            goto label_320b20;
        }
    }
    ctx->pc = 0x320A70u;
label_320a70:
    // 0x320a70: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x320a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x320a74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320A74u;
    {
        const bool branch_taken_0x320a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A74u;
        // 0x320a78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a74) {
            ctx->pc = 0x320A84u;
            goto label_320a84;
        }
    }
    ctx->pc = 0x320A7Cu;
    // 0x320a7c: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x320a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x320a80: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x320a80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_320a84:
    // 0x320a84: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x320a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x320a88: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x320A88u;
    {
        const bool branch_taken_0x320a88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A88u;
        // 0x320a8c: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a88) {
            ctx->pc = 0x320AF0u;
            goto label_320af0;
        }
    }
    ctx->pc = 0x320A90u;
    // 0x320a90: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x320a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x320a94: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x320a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x320a98: 0xd31804  sllv        $v1, $s3, $a2
    ctx->pc = 0x320a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x320a9c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x320a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x320aa0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x320aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320aa4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x320aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x320aa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x320aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x320aac: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x320aacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x320ab0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x320ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x320ab4: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x320ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x320ab8: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x320ab8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x320abc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x320ABCu;
    {
        const bool branch_taken_0x320abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320ABCu;
        // 0x320ac0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320abc) {
            ctx->pc = 0x320AC8u;
            goto label_320ac8;
        }
    }
    ctx->pc = 0x320AC4u;
    // 0x320ac4: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x320ac4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_320ac8:
    // 0x320ac8: 0x61023  negu        $v0, $a2
    ctx->pc = 0x320ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x320acc: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x320accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x320ad0: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x320ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x320ad4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x320ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320ad8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x320ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x320adc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x320adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x320ae0: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x320ae0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x320ae4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x320ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x320ae8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x320AE8u;
    {
        const bool branch_taken_0x320ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AE8u;
        // 0x320aec: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ae8) {
            ctx->pc = 0x320B20u;
            goto label_320b20;
        }
    }
    ctx->pc = 0x320AF0u;
label_320af0:
    // 0x320af0: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x320af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x320af4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x320af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320af8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x320af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x320afc: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x320afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x320b00: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x320b00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x320b04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x320b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x320b08: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x320b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x320b0c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x320b0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x320b10: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x320b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320b14: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x320b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x320b18: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x320b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x320b1c: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x320b1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_320b20:
    // 0x320b20: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x320b20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x320b24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x320b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b28: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x320b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x320b2c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x320b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x320b30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x320b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320b34: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x320b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320b38: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x320b38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320b40: 0x3e00008  jr          $ra
    ctx->pc = 0x320B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B40u;
        // 0x320b44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320B48u;
}
