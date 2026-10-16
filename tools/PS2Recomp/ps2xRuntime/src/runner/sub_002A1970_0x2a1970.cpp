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

// Function: sub_002A1970
// Address: 0x2a1970 - 0x2a1e00
void sub_002A1970_0x2a1970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1970_0x2a1970");
#endif

    switch (ctx->pc) {
        case 0x2a19c0u: goto label_2a19c0;
        case 0x2a19ccu: goto label_2a19cc;
        case 0x2a19dcu: goto label_2a19dc;
        case 0x2a1adcu: goto label_2a1adc;
        case 0x2a1b24u: goto label_2a1b24;
        case 0x2a1be0u: goto label_2a1be0;
        case 0x2a1bf8u: goto label_2a1bf8;
        case 0x2a1c40u: goto label_2a1c40;
        case 0x2a1c50u: goto label_2a1c50;
        case 0x2a1c60u: goto label_2a1c60;
        case 0x2a1c6cu: goto label_2a1c6c;
        case 0x2a1c7cu: goto label_2a1c7c;
        case 0x2a1c88u: goto label_2a1c88;
        case 0x2a1c94u: goto label_2a1c94;
        case 0x2a1ca4u: goto label_2a1ca4;
        case 0x2a1cb4u: goto label_2a1cb4;
        case 0x2a1cc0u: goto label_2a1cc0;
        case 0x2a1cf8u: goto label_2a1cf8;
        default: break;
    }

    ctx->pc = 0x2a1970u;

    // 0x2a1970: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x2a1970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x2a1974: 0xffb401f0  sd          $s4, 0x1F0($sp)
    ctx->pc = 0x2a1974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 20));
    // 0x2a1978: 0xffb001b0  sd          $s0, 0x1B0($sp)
    ctx->pc = 0x2a1978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 16));
    // 0x2a197c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a197cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1980: 0xffb70220  sd          $s7, 0x220($sp)
    ctx->pc = 0x2a1980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 23));
    // 0x2a1984: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2a1984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1988: 0xffb50200  sd          $s5, 0x200($sp)
    ctx->pc = 0x2a1988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 21));
    // 0x2a198c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a198cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1990: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x2a1990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
    // 0x2a1994: 0x3c150068  lui         $s5, 0x68
    ctx->pc = 0x2a1994u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)104 << 16));
    // 0x2a1998: 0xffbe0230  sd          $fp, 0x230($sp)
    ctx->pc = 0x2a1998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 30));
    // 0x2a199c: 0xffb60210  sd          $s6, 0x210($sp)
    ctx->pc = 0x2a199cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 22));
    // 0x2a19a0: 0xffb301e0  sd          $s3, 0x1E0($sp)
    ctx->pc = 0x2a19a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 19));
    // 0x2a19a4: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x2a19a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x2a19a8: 0xffb101c0  sd          $s1, 0x1C0($sp)
    ctx->pc = 0x2a19a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 17));
    // 0x2a19ac: 0xafa50148  sw          $a1, 0x148($sp)
    ctx->pc = 0x2a19acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 5));
    // 0x2a19b0: 0xafa6014c  sw          $a2, 0x14C($sp)
    ctx->pc = 0x2a19b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 6));
    // 0x2a19b4: 0xafa70150  sw          $a3, 0x150($sp)
    ctx->pc = 0x2a19b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 7));
    // 0x2a19b8: 0xc0a7e36  jal         func_29F8D8
    ctx->pc = 0x2A19B8u;
    SET_GPR_U32(ctx, 31, 0x2A19C0u);
    ctx->pc = 0x2A19BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A19B8u;
    // 0x2a19bc: 0xafa90154  sw          $t1, 0x154($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F8D8u, 0x2A19B8u, 0x2A19C0u)) {
        return;
    }
    ctx->pc = 0x2A19C0u;
label_2a19c0:
    // 0x2a19c0: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x2a19c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x2a19c4: 0xc0a7e36  jal         func_29F8D8
    ctx->pc = 0x2A19C4u;
    SET_GPR_U32(ctx, 31, 0x2A19CCu);
    ctx->pc = 0x2A19C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A19C4u;
    // 0x2a19c8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F8D8u, 0x2A19C4u, 0x2A19CCu)) {
        return;
    }
    ctx->pc = 0x2A19CCu;
