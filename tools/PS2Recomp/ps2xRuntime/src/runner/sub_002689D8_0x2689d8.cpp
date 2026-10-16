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

// Function: sub_002689D8
// Address: 0x2689d8 - 0x2694a8
void sub_002689D8_0x2689d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002689D8_0x2689d8");
#endif

    switch (ctx->pc) {
        case 0x268a84u: goto label_268a84;
        case 0x268ab8u: goto label_268ab8;
        case 0x268ac4u: goto label_268ac4;
        case 0x268ad8u: goto label_268ad8;
        case 0x268afcu: goto label_268afc;
        case 0x268b20u: goto label_268b20;
        case 0x268b54u: goto label_268b54;
        case 0x268b68u: goto label_268b68;
        case 0x268c0cu: goto label_268c0c;
        case 0x268c1cu: goto label_268c1c;
        case 0x268c98u: goto label_268c98;
        case 0x2693a0u: goto label_2693a0;
        case 0x2693e8u: goto label_2693e8;
        case 0x2693f4u: goto label_2693f4;
        default: break;
    }

    ctx->pc = 0x2689d8u;

    // 0x2689d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2689d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2689dc: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2689dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2689e0: 0x8ce73888  lw          $a3, 0x3888($a3)
    ctx->pc = 0x2689e0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3888u));
    // 0x2689e4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2689e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2689e8: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x2689e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x2689ec: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2689ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2689f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2689f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689f4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2689f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2689f8: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2689f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x2689fc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2689fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x268a00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x268a00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a04: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x268a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x268a08: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x268a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x268a0c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x268a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x268a10: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x268a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x268a14: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x268a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x268a18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x268a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x268a1c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x268a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x268a20: 0xdc8434d0  ld          $a0, 0x34D0($a0)
    ctx->pc = 0x268a20u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x6B34D0u));
    // 0x268a24: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x268a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x268a28: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x268a28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x268a2c: 0xdd0834e8  ld          $t0, 0x34E8($t0)
    ctx->pc = 0x268a2cu;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x6B34E8u));
    // 0x268a30: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x268a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x268a34: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x268a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x268a38: 0x3c1e006b  lui         $fp, 0x6B
    ctx->pc = 0x268a38u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)107 << 16));
    // 0x268a3c: 0xdfde34c0  ld          $fp, 0x34C0($fp)
    ctx->pc = 0x268a3cu;
    SET_GPR_U64(ctx, 30, FAST_READ64(0x6B34C0u));
    // 0x268a40: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x268a40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268a44: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x268a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x268a48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x268a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268a4c: 0xdc550030  ld          $s5, 0x30($v0)
    ctx->pc = 0x268a4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x268a50: 0xdc430038  ld          $v1, 0x38($v0)
    ctx->pc = 0x268a50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x268a54: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x268a54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268a58: 0x2a63026  xor         $a2, $s5, $a2
    ctx->pc = 0x268a58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 6));
    // 0x268a5c: 0xdc560028  ld          $s6, 0x28($v0)
    ctx->pc = 0x268a5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x268a60: 0x83b825  or          $s7, $a0, $v1
    ctx->pc = 0x268a60u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x268a64: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x268a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x268a68: 0x106a80a  movz        $s5, $t0, $a2
    ctx->pc = 0x268a68u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8));
    // 0x268a6c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x268a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x268a70: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x268a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x268a74: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x268A74u;
    {
        const bool branch_taken_0x268a74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x268A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A74u;
        // 0x268a78: 0xaf8090c4  sw          $zero, -0x6F3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a74) {
            ctx->pc = 0x268AA8u;
            goto label_268aa8;
        }
    }
    ctx->pc = 0x268A7Cu;
    // 0x268a7c: 0xc091a88  jal         func_246A20
    ctx->pc = 0x268A7Cu;
    SET_GPR_U32(ctx, 31, 0x268A84u);
    ctx->pc = 0x268A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A7Cu;
    // 0x268a80: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x268A7Cu, 0x268A84u)) {
        return;
    }
    ctx->pc = 0x268A84u;
label_268a84:
    // 0x268a84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x268a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x268a88: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x268a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x268a8c: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x268a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x268a90: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x268a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x268a94: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268A94u;
    {
        const bool branch_taken_0x268a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x268A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A94u;
        // 0x268a98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a94) {
            ctx->pc = 0x268AA8u;
            goto label_268aa8;
        }
    }
    ctx->pc = 0x268A9Cu;
    // 0x268a9c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268aa0: 0xac224134  sw          $v0, 0x4134($at)
    ctx->pc = 0x268aa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4134u, _value); } while (0);
    // 0x268aa4: 0x0  nop
    ctx->pc = 0x268aa4u;
    // NOP
