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

// Function: sub_0022E958
// Address: 0x22e958 - 0x22ef58
void sub_0022E958_0x22e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E958_0x22e958");
#endif

    switch (ctx->pc) {
        case 0x22e970u: goto label_22e970;
        case 0x22ea08u: goto label_22ea08;
        case 0x22ecb0u: goto label_22ecb0;
        case 0x22ee20u: goto label_22ee20;
        case 0x22ef3cu: goto label_22ef3c;
        default: break;
    }

    ctx->pc = 0x22e958u;

    // 0x22e958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22e958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22e95c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22e95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22e960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22e964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22e964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e968: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x22e968u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x22e96c: 0x8d083ef4  lw          $t0, 0x3EF4($t0)
    ctx->pc = 0x22e96cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6B3EF4u));
label_22e970:
    // 0x22e970: 0x1100012b  beqz        $t0, . + 4 + (0x12B << 2)
    ctx->pc = 0x22E970u;
    {
        const bool branch_taken_0x22e970 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E970u;
        // 0x22e974: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e970) {
            ctx->pc = 0x22EE20u;
            goto label_22ee20;
        }
    }
    ctx->pc = 0x22E978u;
    // 0x22e978: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x22e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x22e97c: 0x1502006a  bne         $t0, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x22E97Cu;
    {
        const bool branch_taken_0x22e97c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x22E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E97Cu;
        // 0x22e980: 0x8f8290f0  lw          $v0, -0x6F10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e97c) {
            ctx->pc = 0x22EB28u;
            goto label_22eb28;
        }
    }
    ctx->pc = 0x22E984u;
    // 0x22e984: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22e984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x22e988: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x22e988u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22e98c: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x22e98cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x22e990: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e994: 0x8c633ea8  lw          $v1, 0x3EA8($v1)
    ctx->pc = 0x22e994u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22e998: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e99c: 0x8c423eac  lw          $v0, 0x3EAC($v0)
    ctx->pc = 0x22e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22e9a0: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x22e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22e9a4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22e9a8: 0x8c843ed8  lw          $a0, 0x3ED8($a0)
    ctx->pc = 0x22e9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3ED8u));
    // 0x22e9ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22e9b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22e9b4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x22e9b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x22e9b8: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x22E9B8u;
    {
        const bool branch_taken_0x22e9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9B8u;
        // 0x22e9bc: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9b8) {
            ctx->pc = 0x22EB20u;
            goto label_22eb20;
        }
    }
    ctx->pc = 0x22E9C0u;
    // 0x22e9c0: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x22e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x22e9c4: 0x2c422001  sltiu       $v0, $v0, 0x2001
    ctx->pc = 0x22e9c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8193) ? 1 : 0);
    // 0x22e9c8: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x22E9C8u;
    {
        const bool branch_taken_0x22e9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e9c8) {
            ctx->pc = 0x22E9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E9C8u;
            // 0x22e9cc: 0x8f838e3c  lw          $v1, -0x71C4($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EAF8u;
            goto label_22eaf8;
        }
    }
    ctx->pc = 0x22E9D0u;
    // 0x22e9d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22e9d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9d4: 0x66480b  movn        $t1, $v1, $a2
    ctx->pc = 0x22e9d4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3));
    // 0x22e9d8: 0x11200045  beqz        $t1, . + 4 + (0x45 << 2)
    ctx->pc = 0x22E9D8u;
    {
        const bool branch_taken_0x22e9d8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9D8u;
        // 0x22e9dc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9d8) {
            ctx->pc = 0x22EAF0u;
            goto label_22eaf0;
        }
    }
    ctx->pc = 0x22E9E0u;
    // 0x22e9e0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x22e9e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x22e9e8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22e9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x22e9ec: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22E9ECu;
    {
        const bool branch_taken_0x22e9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9ECu;
        // 0x22e9f0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9ec) {
            ctx->pc = 0x22EA28u;
            goto label_22ea28;
        }
    }
    ctx->pc = 0x22E9F4u;
    // 0x22e9f4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22e9f8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22e9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x22e9fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22e9fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x22ea00: 0xf  sync
    ctx->pc = 0x22ea00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22ea04: 0x40f  sync.p
    ctx->pc = 0x22ea04u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22ea08:
    // 0x22ea08: 0x0  nop
    ctx->pc = 0x22ea08u;
    // NOP
    // 0x22ea0c: 0x0  nop
    ctx->pc = 0x22ea0cu;
    // NOP
    // 0x22ea10: 0x0  nop
    ctx->pc = 0x22ea10u;
    // NOP
    // 0x22ea14: 0x0  nop
    ctx->pc = 0x22ea14u;
    // NOP
    // 0x22ea18: 0x0  nop
    ctx->pc = 0x22ea18u;
    // NOP
    // 0x22ea1c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22EA1Cu;
    {
        const bool branch_taken_0x22ea1c = (false);
        if (branch_taken_0x22ea1c) {
            ctx->pc = 0x22EA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ea08;
        }
    }
    ctx->pc = 0x22EA24u;
    // 0x22ea24: 0x0  nop
    ctx->pc = 0x22ea24u;
    // NOP