label_2a19cc:
    // 0x2a19cc: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x2a19ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x2a19d0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a19d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a19d4: 0xc0a7e36  jal         func_29F8D8
    ctx->pc = 0x2A19D4u;
    SET_GPR_U32(ctx, 31, 0x2A19DCu);
    ctx->pc = 0x2A19D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A19D4u;
    // 0x2a19d8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F8D8u, 0x2A19D4u, 0x2A19DCu)) {
        return;
    }
    ctx->pc = 0x2A19DCu;
label_2a19dc:
    // 0x2a19dc: 0x8ea52c90  lw          $a1, 0x2C90($s5)
    ctx->pc = 0x2a19dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11408)));
    // 0x2a19e0: 0xafa00194  sw          $zero, 0x194($sp)
    ctx->pc = 0x2a19e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 0));
    // 0x2a19e4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A19E4u;
    {
        const bool branch_taken_0x2a19e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19E4u;
        // 0x2a19e8: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a19e4) {
            ctx->pc = 0x2A1A08u;
            goto label_2a1a08;
        }
    }
    ctx->pc = 0x2A19ECu;
    // 0x2a19ec: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2a19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2a19f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a19f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a19f4: 0x8c447bf4  lw          $a0, 0x7BF4($v0)
    ctx->pc = 0x2a19f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x707BF4u));
    // 0x2a19f8: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x2a19f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a19fc: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x2a19fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2a1a00: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x2a1a00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x2a1a04: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2a1a04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_2a1a08:
    // 0x2a1a08: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2a1a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a1a0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a1a10: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A1A10u;
    {
        const bool branch_taken_0x2a1a10 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2a1a10) {
            ctx->pc = 0x2A1A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1A10u;
            // 0x2a1a14: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1A4Cu;
            goto label_2a1a4c;
        }
    }
    ctx->pc = 0x2A1A18u;
    // 0x2a1a18: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2a1a18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a1c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2a1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2a1a20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a1a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a1a24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a1a24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a1a28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a1a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a1a2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a30: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2a1a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2a1a34: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2a1a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2a1a38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a1a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a1a3c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x2a1a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2a1a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1a44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a1a48: 0x83a025  or          $s4, $a0, $v1
    ctx->pc = 0x2a1a48u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2a1a4c:
    // 0x2a1a4c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2a1a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a50: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2a1a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2a1a54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a1a54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a1a58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a1a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a1a5c: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A1A5Cu;
    {
        const bool branch_taken_0x2a1a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A5Cu;
        // 0x2a1a60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a5c) {
            ctx->pc = 0x2A1AD4u;
            goto label_2a1ad4;
        }
    }
    ctx->pc = 0x2A1A64u;
    // 0x2a1a64: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x2a1a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2a1a68: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x2a1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x2a1a6c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2a1a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a1a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1a74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a1a74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a1a78: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A1A78u;
    {
        const bool branch_taken_0x2a1a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A78u;
        // 0x2a1a7c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a78) {
            ctx->pc = 0x2A1AB8u;
            goto label_2a1ab8;
        }
    }
    ctx->pc = 0x2A1A80u;
    // 0x2a1a80: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2a1a80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a84: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2a1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2a1a88: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a1a88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a1a8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a1a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a1a90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a1a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a1a94: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1A94u;
    {
        const bool branch_taken_0x2a1a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A94u;
        // 0x2a1a98: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a94) {
            ctx->pc = 0x2A1ABCu;
            goto label_2a1abc;
        }
    }
    ctx->pc = 0x2A1A9Cu;
    // 0x2a1a9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a1aa0: 0x2455e170  addiu       $s5, $v0, -0x1E90
    ctx->pc = 0x2a1aa0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959472));
    // 0x2a1aa4: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x2a1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2a1aa8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A1AA8u;
    {
        const bool branch_taken_0x2a1aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AA8u;
        // 0x2a1aac: 0x8fa30154  lw          $v1, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1aa8) {
            ctx->pc = 0x2A1B0Cu;
            goto label_2a1b0c;
        }
    }
    ctx->pc = 0x2A1AB0u;
    // 0x2a1ab0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A1AB0u;
    {
        const bool branch_taken_0x2a1ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AB0u;
        // 0x2a1ab4: 0x26a20008  addiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ab0) {
            ctx->pc = 0x2A1B08u;
            goto label_2a1b08;
        }
    }
    ctx->pc = 0x2A1AB8u;