label_268aa8:
    // 0x268aa8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x268AA8u;
    {
        const bool branch_taken_0x268aa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x268aa8) {
            ctx->pc = 0x268AC4u;
            goto label_268ac4;
        }
    }
    ctx->pc = 0x268AB0u;
    // 0x268ab0: 0xc091a88  jal         func_246A20
    ctx->pc = 0x268AB0u;
    SET_GPR_U32(ctx, 31, 0x268AB8u);
    ctx->pc = 0x268AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268AB0u;
    // 0x268ab4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x268AB0u, 0x268AB8u)) {
        return;
    }
    ctx->pc = 0x268AB8u;
label_268ab8:
    // 0x268ab8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x268ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x268abc: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x268ABCu;
    SET_GPR_U32(ctx, 31, 0x268AC4u);
    ctx->pc = 0x268AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268ABCu;
    // 0x268ac0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x268ABCu, 0x268AC4u)) {
        return;
    }
    ctx->pc = 0x268AC4u;
label_268ac4:
    // 0x268ac4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268AC4u;
    {
        const bool branch_taken_0x268ac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x268ac4) {
            ctx->pc = 0x268AD8u;
            goto label_268ad8;
        }
    }
    ctx->pc = 0x268ACCu;
    // 0x268acc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x268accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x268ad0: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x268AD0u;
    SET_GPR_U32(ctx, 31, 0x268AD8u);
    ctx->pc = 0x268AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268AD0u;
    // 0x268ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x268AD0u, 0x268AD8u)) {
        return;
    }
    ctx->pc = 0x268AD8u;
label_268ad8:
    // 0x268ad8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x268AD8u;
    {
        const bool branch_taken_0x268ad8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x268ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AD8u;
        // 0x268adc: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ad8) {
            ctx->pc = 0x268AFCu;
            goto label_268afc;
        }
    }
    ctx->pc = 0x268AE0u;
    // 0x268ae0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x268ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x268ae4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x268ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x268ae8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x268ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x268aec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x268AECu;
    {
        const bool branch_taken_0x268aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x268aec) {
            ctx->pc = 0x268AFCu;
            goto label_268afc;
        }
    }
    ctx->pc = 0x268AF4u;
    // 0x268af4: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x268AF4u;
    SET_GPR_U32(ctx, 31, 0x268AFCu);
    ctx->pc = 0x268AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268AF4u;
    // 0x268af8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x268AF4u, 0x268AFCu)) {
        return;
    }
    ctx->pc = 0x268AFCu;
label_268afc:
    // 0x268afc: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x268AFCu;
    {
        const bool branch_taken_0x268afc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x268B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AFCu;
        // 0x268b00: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268afc) {
            ctx->pc = 0x268BC0u;
            goto label_268bc0;
        }
    }
    ctx->pc = 0x268B04u;
    // 0x268b04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x268b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x268b08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x268b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x268b0c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x268b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x268b10: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x268B10u;
    {
        const bool branch_taken_0x268b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x268B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B10u;
        // 0x268b14: 0xdf8384a0  ld          $v1, -0x7B60($gp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b10) {
            ctx->pc = 0x268B28u;
            goto label_268b28;
        }
    }
    ctx->pc = 0x268B18u;
    // 0x268b18: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x268B18u;
    SET_GPR_U32(ctx, 31, 0x268B20u);
    ctx->pc = 0x268B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B18u;
    // 0x268b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x268B18u, 0x268B20u)) {
        return;
    }
    ctx->pc = 0x268B20u;
label_268b20:
    // 0x268b20: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x268b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x268b24: 0xdc633510  ld          $v1, 0x3510($v1)
    ctx->pc = 0x268b24u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x6B3510u));
label_268b28:
    // 0x268b28: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x268b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x268b2c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x268b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x268b30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x268b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x268b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x268b38: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268b3c: 0xfc233510  sd          $v1, 0x3510($at)
    ctx->pc = 0x268b3cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x268b40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x268b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x268b44: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268b48: 0xac224138  sw          $v0, 0x4138($at)
    ctx->pc = 0x268b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
    // 0x268b4c: 0xc091de2  jal         func_247788
    ctx->pc = 0x268B4Cu;
    SET_GPR_U32(ctx, 31, 0x268B54u);
    ctx->pc = 0x268B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B4Cu;
    // 0x268b50: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x268B4Cu, 0x268B54u)) {
        return;
    }
    ctx->pc = 0x268B54u;
label_268b54:
    // 0x268b54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x268b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x268b58: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x268b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x268b5c: 0x24a534f8  addiu       $a1, $a1, 0x34F8
    ctx->pc = 0x268b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13560));
    // 0x268b60: 0xc091dec  jal         func_2477B0
    ctx->pc = 0x268B60u;
    SET_GPR_U32(ctx, 31, 0x268B68u);
    ctx->pc = 0x268B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B60u;
    // 0x268b64: 0x92060050  lbu         $a2, 0x50($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2477B0u, 0x268B60u, 0x268B68u)) {
        return;
    }
    ctx->pc = 0x268B68u;
