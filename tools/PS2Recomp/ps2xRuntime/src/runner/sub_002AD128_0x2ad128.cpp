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

// Function: sub_002AD128
// Address: 0x2ad128 - 0x2ad1f8
void sub_002AD128_0x2ad128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD128_0x2ad128");
#endif

    switch (ctx->pc) {
        case 0x2ad1b0u: goto label_2ad1b0;
        default: break;
    }

    ctx->pc = 0x2ad128u;

    // 0x2ad128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ad128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ad12c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ad12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ad130: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ad130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ad134: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ad134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad138: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ad138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ad13c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ad13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad140: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2AD140u;
    {
        const bool branch_taken_0x2ad140 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD140u;
        // 0x2ad144: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad140) {
            ctx->pc = 0x2AD178u;
            goto label_2ad178;
        }
    }
    ctx->pc = 0x2AD148u;
    // 0x2ad148: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x2ad148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ad14c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad150: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x2ad150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2ad154: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2ad154u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2ad158: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2ad158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2ad15c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ad15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ad160: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x2ad160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ad164: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ad164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ad168: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad16c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ad16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ad170: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2AD170u;
    {
        const bool branch_taken_0x2ad170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD170u;
        // 0x2ad174: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad170) {
            ctx->pc = 0x2AD1DCu;
            goto label_2ad1dc;
        }
    }
    ctx->pc = 0x2AD178u;
label_2ad178:
    // 0x2ad178: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x2ad178u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ad17c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ad17cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad180: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x2ad180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2ad184: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2ad184u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2ad188: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ad188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ad18c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2ad18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2ad190: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ad190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ad194: 0x922004  sllv        $a0, $s2, $a0
    ctx->pc = 0x2ad194u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x2ad198: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad19c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ad19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ad1a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD1A0u;
    {
        const bool branch_taken_0x2ad1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1A0u;
        // 0x2ad1a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad1a0) {
            ctx->pc = 0x2AD1B0u;
            goto label_2ad1b0;
        }
    }
    ctx->pc = 0x2AD1A8u;
    // 0x2ad1a8: 0xc0ab512  jal         func_2AD448
    ctx->pc = 0x2AD1A8u;
    SET_GPR_U32(ctx, 31, 0x2AD1B0u);
    ctx->pc = 0x2AD1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD1A8u;
    // 0x2ad1ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD448u, 0x2AD1A8u, 0x2AD1B0u)) {
        return;
    }
    ctx->pc = 0x2AD1B0u;
label_2ad1b0:
    // 0x2ad1b0: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x2ad1b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ad1b4: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2ad1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2ad1b8: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x2ad1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2ad1bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ad1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad1c0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2ad1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2ad1c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ad1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ad1c8: 0x721804  sllv        $v1, $s2, $v1
    ctx->pc = 0x2ad1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
    // 0x2ad1cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ad1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ad1d0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2ad1d0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2ad1d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ad1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ad1d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ad1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2ad1dc:
    // 0x2ad1dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ad1dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad1e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ad1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad1e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ad1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad1e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ad1e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1F0u;
        // 0x2ad1f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD1F8u;
}