label_2a1ab8:
    // 0x2a1ab8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2a1abc:
    // 0x2a1abc: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x2a1abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2a1ac0: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A1AC0u;
    {
        const bool branch_taken_0x2a1ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AC0u;
        // 0x2a1ac4: 0x2455e180  addiu       $s5, $v0, -0x1E80 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ac0) {
            ctx->pc = 0x2A1B0Cu;
            goto label_2a1b0c;
        }
    }
    ctx->pc = 0x2A1AC8u;
    // 0x2a1ac8: 0x26a20003  addiu       $v0, $s5, 0x3
    ctx->pc = 0x2a1ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x2a1acc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A1ACCu;
    {
        const bool branch_taken_0x2a1acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1ACCu;
        // 0x2a1ad0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1acc) {
            ctx->pc = 0x2A1B0Cu;
            goto label_2a1b0c;
        }
    }
    ctx->pc = 0x2A1AD4u;
label_2a1ad4:
    // 0x2a1ad4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A1AD4u;
    SET_GPR_U32(ctx, 31, 0x2A1ADCu);
    ctx->pc = 0x2A1AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1AD4u;
    // 0x2a1ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A1AD4u, 0x2A1ADCu)) {
        return;
    }
    ctx->pc = 0x2A1ADCu;
label_2a1adc:
    // 0x2a1adc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1ADCu;
    {
        const bool branch_taken_0x2a1adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1ADCu;
        // 0x2a1ae0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1adc) {
            ctx->pc = 0x2A1B14u;
            goto label_2a1b14;
        }
    }
    ctx->pc = 0x2A1AE4u;
    // 0x2a1ae4: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x2a1ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2a1ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1aec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2a1aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2a1af0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a1af4: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x2a1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2a1af8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1AF8u;
    {
        const bool branch_taken_0x2a1af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AF8u;
        // 0x2a1afc: 0x2475e188  addiu       $s5, $v1, -0x1E78 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1af8) {
            ctx->pc = 0x2A1B0Cu;
            goto label_2a1b0c;
        }
    }
    ctx->pc = 0x2A1B00u;
    // 0x2a1b00: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x2a1b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2a1b04: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x2a1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2a1b08:
    // 0x2a1b08: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a1b0c:
    // 0x2a1b0c: 0x100003fc  b           . + 4 + (0x3FC << 2)
    ctx->pc = 0x2A1B0Cu;
    {
        const bool branch_taken_0x2a1b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B0Cu;
        // 0x2a1b10: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b0c) {
            ctx->pc = 0x2A2B00u;
            return;
        }
    }
    ctx->pc = 0x2A1B14u;
label_2a1b14:
    // 0x2a1b14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a1b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b18: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2a1b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a1b1c: 0xc0a8170  jal         func_2A05C0
    ctx->pc = 0x2A1B1Cu;
    SET_GPR_U32(ctx, 31, 0x2A1B24u);
    ctx->pc = 0x2A1B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B1Cu;
    // 0x2a1b20: 0x27a70144  addiu       $a3, $sp, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A05C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A05C0u, 0x2A1B1Cu, 0x2A1B24u)) {
        return;
    }
    ctx->pc = 0x2A1B24u;
label_2a1b24:
    // 0x2a1b24: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2a1b24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b28: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x2a1b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x2a1b2c: 0x307307ff  andi        $s3, $v1, 0x7FF
    ctx->pc = 0x2a1b2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2a1b30: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A1B30u;
    {
        const bool branch_taken_0x2a1b30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B30u;
        // 0x2a1b34: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b30) {
            ctx->pc = 0x2A1B80u;
            goto label_2a1b80;
        }
    }
    ctx->pc = 0x2A1B38u;
    // 0x2a1b38: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2a1b38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b3c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2a1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2a1b40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a1b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a1b44: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a1b44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a1b48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a1b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a1b4c: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x2a1b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x2a1b50: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a1b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a1b54: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2a1b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b58: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2a1b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2a1b5c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a1b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a1b60: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a1b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a1b64: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a1b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a1b68: 0x2673fc01  addiu       $s3, $s3, -0x3FF
    ctx->pc = 0x2a1b68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966273));
    // 0x2a1b6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a1b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a1b70: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x2a1b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x2a1b74: 0xffa20198  sd          $v0, 0x198($sp)
    ctx->pc = 0x2a1b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 2));
    // 0x2a1b78: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2A1B78u;
    {
        const bool branch_taken_0x2a1b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B78u;
        // 0x2a1b7c: 0x8fb20144  lw          $s2, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b78) {
            ctx->pc = 0x2A1C30u;
            goto label_2a1c30;
        }
    }
    ctx->pc = 0x2A1B80u;