label_268b68:
    // 0x268b68: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268b6c: 0xfc2034f0  sd          $zero, 0x34F0($at)
    ctx->pc = 0x268b6cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x268b70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x268b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x268b74: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x268b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x268b78: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x268b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x268b7c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x268b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x268b80: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x268B80u;
    {
        const bool branch_taken_0x268b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x268b80) {
            ctx->pc = 0x268B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268B80u;
            // 0x268b84: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268B98u;
            goto label_268b98;
        }
    }
    ctx->pc = 0x268B88u;
    // 0x268b88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268b8c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268b90: 0xfc2234f0  sd          $v0, 0x34F0($at)
    ctx->pc = 0x268b90u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x268b94: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x268b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_268b98:
    // 0x268b98: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x268b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x268b9c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x268b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x268ba0: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x268BA0u;
    {
        const bool branch_taken_0x268ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x268BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BA0u;
        // 0x268ba4: 0xdf828460  ld          $v0, -0x7BA0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ba0) {
            ctx->pc = 0x268BE8u;
            goto label_268be8;
        }
    }
    ctx->pc = 0x268BA8u;
    // 0x268ba8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268bac: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x268bacu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x268bb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x268bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x268bb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x268bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x268bb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x268BB8u;
    {
        const bool branch_taken_0x268bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BB8u;
        // 0x268bbc: 0xff828480  sd          $v0, -0x7B80($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268bb8) {
            ctx->pc = 0x268BE0u;
            goto label_268be0;
        }
    }
    ctx->pc = 0x268BC0u;
label_268bc0:
    // 0x268bc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268bc4: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x268bc4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x268bc8: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x268bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x268bcc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268bd0: 0xac204138  sw          $zero, 0x4138($at)
    ctx->pc = 0x268bd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
    // 0x268bd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x268bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x268bd8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268bdc: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x268bdcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
label_268be0:
    // 0x268be0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268be4: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x268be4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
label_268be8:
    // 0x268be8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x268be8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268bec: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x268becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x268bf0: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x268BF0u;
    {
        const bool branch_taken_0x268bf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x268BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BF0u;
        // 0x268bf4: 0xff828460  sd          $v0, -0x7BA0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268bf0) {
            ctx->pc = 0x268C48u;
            goto label_268c48;
        }
    }
    ctx->pc = 0x268BF8u;
    // 0x268bf8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x268bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x268bfc: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x268bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x268c00: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x268c00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x268c04: 0xc091de2  jal         func_247788
    ctx->pc = 0x268C04u;
    SET_GPR_U32(ctx, 31, 0x268C0Cu);
    ctx->pc = 0x268C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268C04u;
    // 0x268c08: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x268C04u, 0x268C0Cu)) {
        return;
    }
    ctx->pc = 0x268C0Cu;
label_268c0c:
    // 0x268c0c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x268c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x268c10: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x268c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x268c14: 0xc091dec  jal         func_2477B0
    ctx->pc = 0x268C14u;
    SET_GPR_U32(ctx, 31, 0x268C1Cu);
    ctx->pc = 0x268C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268C14u;
    // 0x268c18: 0x92260050  lbu         $a2, 0x50($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2477B0u, 0x268C14u, 0x268C1Cu)) {
        return;
    }
    ctx->pc = 0x268C1Cu;
label_268c1c:
    // 0x268c1c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x268c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x268c20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x268c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x268c24: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x268c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x268c28: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x268c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x268c2c: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x268c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x268c30: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x268c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x268c34: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x268c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x268c38: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268C38u;
    {
        const bool branch_taken_0x268c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x268C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C38u;
        // 0x268c3c: 0x2a00b  movn        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c38) {
            ctx->pc = 0x268C48u;
            goto label_268c48;
        }
    }
    ctx->pc = 0x268C40u;
    // 0x268c40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x268c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x268c44: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x268c44u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_268c48:
    // 0x268c48: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x268C48u;
    {
        const bool branch_taken_0x268c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C48u;
        // 0x268c4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c48) {
            ctx->pc = 0x268C90u;
            goto label_268c90;
        }
    }
    ctx->pc = 0x268C50u;
    // 0x268c50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x268c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x268c54: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x268c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x268c58: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x268c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x268c5c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x268C5Cu;
    {
        const bool branch_taken_0x268c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268c5c) {
            ctx->pc = 0x268C90u;
            goto label_268c90;
        }
    }
    ctx->pc = 0x268C64u;
    // 0x268c64: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x268C64u;
    {
        const bool branch_taken_0x268c64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x268c64) {
            ctx->pc = 0x268C90u;
            goto label_268c90;
        }
    }
    ctx->pc = 0x268C6Cu;
    // 0x268c6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x268c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x268c70: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x268c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x268c74: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x268c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x268c78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268C78u;
    {
        const bool branch_taken_0x268c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268c78) {
            ctx->pc = 0x268C90u;
            goto label_268c90;
        }
    }
    ctx->pc = 0x268C80u;
    // 0x268c80: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x268c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x268c84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x268c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x268c88: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268c8c: 0xac224138  sw          $v0, 0x4138($at)
    ctx->pc = 0x268c8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
