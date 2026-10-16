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

// Function: sub_002DA2E0
// Address: 0x2da2e0 - 0x2da440
void sub_002DA2E0_0x2da2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA2E0_0x2da2e0");
#endif

    switch (ctx->pc) {
        case 0x2da388u: goto label_2da388;
        case 0x2da3c0u: goto label_2da3c0;
        default: break;
    }

    ctx->pc = 0x2da2e0u;

    // 0x2da2e0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2da2e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2e4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2da2e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2e8: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x2da2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x2da2ec: 0xad06001c  sw          $a2, 0x1C($t0)
    ctx->pc = 0x2da2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 6));
    // 0x2da2f0: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x2da2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2da2f4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2da2f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2f8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2da2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2da2fc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2DA2FCu;
    {
        const bool branch_taken_0x2da2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2FCu;
        // 0x2da300: 0xad040020  sw          $a0, 0x20($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2fc) {
            ctx->pc = 0x2DA3E0u;
            goto label_2da3e0;
        }
    }
    ctx->pc = 0x2DA304u;
    // 0x2da304: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2da304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da308: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x2DA308u;
    {
        const bool branch_taken_0x2da308 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA308u;
        // 0x2da30c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da308) {
            ctx->pc = 0x2DA344u;
            goto label_2da344;
        }
    }
    ctx->pc = 0x2DA310u;
    // 0x2da310: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA310u;
    {
        const bool branch_taken_0x2da310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA310u;
        // 0x2da314: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da310) {
            ctx->pc = 0x2DA330u;
            goto label_2da330;
        }
    }
    ctx->pc = 0x2DA318u;
    // 0x2da318: 0x8d230040  lw          $v1, 0x40($t1)
    ctx->pc = 0x2da318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x2da31c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2da31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2da320: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2da320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2da324: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2da324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2da328: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DA328u;
    {
        const bool branch_taken_0x2da328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA328u;
        // 0x2da32c: 0x24670004  addiu       $a3, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da328) {
            ctx->pc = 0x2DA354u;
            goto label_2da354;
        }
    }
    ctx->pc = 0x2DA330u;
label_2da330:
    // 0x2da330: 0x8d230040  lw          $v1, 0x40($t1)
    ctx->pc = 0x2da330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x2da334: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2da334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2da338: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2da338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2da33c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA33Cu;
    {
        const bool branch_taken_0x2da33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA33Cu;
        // 0x2da340: 0x833821  addu        $a3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da33c) {
            ctx->pc = 0x2DA354u;
            goto label_2da354;
        }
    }
    ctx->pc = 0x2DA344u;
label_2da344:
    // 0x2da344: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x2da344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x2da348: 0x25070028  addiu       $a3, $t0, 0x28
    ctx->pc = 0x2da348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
    // 0x2da34c: 0x2502002c  addiu       $v0, $t0, 0x2C
    ctx->pc = 0x2da34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 44));
    // 0x2da350: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x2da350u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2));
label_2da354:
    // 0x2da354: 0x24eb0008  addiu       $t3, $a3, 0x8
    ctx->pc = 0x2da354u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2da358: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2da358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2da35c: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x2da35cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x2da360: 0x8d23004c  lw          $v1, 0x4C($t1)
    ctx->pc = 0x2da360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x2da364: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x2da364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2da368: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x2da368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2da36c: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x2da36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2da370: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2da370u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2da374: 0x8d23004c  lw          $v1, 0x4C($t1)
    ctx->pc = 0x2da374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x2da378: 0x9465000c  lhu         $a1, 0xC($v1)
    ctx->pc = 0x2da378u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2da37c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DA37Cu;
    {
        const bool branch_taken_0x2da37c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA37Cu;
        // 0x2da380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da37c) {
            ctx->pc = 0x2DA3ACu;
            goto label_2da3ac;
        }
    }
    ctx->pc = 0x2DA384u;
    // 0x2da384: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x2da384u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2da388:
    // 0x2da388: 0xca1818  mult        $v1, $a2, $t2
    ctx->pc = 0x2da388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2da38c: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x2da38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2da390: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2da390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2da394: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x2da394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
    // 0x2da398: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x2da398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2da39c: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x2da39cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x2da3a0: 0xc5202b  sltu        $a0, $a2, $a1
    ctx->pc = 0x2da3a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2da3a4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DA3A4u;
    {
        const bool branch_taken_0x2da3a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3A4u;
        // 0x2da3a8: 0xac420004  sw          $v0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3a4) {
            ctx->pc = 0x2DA388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da388;
        }
    }
    ctx->pc = 0x2DA3ACu;
label_2da3ac:
    // 0x2da3ac: 0x8d22004c  lw          $v0, 0x4C($t1)
    ctx->pc = 0x2da3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x2da3b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2da3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da3b4: 0x9445000e  lhu         $a1, 0xE($v0)
    ctx->pc = 0x2da3b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2da3b8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DA3B8u;
    {
        const bool branch_taken_0x2da3b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3B8u;
        // 0x2da3bc: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3b8) {
            ctx->pc = 0x2DA3E0u;
            goto label_2da3e0;
        }
    }
    ctx->pc = 0x2DA3C0u;
label_2da3c0:
    // 0x2da3c0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2da3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2da3c4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2da3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2da3c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2da3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2da3cc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2da3ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2da3d0: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x2da3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x2da3d4: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x2da3d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2da3d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DA3D8u;
    {
        const bool branch_taken_0x2da3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3D8u;
        // 0x2da3dc: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3d8) {
            ctx->pc = 0x2DA3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da3c0;
        }
    }
    ctx->pc = 0x2DA3E0u;
label_2da3e0:
    // 0x2da3e0: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x2da3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x2da3e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2da3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2da3e8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2DA3E8u;
    {
        const bool branch_taken_0x2da3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da3e8) {
            ctx->pc = 0x2DA3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA3E8u;
            // 0x2da3ec: 0x2502000c  addiu       $v0, $t0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA420u;
            goto label_2da420;
        }
    }
    ctx->pc = 0x2DA3F0u;
    // 0x2da3f0: 0x8d050020  lw          $a1, 0x20($t0)
    ctx->pc = 0x2da3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2da3f4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA3F4u;
    {
        const bool branch_taken_0x2da3f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3F4u;
        // 0x2da3f8: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3f4) {
            ctx->pc = 0x2DA414u;
            goto label_2da414;
        }
    }
    ctx->pc = 0x2DA3FCu;
    // 0x2da3fc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2da3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2da400: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2da400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2da404: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2da404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2da408: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2da408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2da40c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA40Cu;
    {
        const bool branch_taken_0x2da40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA40Cu;
        // 0x2da410: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da40c) {
            ctx->pc = 0x2DA418u;
            goto label_2da418;
        }
    }
    ctx->pc = 0x2DA414u;
label_2da414:
    // 0x2da414: 0x25020028  addiu       $v0, $t0, 0x28
    ctx->pc = 0x2da414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
label_2da418:
    // 0x2da418: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2da418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2da41c: 0x2502000c  addiu       $v0, $t0, 0xC
    ctx->pc = 0x2da41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_2da420:
    // 0x2da420: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x2da420u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x2da424: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x2da424u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
    // 0x2da428: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x2da428u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x2da42c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA42Cu;
        // 0x2da430: 0xad000018  sw          $zero, 0x18($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA434u;
    // 0x2da434: 0x0  nop
    ctx->pc = 0x2da434u;
    // NOP
    // 0x2da438: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2da438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da43c: 0x0  nop
    ctx->pc = 0x2da43cu;
    // NOP
    ctx->pc = 0x2da440u;
}