label_22ea28:
    // 0x22ea28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22ea2c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x22ea2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ea30: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x22ea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x22ea34: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x22ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x22ea38: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x22ea38u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x1000e010
    // 0x22ea3c: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x22ea3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x22ea40: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22ea44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x22ea48: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x22ea48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x22ea4c: 0x8d083ea8  lw          $t0, 0x3EA8($t0)
    ctx->pc = 0x22ea4cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22ea50: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x22ea50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x22ea54: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x22ea54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x22ea58: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x22ea58u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x22ea5c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x22ea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x22ea60: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x22ea60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x22ea64: 0x8ce73eac  lw          $a3, 0x3EAC($a3)
    ctx->pc = 0x22ea64u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22ea68: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x22ea68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x22ea6c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22ea70: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x22ea70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x22ea74: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x22ea74u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x22ea78: 0xf  sync
    ctx->pc = 0x22ea78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22ea7c: 0x40f  sync.p
    ctx->pc = 0x22ea7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22ea80: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22ea84: 0x8c844164  lw          $a0, 0x4164($a0)
    ctx->pc = 0x22ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4164u));
    // 0x22ea88: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x22EA88u;
    {
        const bool branch_taken_0x22ea88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA88u;
        // 0x22ea8c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea88) {
            ctx->pc = 0x22EAC0u;
            goto label_22eac0;
        }
    }
    ctx->pc = 0x22EA90u;
    // 0x22ea90: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22ea94: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x22ea94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x22ea98: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22ea98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22ea9c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22EA9Cu;
    {
        const bool branch_taken_0x22ea9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA9Cu;
        // 0x22eaa0: 0x8f828e3c  lw          $v0, -0x71C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea9c) {
            ctx->pc = 0x22EAC8u;
            goto label_22eac8;
        }
    }
    ctx->pc = 0x22EAA4u;
    // 0x22eaa4: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x22eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x22eaa8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x22eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x22eaac: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x22eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22eab0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22eab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22eab4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22eab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22eab8: 0xac224164  sw          $v0, 0x4164($at)
    ctx->pc = 0x22eab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4164u, _value); } while (0);
    // 0x22eabc: 0x0  nop
    ctx->pc = 0x22eabcu;
    // NOP
label_22eac0:
    // 0x22eac0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22eac4: 0x8c423eac  lw          $v0, 0x3EAC($v0)
    ctx->pc = 0x22eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EACu));
label_22eac8:
    // 0x22eac8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22eacc: 0x8c633ea8  lw          $v1, 0x3EA8($v1)
    ctx->pc = 0x22eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22ead0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22ead4: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x22ead4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x22ead8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ead8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22eadc: 0xac223eac  sw          $v0, 0x3EAC($at)
    ctx->pc = 0x22eadcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EACu, _value); } while (0);
    // 0x22eae0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22eae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22eae4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x22eae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22eae8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22eae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22eaec: 0xac233ea8  sw          $v1, 0x3EA8($at)
    ctx->pc = 0x22eaecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EA8u, _value); } while (0);
label_22eaf0:
    // 0x22eaf0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22eaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22eaf4: 0x8c633eac  lw          $v1, 0x3EAC($v1)
    ctx->pc = 0x22eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EACu));