label_268c90:
    // 0x268c90: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x268C90u;
    SET_GPR_U32(ctx, 31, 0x268C98u);
    ctx->pc = 0x268C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268C90u;
    // 0x268c94: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x268C90u, 0x268C98u)) {
        return;
    }
    ctx->pc = 0x268C98u;
label_268c98:
    // 0x268c98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x268c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x268c9c: 0x3463001e  ori         $v1, $v1, 0x1E
    ctx->pc = 0x268c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30);
    // 0x268ca0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x268ca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ca4: 0x71231b89  pcpyld      $v1, $t1, $v1
    ctx->pc = 0x268ca4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x268ca8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x268ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x268cac: 0x8ca5412c  lw          $a1, 0x412C($a1)
    ctx->pc = 0x268cacu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x268cb0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x268cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x268cb4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x268cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x268cb8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268cbc: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x268cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268cc0: 0x3c026c07  lui         $v0, 0x6C07
    ctx->pc = 0x268cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27655 << 16));
    // 0x268cc4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x268cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x268cc8: 0x344203bc  ori         $v0, $v0, 0x3BC
    ctx->pc = 0x268cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)956);
    // 0x268ccc: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x268cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x268cd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268cd4: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x268cd4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x268cd8: 0x70c61cc8  ppacw       $v1, $a2, $a2
    ctx->pc = 0x268cd8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x268cdc: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x268cdcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x268ce0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x268ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x268ce4: 0x92630029  lbu         $v1, 0x29($s3)
    ctx->pc = 0x268ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x268ce8: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x268ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x268cec: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x268cecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
    // 0x268cf0: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x268cf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x268cf4: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x268cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x268cf8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x268cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x268cfc: 0x24070412  addiu       $a3, $zero, 0x412
    ctx->pc = 0x268cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x268d00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x268d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x268d04: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x268d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x268d08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x268d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x268d0c: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x268d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x268d10: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x268d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x268d14: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x268d14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x268d18: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x268d18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x268d1c: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x268d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x268d20: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x268d20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x268d24: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x268d24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x268d28: 0x35088002  ori         $t0, $t0, 0x8002
    ctx->pc = 0x268d28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32770);
    // 0x268d2c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x268d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x268d30: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x268d30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x268d34: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x268d34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x268d38: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x268d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x268d3c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x268d3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268d40: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x268d40u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x268d44: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x268d44u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x268d48: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x268d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x268d4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268d50: 0xdc4234e8  ld          $v0, 0x34E8($v0)
    ctx->pc = 0x268d50u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34E8u));
    // 0x268d54: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x268d54u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x268d58: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x268d58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x268d5c: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x268d5cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x268d60: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x268d60u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x268d64: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x268d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x268d68: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x268d68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x268d6c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x268d6cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x268d70: 0x7ca20060  sq          $v0, 0x60($a1)
    ctx->pc = 0x268d70u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 2));
    // 0x268d74: 0x70951389  pcpyld      $v0, $a0, $s5
    ctx->pc = 0x268d74u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 21)));
    // 0x268d78: 0x7ca20070  sq          $v0, 0x70($a1)
    ctx->pc = 0x268d78u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 2));
    // 0x268d7c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x268d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x268d80: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x268d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x268d84: 0x70c61cc8  ppacw       $v1, $a2, $a2
    ctx->pc = 0x268d84u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x268d88: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x268d88u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x268d8c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x268d8cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x268d90: 0x7ca20080  sq          $v0, 0x80($a1)
    ctx->pc = 0x268d90u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 2));
    // 0x268d94: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x268d94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x268d98: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x268d98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x268d9c: 0x35088005  ori         $t0, $t0, 0x8005
    ctx->pc = 0x268d9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32773);
    // 0x268da0: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x268da0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x268da4: 0x7ca20090  sq          $v0, 0x90($a1)
    ctx->pc = 0x268da4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 144), GPR_VEC(ctx, 2));
    // 0x268da8: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x268da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x268dac: 0x70561389  pcpyld      $v0, $v0, $s6
    ctx->pc = 0x268dacu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 22)));
    // 0x268db0: 0x7ca200a0  sq          $v0, 0xA0($a1)
    ctx->pc = 0x268db0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 160), GPR_VEC(ctx, 2));
    // 0x268db4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x268db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x268db8: 0x70541389  pcpyld      $v0, $v0, $s4
    ctx->pc = 0x268db8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 20)));
    // 0x268dbc: 0x7ca200b0  sq          $v0, 0xB0($a1)
    ctx->pc = 0x268dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 176), GPR_VEC(ctx, 2));
    // 0x268dc0: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x268dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x268dc4: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x268dc4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x268dc8: 0x7ca200c0  sq          $v0, 0xC0($a1)
    ctx->pc = 0x268dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 192), GPR_VEC(ctx, 2));
    // 0x268dcc: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x268dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x268dd0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x268dd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268dd4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x268dd4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x268dd8: 0x7ca200d0  sq          $v0, 0xD0($a1)
    ctx->pc = 0x268dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 208), GPR_VEC(ctx, 2));
    // 0x268ddc: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x268ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x268de0: 0x705e1389  pcpyld      $v0, $v0, $fp
    ctx->pc = 0x268de0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 30)));
    // 0x268de4: 0x7ca200e0  sq          $v0, 0xE0($a1)
    ctx->pc = 0x268de4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 224), GPR_VEC(ctx, 2));
    // 0x268de8: 0x24a200f0  addiu       $v0, $a1, 0xF0
    ctx->pc = 0x268de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    // 0x268dec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268df0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x268df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268df4: 0x3404d802  ori         $a0, $zero, 0xD802
    ctx->pc = 0x268df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x268df8: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x268df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x268dfc: 0x3484fe80  ori         $a0, $a0, 0xFE80
    ctx->pc = 0x268dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65152);
    // 0x268e00: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x268e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x268e04: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x268e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x268e08: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x268e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x268e0c: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x268e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x268e10: 0x70892389  pcpyld      $a0, $a0, $t1
    ctx->pc = 0x268e10u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x268e14: 0x7ca400f0  sq          $a0, 0xF0($a1)
    ctx->pc = 0x268e14u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 240), GPR_VEC(ctx, 4));
    // 0x268e18: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x268e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x268e1c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268e20: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x268e20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268e24: 0x92620047  lbu         $v0, 0x47($s3)
    ctx->pc = 0x268e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x268e28: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x268e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x268e2c: 0x8c634134  lw          $v1, 0x4134($v1)
    ctx->pc = 0x268e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4134u));
    // 0x268e30: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x268e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x268e34: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x268e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x268e38: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x268e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x268e3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x268E3Cu;
    {
        const bool branch_taken_0x268e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E3Cu;
        // 0x268e40: 0xaf8290cc  sw          $v0, -0x6F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e3c) {
            ctx->pc = 0x268E58u;
            goto label_268e58;
        }
    }
    ctx->pc = 0x268E44u;
    // 0x268e44: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268e48: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x268e48u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x268e4c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x268e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x268e50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x268E50u;
    {
        const bool branch_taken_0x268e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E50u;
        // 0x268e54: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e50) {
            ctx->pc = 0x268E68u;
            goto label_268e68;
        }
    }
    ctx->pc = 0x268E58u;