label_2a1b80:
    // 0x2a1b80: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2a1b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a1b84: 0x8fb20144  lw          $s2, 0x144($sp)
    ctx->pc = 0x2a1b84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2a1b88: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x2a1b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a1b8c: 0x24b30432  addiu       $s3, $a1, 0x432
    ctx->pc = 0x2a1b8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1074));
    // 0x2a1b90: 0x2a620021  slti        $v0, $s3, 0x21
    ctx->pc = 0x2a1b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2a1b94: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A1B94u;
    {
        const bool branch_taken_0x2a1b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B94u;
        // 0x2a1b98: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b94) {
            ctx->pc = 0x2A1BC8u;
            goto label_2a1bc8;
        }
    }
    ctx->pc = 0x2A1B9Cu;
    // 0x2a1b9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ba0: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2a1ba0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ba4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2a1ba4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2a1ba8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a1ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a1bac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a1bacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a1bb0: 0x24a50412  addiu       $a1, $a1, 0x412
    ctx->pc = 0x2a1bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1042));
    // 0x2a1bb4: 0x131023  negu        $v0, $s3
    ctx->pc = 0x2a1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x2a1bb8: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x2a1bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2a1bbc: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x2a1bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2a1bc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1BC0u;
    {
        const bool branch_taken_0x2a1bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BC0u;
        // 0x2a1bc4: 0x838025  or          $s0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1bc0) {
            ctx->pc = 0x2A1BD8u;
            goto label_2a1bd8;
        }
    }
    ctx->pc = 0x2A1BC8u;
label_2a1bc8:
    // 0x2a1bc8: 0x131823  negu        $v1, $s3
    ctx->pc = 0x2a1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x2a1bcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a1bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1bd0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a1bd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a1bd4: 0x628004  sllv        $s0, $v0, $v1
    ctx->pc = 0x2a1bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_2a1bd8:
    // 0x2a1bd8: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x2A1BD8u;
    SET_GPR_U32(ctx, 31, 0x2A1BE0u);
    ctx->pc = 0x2A1BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1BD8u;
    // 0x2a1bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x2A1BD8u, 0x2A1BE0u)) {
        return;
    }
    ctx->pc = 0x2A1BE0u;
label_2a1be0:
    // 0x2a1be0: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1BE0u;
    {
        const bool branch_taken_0x2a1be0 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2A1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BE0u;
        // 0x2a1be4: 0xffa20198  sd          $v0, 0x198($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1be0) {
            ctx->pc = 0x2A1BFCu;
            goto label_2a1bfc;
        }
    }
    ctx->pc = 0x2A1BE8u;
    // 0x2a1be8: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x2a1be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x2a1bec: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2a1becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2a1bf0: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A1BF0u;
    SET_GPR_U32(ctx, 31, 0x2A1BF8u);
    ctx->pc = 0x2A1BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1BF0u;
    // 0x2a1bf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A1BF0u, 0x2A1BF8u)) {
        return;
    }
    ctx->pc = 0x2A1BF8u;
label_2a1bf8:
    // 0x2a1bf8: 0xffa20198  sd          $v0, 0x198($sp)
    ctx->pc = 0x2a1bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 2));