label_22eaf8:
    // 0x22eaf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22eafc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22eafcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22eb00: 0x8ca5412c  lw          $a1, 0x412C($a1)
    ctx->pc = 0x22eb00u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22eb04: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x22eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x22eb08: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22eb0c: 0x8c843ea8  lw          $a0, 0x3EA8($a0)
    ctx->pc = 0x22eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22eb10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22eb14: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x22eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22eb18: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x22EB18u;
    {
        const bool branch_taken_0x22eb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB18u;
        // 0x22eb1c: 0xaf838e6c  sw          $v1, -0x7194($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb18) {
            ctx->pc = 0x22EF44u;
            goto label_22ef44;
        }
    }
    ctx->pc = 0x22EB20u;
label_22eb20:
    // 0x22eb20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22eb24: 0x8c424160  lw          $v0, 0x4160($v0)
    ctx->pc = 0x22eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4160u));
label_22eb28:
    // 0x22eb28: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x22EB28u;
    {
        const bool branch_taken_0x22eb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB28u;
        // 0x22eb2c: 0x8f828e38  lw          $v0, -0x71C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb28) {
            ctx->pc = 0x22EE18u;
            goto label_22ee18;
        }
    }
    ctx->pc = 0x22EB30u;
    // 0x22eb30: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x22eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x22eb34: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22eb34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x22eb38: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x22eb38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22eb3c: 0x3484ff80  ori         $a0, $a0, 0xFF80
    ctx->pc = 0x22eb3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65408);
    // 0x22eb40: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x22eb40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x22eb44: 0x8ce73eac  lw          $a3, 0x3EAC($a3)
    ctx->pc = 0x22eb44u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22eb48: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x22eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x22eb4c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x22eb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22eb50: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22eb54: 0x8c633ed8  lw          $v1, 0x3ED8($v1)
    ctx->pc = 0x22eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3ED8u));
    // 0x22eb58: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x22eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x22eb5c: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x22eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x22eb60: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x22eb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x22eb64: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22eb68: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x22eb68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22eb6c: 0x146000aa  bnez        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x22EB6Cu;
    {
        const bool branch_taken_0x22eb6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB6Cu;
        // 0x22eb70: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb6c) {
            ctx->pc = 0x22EE18u;
            goto label_22ee18;
        }
    }
    ctx->pc = 0x22EB74u;
    // 0x22eb74: 0x501001b  bgez        $t0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22EB74u;
    {
        const bool branch_taken_0x22eb74 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x22EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB74u;
        // 0x22eb78: 0x8f8290bc  lw          $v0, -0x6F44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb74) {
            ctx->pc = 0x22EBE4u;
            goto label_22ebe4;
        }
    }
    ctx->pc = 0x22EB7Cu;
    // 0x22eb7c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22eb80: 0x8ca53ef0  lw          $a1, 0x3EF0($a1)
    ctx->pc = 0x22eb80u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EF0u));
    // 0x22eb84: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x22eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x22eb88: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22eb8c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x22eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x22eb90: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x22eb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22eb94: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x22EB94u;
    {
        const bool branch_taken_0x22eb94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB94u;
        // 0x22eb98: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb94) {
            ctx->pc = 0x22EBC8u;
            goto label_22ebc8;
        }
    }
    ctx->pc = 0x22EB9Cu;
    // 0x22eb9c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x22eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x22eba0: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x22eba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x22eba4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x22eba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x22eba8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22eba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22ebac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x22ebacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x22ebb0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x22ebb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x22ebb4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x22ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x22ebb8: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x22ebb8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x22ebbc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x22ebbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x22ebc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22EBC0u;
    {
        const bool branch_taken_0x22ebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBC0u;
        // 0x22ebc4: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebc0) {
            ctx->pc = 0x22EBD4u;
            goto label_22ebd4;
        }
    }
    ctx->pc = 0x22EBC8u;
label_22ebc8:
    // 0x22ebc8: 0x24e2fff0  addiu       $v0, $a3, -0x10
    ctx->pc = 0x22ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x22ebcc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ebccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ebd0: 0xac223eac  sw          $v0, 0x3EAC($at)
    ctx->pc = 0x22ebd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EACu, _value); } while (0);
label_22ebd4:
    // 0x22ebd4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ebd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ebd8: 0xac203ef0  sw          $zero, 0x3EF0($at)
    ctx->pc = 0x22ebd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3EF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EF0u, _value); } while (0);
    // 0x22ebdc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22ebe0: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x22ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