label_268e58:
    // 0x268e58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268e5c: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x268e5cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x268e60: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x268e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x268e64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x268e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_268e68:
    // 0x268e68: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268e6c: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x268e6cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x268e70: 0x92660029  lbu         $a2, 0x29($s3)
    ctx->pc = 0x268e70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x268e74: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x268e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x268e78: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268e7c: 0x8c423510  lw          $v0, 0x3510($v0)
    ctx->pc = 0x268e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3510u));
    // 0x268e80: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x268e80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x268e84: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x268e84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x268e88: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x268e88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x268e8c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x268e8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x268e90: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x268e90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x268e94: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x268e94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x268e98: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x268e98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x268e9c: 0xdc640f90  ld          $a0, 0xF90($v1)
    ctx->pc = 0x268e9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3984)));
    // 0x268ea0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x268ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x268ea4: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x268ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x268ea8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x268ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x268eac: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x268eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x268eb0: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x268eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x268eb4: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x268eb4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x268eb8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x268eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x268ebc: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x268ebcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x268ec0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x268ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x268ec4: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x268ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x268ec8: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x268ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x268ecc: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x268eccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x268ed0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x268ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x268ed4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268ed8: 0xac26412c  sw          $a2, 0x412C($at)
    ctx->pc = 0x268ed8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268edc: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x268edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x268ee0: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x268ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x268ee4: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x268ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x268ee8: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x268ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x268eec: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x268eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x268ef0: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x268ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x268ef4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x268ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x268ef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x268ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268efc: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x268efcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x268f00: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x268f00u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x268f04: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x268f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x268f08: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268f0c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x268f0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268f10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x268f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x268f14: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x268f14u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x268f18: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x268f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x268f1c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x268f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x268f20: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x268f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x268f24: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x268f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x268f28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268F28u;
    {
        const bool branch_taken_0x268f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F28u;
        // 0x268f2c: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f28) {
            ctx->pc = 0x268F40u;
            goto label_268f40;
        }
    }
    ctx->pc = 0x268F30u;
    // 0x268f30: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x268f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x268f34: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x268f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x268f38: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x268f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x268f3c: 0x0  nop
    ctx->pc = 0x268f3cu;
    // NOP