label_2a1bfc:
    // 0x2a1bfc: 0xdfa30198  ld          $v1, 0x198($sp)
    ctx->pc = 0x2a1bfcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2a1c00: 0x3c05fe10  lui         $a1, 0xFE10
    ctx->pc = 0x2a1c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65040 << 16));
    // 0x2a1c04: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2a1c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2a1c08: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a1c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a1c0c: 0x2673fbcd  addiu       $s3, $s3, -0x433
    ctx->pc = 0x2a1c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966221));
    // 0x2a1c10: 0x3103f  dsra32      $v0, $v1, 0
    ctx->pc = 0x2a1c10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a1c14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a1c18: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a1c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a1c1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a1c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1c20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a1c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1c24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a1c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a1c28: 0xafa40184  sw          $a0, 0x184($sp)
    ctx->pc = 0x2a1c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 4));
    // 0x2a1c2c: 0xffa30198  sd          $v1, 0x198($sp)
    ctx->pc = 0x2a1c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 3));
label_2a1c30:
    // 0x2a1c30: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x2a1c30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x2a1c34: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2a1c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2a1c38: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2A1C38u;
    SET_GPR_U32(ctx, 31, 0x2A1C40u);
    ctx->pc = 0x2A1C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C38u;
    // 0x2a1c3c: 0xdfa40198  ld          $a0, 0x198($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2A1C38u, 0x2A1C40u)) {
        return;
    }
    ctx->pc = 0x2A1C40u;
label_2a1c40:
    // 0x2a1c40: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2a1c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2a1c44: 0xdc25e190  ld          $a1, -0x1E70($at)
    ctx->pc = 0x2a1c44u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AE190u));
    // 0x2a1c48: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A1C48u;
    SET_GPR_U32(ctx, 31, 0x2A1C50u);
    ctx->pc = 0x2A1C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C48u;
    // 0x2a1c4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A1C48u, 0x2A1C50u)) {
        return;
    }
    ctx->pc = 0x2A1C50u;
label_2a1c50:
    // 0x2a1c50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2a1c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2a1c54: 0xdc25e198  ld          $a1, -0x1E68($at)
    ctx->pc = 0x2a1c54u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AE198u));
    // 0x2a1c58: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A1C58u;
    SET_GPR_U32(ctx, 31, 0x2A1C60u);
    ctx->pc = 0x2A1C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C58u;
    // 0x2a1c5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A1C58u, 0x2A1C60u)) {
        return;
    }
    ctx->pc = 0x2A1C60u;
label_2a1c60:
    // 0x2a1c60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a1c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c64: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x2A1C64u;
    SET_GPR_U32(ctx, 31, 0x2A1C6Cu);
    ctx->pc = 0x2A1C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C64u;
    // 0x2a1c68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x2A1C64u, 0x2A1C6Cu)) {
        return;
    }
    ctx->pc = 0x2A1C6Cu;
label_2a1c6c:
    // 0x2a1c6c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2a1c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2a1c70: 0xdc25e1a0  ld          $a1, -0x1E60($at)
    ctx->pc = 0x2a1c70u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AE1A0u));
    // 0x2a1c74: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2A1C74u;
    SET_GPR_U32(ctx, 31, 0x2A1C7Cu);
    ctx->pc = 0x2A1C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C74u;
    // 0x2a1c78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2A1C74u, 0x2A1C7Cu)) {
        return;
    }
    ctx->pc = 0x2A1C7Cu;
label_2a1c7c:
    // 0x2a1c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c80: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2A1C80u;
    SET_GPR_U32(ctx, 31, 0x2A1C88u);
    ctx->pc = 0x2A1C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C80u;
    // 0x2a1c84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2A1C80u, 0x2A1C88u)) {
        return;
    }
    ctx->pc = 0x2A1C88u;
label_2a1c88:
    // 0x2a1c88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a1c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c8c: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x2A1C8Cu;
    SET_GPR_U32(ctx, 31, 0x2A1C94u);
    ctx->pc = 0x2A1C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C8Cu;
    // 0x2a1c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x2A1C8Cu, 0x2A1C94u)) {
        return;
    }
    ctx->pc = 0x2A1C94u;
label_2a1c94:
    // 0x2a1c94: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2a1c94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a1c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c9c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A1C9Cu;
    SET_GPR_U32(ctx, 31, 0x2A1CA4u);
    ctx->pc = 0x2A1CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C9Cu;
    // 0x2a1ca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A1C9Cu, 0x2A1CA4u)) {
        return;
    }
    ctx->pc = 0x2A1CA4u;