label_22ebe4:
    // 0x22ebe4: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x22ebe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x22ebe8: 0x42778  dsll        $a0, $a0, 29
    ctx->pc = 0x22ebe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 29);
    // 0x22ebec: 0x34848440  ori         $a0, $a0, 0x8440
    ctx->pc = 0x22ebecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33856);
    // 0x22ebf0: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x22ebf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x22ebf4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x22ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x22ebf8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x22ebf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x22ebfc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x22ebfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22ec00: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x22ec00u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x22ec04: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22ec04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22ec08: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x22ec08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x22ec0c: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x22ec0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x22ec10: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x22ec10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x22ec14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22ec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec18: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x22ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22ec1c: 0x70c51b89  pcpyld      $v1, $a2, $a1
    ctx->pc = 0x22ec1cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x22ec20: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ec20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ec24: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x22ec24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22ec28: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x22ec28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x22ec2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x22ec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x22ec30: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x22ec30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x22ec34: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x22ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22ec38: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x22ec38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x22ec3c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ec3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ec40: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x22ec40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22ec44: 0x70e41b89  pcpyld      $v1, $a3, $a0
    ctx->pc = 0x22ec44u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x22ec48: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x22ec48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x22ec4c: 0x3c040600  lui         $a0, 0x600
    ctx->pc = 0x22ec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1536 << 16));
    // 0x22ec50: 0x3c031300  lui         $v1, 0x1300
    ctx->pc = 0x22ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4864 << 16));
    // 0x22ec54: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ec54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ec58: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x22ec58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22ec5c: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x22ec5cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x22ec60: 0x7c430020  sq          $v1, 0x20($v0)
    ctx->pc = 0x22ec60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
    // 0x22ec64: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ec64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ec68: 0xac26412c  sw          $a2, 0x412C($at)
    ctx->pc = 0x22ec68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22ec6c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EC6Cu;
    {
        const bool branch_taken_0x22ec6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC6Cu;
        // 0x22ec70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec6c) {
            ctx->pc = 0x22EC80u;
            goto label_22ec80;
        }
    }
    ctx->pc = 0x22EC74u;
    // 0x22ec74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22ec78: 0x8c423ea8  lw          $v0, 0x3EA8($v0)
    ctx->pc = 0x22ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22ec7c: 0xc24823  subu        $t1, $a2, $v0
    ctx->pc = 0x22ec7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_22ec80:
    // 0x22ec80: 0x11200045  beqz        $t1, . + 4 + (0x45 << 2)
    ctx->pc = 0x22EC80u;
    {
        const bool branch_taken_0x22ec80 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC80u;
        // 0x22ec84: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec80) {
            ctx->pc = 0x22ED98u;
            goto label_22ed98;
        }
    }
    ctx->pc = 0x22EC88u;
    // 0x22ec88: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22ec88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x22ec8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x22ec90: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22ec90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x22ec94: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22EC94u;
    {
        const bool branch_taken_0x22ec94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC94u;
        // 0x22ec98: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec94) {
            ctx->pc = 0x22ECD0u;
            goto label_22ecd0;
        }
    }
    ctx->pc = 0x22EC9Cu;
    // 0x22ec9c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22eca0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22eca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x22eca4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22eca4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x22eca8: 0xf  sync
    ctx->pc = 0x22eca8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22ecac: 0x40f  sync.p
    ctx->pc = 0x22ecacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22ecb0:
    // 0x22ecb0: 0x0  nop
    ctx->pc = 0x22ecb0u;
    // NOP
    // 0x22ecb4: 0x0  nop
    ctx->pc = 0x22ecb4u;
    // NOP
    // 0x22ecb8: 0x0  nop
    ctx->pc = 0x22ecb8u;
    // NOP
    // 0x22ecbc: 0x0  nop
    ctx->pc = 0x22ecbcu;
    // NOP
    // 0x22ecc0: 0x0  nop
    ctx->pc = 0x22ecc0u;
    // NOP
    // 0x22ecc4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22ECC4u;
    {
        const bool branch_taken_0x22ecc4 = (false);
        if (branch_taken_0x22ecc4) {
            ctx->pc = 0x22ECB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ecb0;
        }
    }
    ctx->pc = 0x22ECCCu;
    // 0x22eccc: 0x0  nop
    ctx->pc = 0x22ecccu;
    // NOP
