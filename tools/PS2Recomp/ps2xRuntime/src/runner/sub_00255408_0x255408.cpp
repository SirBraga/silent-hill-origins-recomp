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

// Function: sub_00255408
// Address: 0x255408 - 0x2554d0
void sub_00255408_0x255408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255408_0x255408");
#endif

    switch (ctx->pc) {
        case 0x255440u: goto label_255440;
        case 0x255454u: goto label_255454;
        case 0x2554a0u: goto label_2554a0;
        case 0x2554b0u: goto label_2554b0;
        default: break;
    }

    ctx->pc = 0x255408u;

    // 0x255408: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x255408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25540c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x255410: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x255410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x255414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x255414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255418: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x255418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x25541c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25541cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255424: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x255424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x255428: 0x12220021  beq         $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x255428u;
    {
        const bool branch_taken_0x255428 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x25542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255428u;
        // 0x25542c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255428) {
            ctx->pc = 0x2554B0u;
            goto label_2554b0;
        }
    }
    ctx->pc = 0x255430u;
    // 0x255430: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x255430u;
    {
        const bool branch_taken_0x255430 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x255430) {
            ctx->pc = 0x255434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255430u;
            // 0x255434: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255444u;
            goto label_255444;
        }
    }
    ctx->pc = 0x255438u;
    // 0x255438: 0xc095b02  jal         func_256C08
    ctx->pc = 0x255438u;
    SET_GPR_U32(ctx, 31, 0x255440u);
    ctx->pc = 0x25543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255438u;
    // 0x25543c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C08u, 0x255438u, 0x255440u)) {
        return;
    }
    ctx->pc = 0x255440u;
label_255440:
    // 0x255440: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x255440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_255444:
    // 0x255444: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255444u;
    {
        const bool branch_taken_0x255444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x255448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255444u;
        // 0x255448: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255444) {
            ctx->pc = 0x255458u;
            goto label_255458;
        }
    }
    ctx->pc = 0x25544Cu;
    // 0x25544c: 0xc095b08  jal         func_256C20
    ctx->pc = 0x25544Cu;
    SET_GPR_U32(ctx, 31, 0x255454u);
    ctx->pc = 0x256C20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C20u, 0x25544Cu, 0x255454u)) {
        return;
    }
    ctx->pc = 0x255454u;
label_255454:
    // 0x255454: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x255454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_255458:
    // 0x255458: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x255458u;
    {
        const bool branch_taken_0x255458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255458u;
        // 0x25545c: 0xae110018  sw          $s1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255458) {
            ctx->pc = 0x2554B0u;
            goto label_2554b0;
        }
    }
    ctx->pc = 0x255460u;
    // 0x255460: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x255460u;
    {
        const bool branch_taken_0x255460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x255460) {
            ctx->pc = 0x255464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255460u;
            // 0x255464: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255490u;
            goto label_255490;
        }
    }
    ctx->pc = 0x255468u;
    // 0x255468: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x255468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x25546c: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x25546cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x255470: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x255470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x255474: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x255474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x255478: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x255478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x25547c: 0xb2030023  sdl         $v1, 0x23($s0)
    ctx->pc = 0x25547cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x255480: 0xb603001c  sdr         $v1, 0x1C($s0)
    ctx->pc = 0x255480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x255484: 0xb204002b  sdl         $a0, 0x2B($s0)
    ctx->pc = 0x255484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x255488: 0xb6040024  sdr         $a0, 0x24($s0)
    ctx->pc = 0x255488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25548c: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x25548cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_255490:
    // 0x255490: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x255490u;
    {
        const bool branch_taken_0x255490 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x255494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255490u;
        // 0x255494: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255490) {
            ctx->pc = 0x2554B4u;
            goto label_2554b4;
        }
    }
    ctx->pc = 0x255498u;
    // 0x255498: 0xc097956  jal         func_25E558
    ctx->pc = 0x255498u;
    SET_GPR_U32(ctx, 31, 0x2554A0u);
    ctx->pc = 0x25549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255498u;
    // 0x25549c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E558u, 0x255498u, 0x2554A0u)) {
        return;
    }
    ctx->pc = 0x2554A0u;
label_2554a0:
    // 0x2554a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2554A0u;
    {
        const bool branch_taken_0x2554a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2554A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554A0u;
        // 0x2554a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2554a0) {
            ctx->pc = 0x2554B4u;
            goto label_2554b4;
        }
    }
    ctx->pc = 0x2554A8u;
    // 0x2554a8: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x2554A8u;
    SET_GPR_U32(ctx, 31, 0x2554B0u);
    ctx->pc = 0x2554ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2554A8u;
    // 0x2554ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x2554A8u, 0x2554B0u)) {
        return;
    }
    ctx->pc = 0x2554B0u;
label_2554b0:
    // 0x2554b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2554b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2554b4:
    // 0x2554b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2554b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2554b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2554b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2554bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2554bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2554c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2554c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2554c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2554C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2554C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554C4u;
        // 0x2554c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2554C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2554CCu;
    // 0x2554cc: 0x0  nop
    ctx->pc = 0x2554ccu;
    // NOP
    ctx->pc = 0x2554d0u;
}