label_268f40:
    // 0x268f40: 0x92630045  lbu         $v1, 0x45($s3)
    ctx->pc = 0x268f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
    // 0x268f44: 0x92640046  lbu         $a0, 0x46($s3)
    ctx->pc = 0x268f44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x268f48: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x268f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x268f4c: 0x0  nop
    ctx->pc = 0x268f4cu;
    // NOP
    // 0x268f50: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x268f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x268f54: 0x92650047  lbu         $a1, 0x47($s3)
    ctx->pc = 0x268f54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x268f58: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x268f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x268f5c: 0x0  nop
    ctx->pc = 0x268f5cu;
    // NOP
    // 0x268f60: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x268f60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x268f64: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x268f64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x268f68: 0x0  nop
    ctx->pc = 0x268f68u;
    // NOP
    // 0x268f6c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x268f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x268f70: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x268f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x268f74: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x268f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x268f78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x268f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268f7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x268f7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268f80: 0x0  nop
    ctx->pc = 0x268f80u;
    // NOP
    // 0x268f84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x268f84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x268f88: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x268f88u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268f8c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x268f8cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x268f90: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x268f90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x268f94: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x268f94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x268f98: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x268f98u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x268f9c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x268f9cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x268fa0: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x268fa0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x268fa4: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x268fa4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x268fa8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x268fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x268fac: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x268facu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x268fb0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x268fb0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x268fb4: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x268fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x268fb8: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x268fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x268fbc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268fc0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x268fc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268fc4: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x268fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x268fc8: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x268fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x268fcc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x268fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x268fd0: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x268fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x268fd4: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x268fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x268fd8: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x268fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x268fdc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x268fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x268fe0: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x268fe0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x268fe4: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x268fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x268fe8: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x268fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x268fec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x268fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x268ff0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x268ff0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x268ff4: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x268ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x268ff8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x268ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x268ffc: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x268ffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x269000: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x269000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x269004: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x269004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269008: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x269008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26900c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269010: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x269010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269014: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x269014u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x269018: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x269018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26901c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x26901cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x269020: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x269020u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x269024: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x269024u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x269028: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x269028u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x26902c: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x26902cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x269030: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x269030u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x269034: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x269034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x269038: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x269038u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26903c: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x26903cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x269040: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x269040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x269044: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269048: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x269048u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26904c: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x26904cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x269050: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x269050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x269054: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x269054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x269058: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x269058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x26905c: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x26905cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x269060: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x269060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x269064: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x269064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x269068: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x269068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x26906c: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x26906cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x269070: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x269070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x269074: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x269074u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x269078: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x269078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x26907c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26907cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269080: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269080u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269084: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x269084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x269088: 0x8c633560  lw          $v1, 0x3560($v1)
    ctx->pc = 0x269088u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3560u));
    // 0x26908c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26908Cu;
    {
        const bool branch_taken_0x26908c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x269090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26908Cu;
        // 0x269090: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26908c) {
            ctx->pc = 0x2690A0u;
            goto label_2690a0;
        }
    }
    ctx->pc = 0x269094u;
    // 0x269094: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x269094u;
    {
        const bool branch_taken_0x269094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269094) {
            ctx->pc = 0x269098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269094u;
            // 0x269098: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2690C0u;
            goto label_2690c0;
        }
    }
    ctx->pc = 0x26909Cu;
    // 0x26909c: 0x0  nop
    ctx->pc = 0x26909cu;
    // NOP
label_2690a0:
    // 0x2690a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2690a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2690a4: 0x8c423564  lw          $v0, 0x3564($v0)
    ctx->pc = 0x2690a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3564u));
    // 0x2690a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2690A8u;
    {
        const bool branch_taken_0x2690a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2690ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690A8u;
        // 0x2690ac: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690a8) {
            ctx->pc = 0x2690F0u;
            goto label_2690f0;
        }
    }
    ctx->pc = 0x2690B0u;
    // 0x2690b0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2690B0u;
    {
        const bool branch_taken_0x2690b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2690b0) {
            ctx->pc = 0x2690B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2690B0u;
            // 0x2690b4: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2690F8u;
            goto label_2690f8;
        }
    }
    ctx->pc = 0x2690B8u;
    // 0x2690b8: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x2690b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x2690bc: 0x0  nop
    ctx->pc = 0x2690bcu;
    // NOP