label_22ecd0:
    // 0x22ecd0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22ecd4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x22ecd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ecd8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x22ecd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x22ecdc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x22ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x22ece0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x22ece0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x1000e010
    // 0x22ece4: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x22ece4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x22ece8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22ecec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22ececu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x22ecf0: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x22ecf0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x22ecf4: 0x8d083ea8  lw          $t0, 0x3EA8($t0)
    ctx->pc = 0x22ecf4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22ecf8: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x22ecf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x22ecfc: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x22ecfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x22ed00: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x22ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x22ed04: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x22ed04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x22ed08: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x22ed08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x22ed0c: 0x8ce73eac  lw          $a3, 0x3EAC($a3)
    ctx->pc = 0x22ed0cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22ed10: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x22ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x22ed14: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22ed18: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x22ed18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x22ed1c: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x22ed1cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x22ed20: 0xf  sync
    ctx->pc = 0x22ed20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22ed24: 0x40f  sync.p
    ctx->pc = 0x22ed24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22ed28: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22ed2c: 0x8c844164  lw          $a0, 0x4164($a0)
    ctx->pc = 0x22ed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4164u));
    // 0x22ed30: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x22ED30u;
    {
        const bool branch_taken_0x22ed30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED30u;
        // 0x22ed34: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed30) {
            ctx->pc = 0x22ED68u;
            goto label_22ed68;
        }
    }
    ctx->pc = 0x22ED38u;
    // 0x22ed38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22ed3c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x22ed3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x22ed40: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22ed40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22ed44: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22ED44u;
    {
        const bool branch_taken_0x22ed44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED44u;
        // 0x22ed48: 0x8f828e3c  lw          $v0, -0x71C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed44) {
            ctx->pc = 0x22ED70u;
            goto label_22ed70;
        }
    }
    ctx->pc = 0x22ED4Cu;
    // 0x22ed4c: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x22ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x22ed50: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x22ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x22ed54: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x22ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22ed58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22ed58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22ed5c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ed5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ed60: 0xac224164  sw          $v0, 0x4164($at)
    ctx->pc = 0x22ed60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4164u, _value); } while (0);
    // 0x22ed64: 0x0  nop
    ctx->pc = 0x22ed64u;
    // NOP
label_22ed68:
    // 0x22ed68: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22ed6c: 0x8c423eac  lw          $v0, 0x3EAC($v0)
    ctx->pc = 0x22ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EACu));
label_22ed70:
    // 0x22ed70: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22ed74: 0x8c633ea8  lw          $v1, 0x3EA8($v1)
    ctx->pc = 0x22ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22ed78: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22ed7c: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x22ed7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x22ed80: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ed80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ed84: 0xac223eac  sw          $v0, 0x3EAC($at)
    ctx->pc = 0x22ed84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EACu, _value); } while (0);
    // 0x22ed88: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ed88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ed8c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x22ed8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22ed90: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ed90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ed94: 0xac233ea8  sw          $v1, 0x3EA8($at)
    ctx->pc = 0x22ed94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EA8u, _value); } while (0);
label_22ed98:
    // 0x22ed98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22ed9c: 0x8c423eac  lw          $v0, 0x3EAC($v0)
    ctx->pc = 0x22ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22eda0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x22eda4: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x22eda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x22eda8: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x22eda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x22edac: 0x244200cf  addiu       $v0, $v0, 0xCF
    ctx->pc = 0x22edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 207));
    // 0x22edb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22edb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22edb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22edb8: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x22edb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x22edbc: 0x8ce74160  lw          $a3, 0x4160($a3)
    ctx->pc = 0x22edbcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B4160u));
    // 0x22edc0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x22edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x22edc4: 0x24080102  addiu       $t0, $zero, 0x102
    ctx->pc = 0x22edc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x22edc8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x22edc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22edcc: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x22edccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x22edd0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22edd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22edd4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22edd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22edd8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x22edd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22eddc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22eddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ede0: 0xac243edc  sw          $a0, 0x3EDC($at)
    ctx->pc = 0x22ede0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B3EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EDCu, _value); } while (0);
    // 0x22ede4: 0x70c31b89  pcpyld      $v1, $a2, $v1
    ctx->pc = 0x22ede4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x22ede8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x22ede8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x22edec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22edf0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22edf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22edf4: 0xac283ef4  sw          $t0, 0x3EF4($at)
    ctx->pc = 0x22edf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x6B3EF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EF4u, _value); } while (0);
    // 0x22edf8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22edf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22edfc: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x22edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22ee00: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22ee04: 0x8c843ea8  lw          $a0, 0x3EA8($a0)
    ctx->pc = 0x22ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22ee08: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ee08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ee0c: 0xac233eac  sw          $v1, 0x3EAC($at)
    ctx->pc = 0x22ee0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EACu, _value); } while (0);
    // 0x22ee10: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x22EE10u;
    {
        const bool branch_taken_0x22ee10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE10u;
        // 0x22ee14: 0xaf8490bc  sw          $a0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee10) {
            ctx->pc = 0x22EF44u;
            goto label_22ef44;
        }
    }
    ctx->pc = 0x22EE18u;