label_2a1ca4:
    // 0x2a1ca4: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1CA4u;
    {
        const bool branch_taken_0x2a1ca4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2A1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CA4u;
        // 0x2a1ca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ca4) {
            ctx->pc = 0x2A1CCCu;
            goto label_2a1ccc;
        }
    }
    ctx->pc = 0x2A1CACu;
    // 0x2a1cac: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x2A1CACu;
    SET_GPR_U32(ctx, 31, 0x2A1CB4u);
    ctx->pc = 0x2A1CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1CACu;
    // 0x2a1cb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x2A1CACu, 0x2A1CB4u)) {
        return;
    }
    ctx->pc = 0x2A1CB4u;
label_2a1cb4:
    // 0x2a1cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a1cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1cb8: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A1CB8u;
    SET_GPR_U32(ctx, 31, 0x2A1CC0u);
    ctx->pc = 0x2A1CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1CB8u;
    // 0x2a1cbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A1CB8u, 0x2A1CC0u)) {
        return;
    }
    ctx->pc = 0x2A1CC0u;
label_2a1cc0:
    // 0x2a1cc0: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x2a1cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x2a1cc4: 0x62b00b  movn        $s6, $v1, $v0
    ctx->pc = 0x2a1cc4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3));
    // 0x2a1cc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1ccc:
    // 0x2a1ccc: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x2a1cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x2a1cd0: 0x2ec20017  sltiu       $v0, $s6, 0x17
    ctx->pc = 0x2a1cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x2a1cd4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A1CD4u;
    {
        const bool branch_taken_0x2a1cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CD4u;
        // 0x2a1cd8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1cd4) {
            ctx->pc = 0x2A1D08u;
            goto label_2a1d08;
        }
    }
    ctx->pc = 0x2A1CDCu;
    // 0x2a1cdc: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x2a1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x2a1ce0: 0x2442df90  addiu       $v0, $v0, -0x2070
    ctx->pc = 0x2a1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958992));
    // 0x2a1ce4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a1ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1cec: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x2a1cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x2a1cf0: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2A1CF0u;
    SET_GPR_U32(ctx, 31, 0x2A1CF8u);
    ctx->pc = 0x2A1CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1CF0u;
    // 0x2a1cf4: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2A1CF0u, 0x2A1CF8u)) {
        return;
    }
    ctx->pc = 0x2A1CF8u;
label_2a1cf8:
    // 0x2a1cf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a1cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1cfc: 0x26c4ffff  addiu       $a0, $s6, -0x1
    ctx->pc = 0x2a1cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x2a1d00: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2a1d00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a1d04: 0x83b00a  movz        $s6, $a0, $v1
    ctx->pc = 0x2a1d04u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4));
label_2a1d08:
    // 0x2a1d08: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x2a1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2a1d0c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2a1d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1d10: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1D10u;
    {
        const bool branch_taken_0x2a1d10 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2A1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D10u;
        // 0x2a1d14: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d10) {
            ctx->pc = 0x2A1D20u;
            goto label_2a1d20;
        }
    }
    ctx->pc = 0x2A1D18u;
    // 0x2a1d18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1D18u;
    {
        const bool branch_taken_0x2a1d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D18u;
        // 0x2a1d1c: 0xafa00158  sw          $zero, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d18) {
            ctx->pc = 0x2A1D2Cu;
            goto label_2a1d2c;
        }
    }
    ctx->pc = 0x2A1D20u;
label_2a1d20:
    // 0x2a1d20: 0x108023  negu        $s0, $s0
    ctx->pc = 0x2a1d20u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x2a1d24: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2a1d24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d28: 0xafb00158  sw          $s0, 0x158($sp)
    ctx->pc = 0x2a1d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 16));
label_2a1d2c:
    // 0x2a1d2c: 0x6c00005  bltz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1D2Cu;
    {
        const bool branch_taken_0x2a1d2c = (GPR_S64(ctx, 22) < 0);
        ctx->pc = 0x2A1D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D2Cu;
        // 0x2a1d30: 0x8fa30158  lw          $v1, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d2c) {
            ctx->pc = 0x2A1D44u;
            goto label_2a1d44;
        }
    }
    ctx->pc = 0x2A1D34u;
    // 0x2a1d34: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x2a1d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x2a1d38: 0x3d6f021  addu        $fp, $fp, $s6
    ctx->pc = 0x2a1d38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x2a1d3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1D3Cu;
    {
        const bool branch_taken_0x2a1d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D3Cu;
        // 0x2a1d40: 0xafb60178  sw          $s6, 0x178($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d3c) {
            ctx->pc = 0x2A1D58u;
            goto label_2a1d58;
        }
    }
    ctx->pc = 0x2A1D44u;
