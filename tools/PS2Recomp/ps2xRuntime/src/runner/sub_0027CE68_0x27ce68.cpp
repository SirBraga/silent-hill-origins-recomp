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

// Function: sub_0027CE68
// Address: 0x27ce68 - 0x27d008
void sub_0027CE68_0x27ce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027CE68_0x27ce68");
#endif

    switch (ctx->pc) {
        case 0x27cec8u: goto label_27cec8;
        case 0x27cee8u: goto label_27cee8;
        case 0x27cf44u: goto label_27cf44;
        case 0x27cf4cu: goto label_27cf4c;
        case 0x27cf68u: goto label_27cf68;
        case 0x27cfa0u: goto label_27cfa0;
        case 0x27cfd8u: goto label_27cfd8;
        default: break;
    }

    ctx->pc = 0x27ce68u;

    // 0x27ce68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27ce68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27ce6c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x27ce6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x27ce70: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x27ce70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x27ce74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27ce74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce78: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x27ce78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x27ce7c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x27ce7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x27ce80: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27ce80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27ce88: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x27ce88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x27ce8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27ce90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27ce94: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27ce94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27ce98: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CE98u;
    {
        const bool branch_taken_0x27ce98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE98u;
        // 0x27ce9c: 0x24510030  addiu       $s1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce98) {
            ctx->pc = 0x27CEACu;
            goto label_27ceac;
        }
    }
    ctx->pc = 0x27CEA0u;
    // 0x27cea0: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x27cea0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x27cea4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x27cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x27cea8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x27cea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_27ceac:
    // 0x27ceac: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x27ceacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x27ceb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27ceb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ceb4: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x27ceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x27ceb8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27ceb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cebc: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x27cebcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x27cec0: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x27CEC0u;
    SET_GPR_U32(ctx, 31, 0x27CEC8u);
    ctx->pc = 0x27CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CEC0u;
    // 0x27cec4: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x27CEC0u, 0x27CEC8u)) {
        return;
    }
    ctx->pc = 0x27CEC8u;
label_27cec8:
    // 0x27cec8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x27CEC8u;
    {
        const bool branch_taken_0x27cec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEC8u;
        // 0x27cecc: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cec8) {
            ctx->pc = 0x27CF4Cu;
            goto label_27cf4c;
        }
    }
    ctx->pc = 0x27CED0u;
    // 0x27ced0: 0x2626fff4  addiu       $a2, $s1, -0xC
    ctx->pc = 0x27ced0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    // 0x27ced4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27ced4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ced8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27ced8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cedc: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x27cedcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x27cee0: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x27CEE0u;
    SET_GPR_U32(ctx, 31, 0x27CEE8u);
    ctx->pc = 0x27CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CEE0u;
    // 0x27cee4: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x27CEE0u, 0x27CEE8u)) {
        return;
    }
    ctx->pc = 0x27CEE8u;
label_27cee8:
    // 0x27cee8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27CEE8u;
    {
        const bool branch_taken_0x27cee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEE8u;
        // 0x27ceec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cee8) {
            ctx->pc = 0x27CF4Cu;
            goto label_27cf4c;
        }
    }
    ctx->pc = 0x27CEF0u;
    // 0x27cef0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x27cef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27cef4: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x27cef4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x27cef8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27cef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cefc: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x27cefcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x27cf00: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x27cf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x27cf04: 0x6a080017  ldl         $t0, 0x17($s0)
    ctx->pc = 0x27cf04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27cf08: 0x6e080010  ldr         $t0, 0x10($s0)
    ctx->pc = 0x27cf08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27cf0c: 0x8e090018  lw          $t1, 0x18($s0)
    ctx->pc = 0x27cf0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27cf10: 0xb3a8000b  sdl         $t0, 0xB($sp)
    ctx->pc = 0x27cf10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cf14: 0xb7a80004  sdr         $t0, 0x4($sp)
    ctx->pc = 0x27cf14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cf18: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x27cf18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x27cf1c: 0x6a08000b  ldl         $t0, 0xB($s0)
    ctx->pc = 0x27cf1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27cf20: 0x6e080004  ldr         $t0, 0x4($s0)
    ctx->pc = 0x27cf20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27cf24: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x27cf24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27cf28: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x27cf28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cf2c: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x27cf2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cf30: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x27cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x27cf34: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x27cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x27cf38: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x27cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x27cf3c: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x27CF3Cu;
    SET_GPR_U32(ctx, 31, 0x27CF44u);
    ctx->pc = 0x27CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF3Cu;
    // 0x27cf40: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x27CF3Cu, 0x27CF44u)) {
        return;
    }
    ctx->pc = 0x27CF44u;