label_22ee18:
    // 0x22ee18: 0xc08b73a  jal         func_22DCE8
    ctx->pc = 0x22EE18u;
    SET_GPR_U32(ctx, 31, 0x22EE20u);
    ctx->pc = 0x22DCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22DCE8u, 0x22EE18u, 0x22EE20u)) {
        return;
    }
    ctx->pc = 0x22EE20u;
label_22ee20:
    // 0x22ee20: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22ee20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22ee24: 0x8ca53ee4  lw          $a1, 0x3EE4($a1)
    ctx->pc = 0x22ee24u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22ee28: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22ee2c: 0x8c423ee0  lw          $v0, 0x3EE0($v0)
    ctx->pc = 0x22ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EE0u));
    // 0x22ee30: 0x14a2001c  bne         $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x22EE30u;
    {
        const bool branch_taken_0x22ee30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x22EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE30u;
        // 0x22ee34: 0x8f868e6c  lw          $a2, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee30) {
            ctx->pc = 0x22EEA4u;
            goto label_22eea4;
        }
    }
    ctx->pc = 0x22EE38u;
    // 0x22ee38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22ee3c: 0x8c423edc  lw          $v0, 0x3EDC($v0)
    ctx->pc = 0x22ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EDCu));
    // 0x22ee40: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x22ee44: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x22ee44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x22ee48: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22ee4c: 0x8c843ed8  lw          $a0, 0x3ED8($a0)
    ctx->pc = 0x22ee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3ED8u));
    // 0x22ee50: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x22ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x22ee54: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x22ee54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22ee58: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x22ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x22ee5c: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x22ee5cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x22ee60: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x22EE60u;
    {
        const bool branch_taken_0x22ee60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE60u;
        // 0x22ee64: 0x24c20078  addiu       $v0, $a2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee60) {
            ctx->pc = 0x22EE94u;
            goto label_22ee94;
        }
    }
    ctx->pc = 0x22EE68u;
    // 0x22ee68: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ee68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ee6c: 0xac233edc  sw          $v1, 0x3EDC($at)
    ctx->pc = 0x22ee6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EDCu, _value); } while (0);
    // 0x22ee70: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ee70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ee74: 0xac223ee0  sw          $v0, 0x3EE0($at)
    ctx->pc = 0x22ee74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EE0u, _value); } while (0);
    // 0x22ee78: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x22ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x22ee7c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x22ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x22ee80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22ee84: 0x8c423ee4  lw          $v0, 0x3EE4($v0)
    ctx->pc = 0x22ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22ee88: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x22ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x22ee8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22EE8Cu;
    {
        const bool branch_taken_0x22ee8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE8Cu;
        // 0x22ee90: 0xaf868e74  sw          $a2, -0x718C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938228), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee8c) {
            ctx->pc = 0x22EE9Cu;
            goto label_22ee9c;
        }
    }
    ctx->pc = 0x22EE94u;
label_22ee94:
    // 0x22ee94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22EE94u;
    {
        const bool branch_taken_0x22ee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE94u;
        // 0x22ee98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee94) {
            ctx->pc = 0x22EEA4u;
            goto label_22eea4;
        }
    }
    ctx->pc = 0x22EE9Cu;