label_2a1d44:
    // 0x2a1d44: 0x162023  negu        $a0, $s6
    ctx->pc = 0x2a1d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x2a1d48: 0xafa4015c  sw          $a0, 0x15C($sp)
    ctx->pc = 0x2a1d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
    // 0x2a1d4c: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x2a1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2a1d50: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x2a1d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
    // 0x2a1d54: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x2a1d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
label_2a1d58:
    // 0x2a1d58: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x2a1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2a1d5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a1d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1d60: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x2a1d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
    // 0x2a1d64: 0x2c43000a  sltiu       $v1, $v0, 0xA
    ctx->pc = 0x2a1d64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a1d68: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2a1d68u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x2a1d6c: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x2a1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x2a1d70: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2a1d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a1d74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1D74u;
    {
        const bool branch_taken_0x2a1d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D74u;
        // 0x2a1d78: 0x8fa40148  lw          $a0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d74) {
            ctx->pc = 0x2A1D90u;
            goto label_2a1d90;
        }
    }
    ctx->pc = 0x2A1D7Cu;
    // 0x2a1d7c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x2a1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2a1d80: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x2a1d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x2a1d84: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2a1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2a1d88: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x2a1d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x2a1d8c: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x2a1d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_2a1d90:
    // 0x2a1d90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1d94: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x2a1d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a1d98: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2A1D98u;
    {
        const bool branch_taken_0x2a1d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D98u;
        // 0x2a1d9c: 0xafa30174  sw          $v1, 0x174($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d98) {
            ctx->pc = 0x2A1E20u;
            return;
        }
    }
    ctx->pc = 0x2A1DA0u;
    // 0x2a1da0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a1da4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2a1da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a1da8: 0x2442e1b0  addiu       $v0, $v0, -0x1E50
    ctx->pc = 0x2a1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959536));
    // 0x2a1dac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1db0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a1db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a1db4: 0x800008  jr          $a0
    ctx->pc = 0x2A1DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A1DBCu: goto label_2a1dbc;
            case 0x2A1DD8u: goto label_2a1dd8;
            case 0x2A1DDCu: goto label_2a1ddc;
            case 0x2A1DFCu: goto label_2a1dfc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1DB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A1DBCu;
label_2a1dbc:
    // 0x2a1dbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1dc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1dc4: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x2a1dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x2a1dc8: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x2a1dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a1dcc: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x2a1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x2a1dd0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A1DD0u;
    {
        const bool branch_taken_0x2a1dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DD0u;
        // 0x2a1dd4: 0xafa0014c  sw          $zero, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1dd0) {
            ctx->pc = 0x2A1E20u;
            return;
        }
    }
    ctx->pc = 0x2A1DD8u;
label_2a1dd8:
    // 0x2a1dd8: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x2a1dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
label_2a1ddc:
    // 0x2a1ddc: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x2a1ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2a1de0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2a1de0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1de4: 0x4102a  slt         $v0, $zero, $a0
    ctx->pc = 0x2a1de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a1de8: 0x82980b  movn        $s3, $a0, $v0
    ctx->pc = 0x2a1de8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4));
    // 0x2a1dec: 0xafb3014c  sw          $s3, 0x14C($sp)
    ctx->pc = 0x2a1decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 19));
    // 0x2a1df0: 0xafb30168  sw          $s3, 0x168($sp)
    ctx->pc = 0x2a1df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 19));
    // 0x2a1df4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A1DF4u;
    {
        const bool branch_taken_0x2a1df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DF4u;
        // 0x2a1df8: 0xafb30160  sw          $s3, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1df4) {
            ctx->pc = 0x2A1E20u;
            return;
        }
    }
    ctx->pc = 0x2A1DFCu;
label_2a1dfc:
    // 0x2a1dfc: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x2a1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
    ctx->pc = 0x2a1e00u;
}