label_27cf44:
    // 0x27cf44: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CF44u;
    {
        const bool branch_taken_0x27cf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cf44) {
            ctx->pc = 0x27CF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CF44u;
            // 0x27cf48: 0x9602001e  lhu         $v0, 0x1E($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CF54u;
            goto label_27cf54;
        }
    }
    ctx->pc = 0x27CF4Cu;
label_27cf4c:
    // 0x27cf4c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x27CF4Cu;
    {
        const bool branch_taken_0x27cf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF4Cu;
        // 0x27cf50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf4c) {
            ctx->pc = 0x27CFE8u;
            goto label_27cfe8;
        }
    }
    ctx->pc = 0x27CF54u;
label_27cf54:
    // 0x27cf54: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x27CF54u;
    {
        const bool branch_taken_0x27cf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf54) {
            ctx->pc = 0x27CF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CF54u;
            // 0x27cf58: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CFBCu;
            goto label_27cfbc;
        }
    }
    ctx->pc = 0x27CF5Cu;
    // 0x27cf5c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27CF5Cu;
    {
        const bool branch_taken_0x27cf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF5Cu;
        // 0x27cf60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf5c) {
            ctx->pc = 0x27CFB8u;
            goto label_27cfb8;
        }
    }
    ctx->pc = 0x27CF64u;
    // 0x27cf64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27cf64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cf68:
    // 0x27cf68: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x27cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27cf6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27cf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf70: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x27cf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27cf74: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x27cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x27cf78: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x27cf78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x27cf7c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x27cf7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x27cf80: 0x6847000f  ldl         $a3, 0xF($v0)
    ctx->pc = 0x27cf80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x27cf84: 0x6c470008  ldr         $a3, 0x8($v0)
    ctx->pc = 0x27cf84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x27cf88: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x27cf88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cf8c: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x27cf8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cf90: 0xb3a7003f  sdl         $a3, 0x3F($sp)
    ctx->pc = 0x27cf90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cf94: 0xb7a70038  sdr         $a3, 0x38($sp)
    ctx->pc = 0x27cf94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cf98: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x27CF98u;
    SET_GPR_U32(ctx, 31, 0x27CFA0u);
    ctx->pc = 0x27CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF98u;
    // 0x27cf9c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x27CF98u, 0x27CFA0u)) {
        return;
    }
    ctx->pc = 0x27CFA0u;
label_27cfa0:
    // 0x27cfa0: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x27CFA0u;
    {
        const bool branch_taken_0x27cfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFA0u;
        // 0x27cfa4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfa0) {
            ctx->pc = 0x27CF4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27cf4c;
        }
    }
    ctx->pc = 0x27CFA8u;
    // 0x27cfa8: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x27cfa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x27cfac: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x27cfacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27cfb0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x27CFB0u;
    {
        const bool branch_taken_0x27cfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFB0u;
        // 0x27cfb4: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfb0) {
            ctx->pc = 0x27CF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27cf68;
        }
    }
    ctx->pc = 0x27CFB8u;
label_27cfb8:
    // 0x27cfb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27cfbc:
    // 0x27cfbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27cfc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27CFC0u;
    {
        const bool branch_taken_0x27cfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFC0u;
        // 0x27cfc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfc0) {
            ctx->pc = 0x27CFE4u;
            goto label_27cfe4;
        }
    }
    ctx->pc = 0x27CFC8u;
    // 0x27cfc8: 0x9606001c  lhu         $a2, 0x1C($s0)
    ctx->pc = 0x27cfc8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x27cfcc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x27cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x27cfd0: 0xc09278c  jal         func_249E30
    ctx->pc = 0x27CFD0u;
    SET_GPR_U32(ctx, 31, 0x27CFD8u);
    ctx->pc = 0x27CFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CFD0u;
    // 0x27cfd4: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x27CFD0u, 0x27CFD8u)) {
        return;
    }
    ctx->pc = 0x27CFD8u;
label_27cfd8:
    // 0x27cfd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27cfd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cfdc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27CFDCu;
    {
        const bool branch_taken_0x27cfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFDCu;
        // 0x27cfe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfdc) {
            ctx->pc = 0x27CFE8u;
            goto label_27cfe8;
        }
    }
    ctx->pc = 0x27CFE4u;
label_27cfe4:
    // 0x27cfe4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27cfe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27cfe8:
    // 0x27cfe8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x27cfe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27cfec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x27cfecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27cff0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x27cff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27cff4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x27cff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27cff8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27cff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27cffc: 0x3e00008  jr          $ra
    ctx->pc = 0x27CFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFFCu;
        // 0x27d000: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D004u;
    // 0x27d004: 0x0  nop
    ctx->pc = 0x27d004u;
    // NOP
    ctx->pc = 0x27d008u;
}