label_22ee9c:
    // 0x22ee9c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22ee9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x22eea0: 0x8cc63edc  lw          $a2, 0x3EDC($a2)
    ctx->pc = 0x22eea0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B3EDCu));
label_22eea4:
    // 0x22eea4: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x22EEA4u;
    {
        const bool branch_taken_0x22eea4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEA4u;
        // 0x22eea8: 0x24c4008f  addiu       $a0, $a2, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eea4) {
            ctx->pc = 0x22EF18u;
            goto label_22ef18;
        }
    }
    ctx->pc = 0x22EEACu;
    // 0x22eeac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22eeb0: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x22eeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x22eeb4: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x22eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x22eeb8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x22eeb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22eebc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22eec0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22eec4: 0x8c423ed8  lw          $v0, 0x3ED8($v0)
    ctx->pc = 0x22eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3ED8u));
    // 0x22eec8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22eecc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x22eeccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x22eed0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22EED0u;
    {
        const bool branch_taken_0x22eed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EED0u;
        // 0x22eed4: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eed0) {
            ctx->pc = 0x22EF1Cu;
            goto label_22ef1c;
        }
    }
    ctx->pc = 0x22EED8u;
    // 0x22eed8: 0x2486fff0  addiu       $a2, $a0, -0x10
    ctx->pc = 0x22eed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x22eedc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22eee0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22eee4: 0x8c633ea8  lw          $v1, 0x3EA8($v1)
    ctx->pc = 0x22eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22eee8: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x22eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x22eeec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22eeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22eef0: 0xac223edc  sw          $v0, 0x3EDC($at)
    ctx->pc = 0x22eef0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EDCu, _value); } while (0);
    // 0x22eef4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22eef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22eef8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x22eef8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22eefc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ef00: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ef00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ef04: 0xac243ef4  sw          $a0, 0x3EF4($at)
    ctx->pc = 0x22ef04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B3EF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EF4u, _value); } while (0);
    // 0x22ef08: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ef08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ef0c: 0xac263ee8  sw          $a2, 0x3EE8($at)
    ctx->pc = 0x22ef0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B3EE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EE8u, _value); } while (0);
    // 0x22ef10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22EF10u;
    {
        const bool branch_taken_0x22ef10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF10u;
        // 0x22ef14: 0xaf868e3c  sw          $a2, -0x71C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef10) {
            ctx->pc = 0x22EF44u;
            goto label_22ef44;
        }
    }
    ctx->pc = 0x22EF18u;
label_22ef18:
    // 0x22ef18: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x22ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_22ef1c:
    // 0x22ef1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22ef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22ef20: 0x8c633ec8  lw          $v1, 0x3EC8($v1)
    ctx->pc = 0x22ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EC8u));
    // 0x22ef24: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x22ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x22ef28: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x22ef28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22ef2c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22EF2Cu;
    {
        const bool branch_taken_0x22ef2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF2Cu;
        // 0x22ef30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef2c) {
            ctx->pc = 0x22EF44u;
            goto label_22ef44;
        }
    }
    ctx->pc = 0x22EF34u;
    // 0x22ef34: 0xc08b848  jal         func_22E120
    ctx->pc = 0x22EF34u;
    SET_GPR_U32(ctx, 31, 0x22EF3Cu);
    ctx->pc = 0x22EF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EF34u;
    // 0x22ef38: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x22EF34u, 0x22EF3Cu)) {
        return;
    }
    ctx->pc = 0x22EF3Cu;
label_22ef3c:
    // 0x22ef3c: 0x1000fe8c  b           . + 4 + (-0x174 << 2)
    ctx->pc = 0x22EF3Cu;
    {
        const bool branch_taken_0x22ef3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF3Cu;
        // 0x22ef40: 0x8f888e84  lw          $t0, -0x717C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef3c) {
            ctx->pc = 0x22E970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e970;
        }
    }
    ctx->pc = 0x22EF44u;
label_22ef44:
    // 0x22ef44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22ef44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ef48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ef48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ef4c: 0x3e00008  jr          $ra
    ctx->pc = 0x22EF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF4Cu;
        // 0x22ef50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EF54u;
    // 0x22ef54: 0x0  nop
    ctx->pc = 0x22ef54u;
    // NOP
    ctx->pc = 0x22ef58u;
}