label_2690c0:
    // 0x2690c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2690c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2690c4: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x2690c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2690c8: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2690c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2690cc: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x2690ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x2690d0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2690d0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1030u));
    // 0x2690d4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2690d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2690d8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2690d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2690dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2690dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2690e0: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x2690e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2690e4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2690e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2690e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2690E8u;
    {
        const bool branch_taken_0x2690e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2690ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690E8u;
        // 0x2690ec: 0x24631040  addiu       $v1, $v1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690e8) {
            ctx->pc = 0x269120u;
            goto label_269120;
        }
    }
    ctx->pc = 0x2690F0u;
label_2690f0:
    // 0x2690f0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2690f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2690f4: 0x0  nop
    ctx->pc = 0x2690f4u;
    // NOP
label_2690f8:
    // 0x2690f8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2690f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2690fc: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x2690fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x269100: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x269100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
    // 0x269104: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x269104u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269108: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x269108u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26910c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x26910cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269110: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269114: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x269114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269118: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x269118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26911c: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x26911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
label_269120:
    // 0x269120: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x269120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269124: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x269124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269128: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x269128u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26912c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26912cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269130: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x269130u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269134: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x269134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x269138: 0x8c634140  lw          $v1, 0x4140($v1)
    ctx->pc = 0x269138u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4140u));
    // 0x26913c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x269140: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269140u;
    {
        const bool branch_taken_0x269140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x269144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269140u;
        // 0x269144: 0xaf8084e8  sw          $zero, -0x7B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269140) {
            ctx->pc = 0x269154u;
            goto label_269154;
        }
    }
    ctx->pc = 0x269148u;
    // 0x269148: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x269148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26914c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26914cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269150: 0xac223558  sw          $v0, 0x3558($at)
    ctx->pc = 0x269150u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3558u, _value); } while (0);
label_269154:
    // 0x269154: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269158: 0x9c42355c  lwu         $v0, 0x355C($v0)
    ctx->pc = 0x269158u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x6B355Cu));
    // 0x26915c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x26915cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x269160: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x269160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x269164: 0x9c843558  lwu         $a0, 0x3558($a0)
    ctx->pc = 0x269164u;
    SET_GPR_ZE32(ctx, 4, FAST_READ32(0x6B3558u));
    // 0x269168: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x269168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26916c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x269170: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x269170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x269174: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x269174u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x269178: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x269178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26917c: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26917cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x269180: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x269180u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x269184: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x269184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269188: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26918c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26918cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269190: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x269190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x269194: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x269194u;
    {
        const bool branch_taken_0x269194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269194u;
        // 0x269198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269194) {
            ctx->pc = 0x269238u;
            goto label_269238;
        }
    }
    ctx->pc = 0x26919Cu;
    // 0x26919c: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x26919cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2691a0: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x2691a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x2691a4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2691a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2691a8: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x2691a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x2691ac: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x2691acu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2691b0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2691b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2691b4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2691b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2691b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2691b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2691bc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2691bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2691c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2691c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2691c4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2691c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2691c8: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x2691c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x2691cc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2691ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2691d0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x2691d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2691d4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2691d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2691d8: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2691d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2691dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2691dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2691e0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2691e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2691e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2691e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2691e8: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x2691e8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x2691ec: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x2691ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2691f0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x2691f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2691f4: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2691f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2691f8: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x2691f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2691fc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2691fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269200: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269200u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269204: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269208: 0xdc4234f8  ld          $v0, 0x34F8($v0)
    ctx->pc = 0x269208u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F8u));
    // 0x26920c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x26920cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x269210: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x269210u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269214: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x269214u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x269218: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x269218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26921c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26921cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269220: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269224: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269228: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x269228u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x26922c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26922Cu;
    {
        const bool branch_taken_0x26922c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26922Cu;
        // 0x269230: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26922c) {
            ctx->pc = 0x2692B8u;
            goto label_2692b8;
        }
    }
    ctx->pc = 0x269234u;
    // 0x269234: 0x0  nop
    ctx->pc = 0x269234u;
    // NOP
label_269238:
    // 0x269238: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x269238u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26923c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26923cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x269240: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x269240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269244: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269248: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269248u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26924c: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x26924cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269250: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x269250u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x269254: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x269254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x269258: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26925c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26925cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269260: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x269260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x269264: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x269264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x269268: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x269268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x26926c: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x26926cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x269270: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269274: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x269274u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269278: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x269278u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x26927c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x26927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x269280: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269284: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269284u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269288: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x269288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26928c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x26928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x269290: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x269290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x269294: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x269294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x269298: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x269298u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26929c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x26929cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2692a0: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2692a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2692a4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2692a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2692a8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2692a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2692ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2692acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2692b0: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x2692b0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x2692b4: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x2692b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_2692b8:
    // 0x2692b8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x2692b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2692bc: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x2692bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x2692c0: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x2692c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2692c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2692c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2692c8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2692c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2692cc: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x2692ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2692d0: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x2692d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2692d4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2692d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2692d8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2692d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2692dc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2692dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2692e0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2692e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2692e4: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x2692e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2692e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2692e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2692ec: 0xa262002b  sb          $v0, 0x2B($s3)
    ctx->pc = 0x2692ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x2692f0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2692f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2692f4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2692f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2692f8: 0x8ca53554  lw          $a1, 0x3554($a1)
    ctx->pc = 0x2692f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3554u));
    // 0x2692fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2692fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269300: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x269300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x269304: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x269304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x269308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26930c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x26930cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269310: 0x10a6000d  beq         $a1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x269310u;
    {
        const bool branch_taken_0x269310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x269314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269310u;
        // 0x269314: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269310) {
            ctx->pc = 0x269348u;
            goto label_269348;
        }
    }
    ctx->pc = 0x269318u;
    // 0x269318: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x269318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x26931c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26931cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x269320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269324: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x269324u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x269328: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x269328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26932c: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x26932cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x269330: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x269330u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x269334: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x269334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x269338: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26933c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26933cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269340: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269344: 0xac263554  sw          $a2, 0x3554($at)
    ctx->pc = 0x269344u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B3554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3554u, _value); } while (0);
label_269348:
    // 0x269348: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x269348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x26934c: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x26934cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x269350: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x269350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x269354: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x269354u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x269358: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x269358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26935c: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x26935cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x269360: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x269360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x269364: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x269364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x269368: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x269368u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x26936c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x26936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x269370: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x269370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x269374: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x269374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x269378: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x269378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26937c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x26937cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x269380: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x269380u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x269384: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x269384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x269388: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x269388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26938c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26938cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x269390: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x269390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x269394: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269398: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x269398u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26939c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26939cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2693a0:
    // 0x2693a0: 0x42000039  di
    ctx->pc = 0x2693a0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2693a4: 0x40f  sync.p
    ctx->pc = 0x2693a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2693a8: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x2693a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x2693ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2693acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2693b0: 0x0  nop
    ctx->pc = 0x2693b0u;
    // NOP
    // 0x2693b4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2693B4u;
    {
        const bool branch_taken_0x2693b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2693b4) {
            ctx->pc = 0x2693A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2693a0;
        }
    }
    ctx->pc = 0x2693BCu;
    // 0x2693bc: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x2693bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2693c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2693c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2693c4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x2693c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x2693c8: 0x42000038  ei
    ctx->pc = 0x2693c8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2693cc: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x2693ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2693d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2693d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2693d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2693d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2693d8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2693D8u;
    {
        const bool branch_taken_0x2693d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2693DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693D8u;
        // 0x2693dc: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693d8) {
            ctx->pc = 0x2693E8u;
            goto label_2693e8;
        }
    }
    ctx->pc = 0x2693E0u;
    // 0x2693e0: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x2693E0u;
    SET_GPR_U32(ctx, 31, 0x2693E8u);
    ctx->pc = 0x2693E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2693E0u;
    // 0x2693e4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x2693E0u, 0x2693E8u)) {
        return;
    }
    ctx->pc = 0x2693E8u;
label_2693e8:
    // 0x2693e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2693e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2693ec: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x2693ECu;
    SET_GPR_U32(ctx, 31, 0x2693F4u);
    ctx->pc = 0x2693F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2693ECu;
    // 0x2693f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x2693ECu, 0x2693F4u)) {
        return;
    }
    ctx->pc = 0x2693F4u;
label_2693f4:
    // 0x2693f4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x2693f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x2693f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2693f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2693fc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2693fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x269400: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x269400u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269404: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x269404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x269408: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x269408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x26940c: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x26940cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x269410: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x269410u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269414: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x269414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x269418: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x269418u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26941c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x26941cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x269420: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x269420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269424: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269428: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x269428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26942c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x26942cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x269430: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x269430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x269434: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x269434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x269438: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x269438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26943c: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x26943cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x269440: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x269440u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x269444: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x269444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269448: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26944c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26944cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269450: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x269450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x269454: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269458: 0xdc4234e8  ld          $v0, 0x34E8($v0)
    ctx->pc = 0x269458u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34E8u));
    // 0x26945c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26945cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269460: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x269460u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x269464: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x269464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x269468: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26946c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26946cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269474: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x269474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x269478: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x269478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26947c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x26947cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x269480: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x269480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x269484: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x269484u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x269488: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x269488u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26948c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x26948cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x269490: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x269490u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269494: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x269494u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269498: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x269498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26949c: 0x3e00008  jr          $ra
    ctx->pc = 0x26949Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2694A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26949Cu;
        // 0x2694a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26949Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2694A4u;
    // 0x2694a4: 0x0  nop
    ctx->pc = 0x2694a4u;
    // NOP
    ctx->pc = 0x2694a8u;
}
