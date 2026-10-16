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

// Function: sub_00126878
// Address: 0x126878 - 0x1268f8
void sub_00126878_0x126878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126878_0x126878");
#endif

    switch (ctx->pc) {
        case 0x126878u: goto label_126878;
        case 0x12687cu: goto label_12687c;
        case 0x126880u: goto label_126880;
        case 0x126884u: goto label_126884;
        case 0x126888u: goto label_126888;
        case 0x12688cu: goto label_12688c;
        case 0x126890u: goto label_126890;
        case 0x126894u: goto label_126894;
        case 0x126898u: goto label_126898;
        case 0x12689cu: goto label_12689c;
        case 0x1268a0u: goto label_1268a0;
        case 0x1268a4u: goto label_1268a4;
        case 0x1268a8u: goto label_1268a8;
        case 0x1268acu: goto label_1268ac;
        case 0x1268b0u: goto label_1268b0;
        case 0x1268b4u: goto label_1268b4;
        case 0x1268b8u: goto label_1268b8;
        case 0x1268bcu: goto label_1268bc;
        case 0x1268c0u: goto label_1268c0;
        case 0x1268c4u: goto label_1268c4;
        case 0x1268c8u: goto label_1268c8;
        case 0x1268ccu: goto label_1268cc;
        case 0x1268d0u: goto label_1268d0;
        case 0x1268d4u: goto label_1268d4;
        case 0x1268d8u: goto label_1268d8;
        case 0x1268dcu: goto label_1268dc;
        case 0x1268e0u: goto label_1268e0;
        case 0x1268e4u: goto label_1268e4;
        case 0x1268e8u: goto label_1268e8;
        case 0x1268ecu: goto label_1268ec;
        case 0x1268f0u: goto label_1268f0;
        case 0x1268f4u: goto label_1268f4;
        default: break;
    }

    ctx->pc = 0x126878u;

label_126878:
    // 0x126878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12687c:
    // 0x12687c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12687cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_126880:
    // 0x126880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_126884:
    // 0x126884: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126888:
    // 0x126888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12688c:
    // 0x12688c: 0x8e020e60  lw          $v0, 0xE60($s0)
    ctx->pc = 0x12688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3680)));
label_126890:
    // 0x126890: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_126894:
    if (ctx->pc == 0x126894u) {
        ctx->pc = 0x126894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126890u;
        // 0x126894: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126898u;
        goto label_126898;
    }
    ctx->pc = 0x126890u;
    {
        const bool branch_taken_0x126890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126890u;
        // 0x126894: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126890) {
            ctx->pc = 0x1268DCu;
            goto label_1268dc;
        }
    }
    ctx->pc = 0x126898u;
label_126898:
    // 0x126898: 0xae000e60  sw          $zero, 0xE60($s0)
    ctx->pc = 0x126898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3680), GPR_U32(ctx, 0));
label_12689c:
    // 0x12689c: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x12689cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_1268a0:
    // 0x1268a0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1268a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1268a4:
    // 0x1268a4: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1268a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1268a8:
    // 0x1268a8: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1268a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1268ac:
    // 0x1268ac: 0x40f809  jalr        $v0
label_1268b0:
    if (ctx->pc == 0x1268B0u) {
        ctx->pc = 0x1268B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268ACu;
        // 0x1268b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268B4u;
        goto label_1268b4;
    }
    ctx->pc = 0x1268ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1268B4u);
        ctx->pc = 0x1268B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268ACu;
        // 0x1268b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1268ACu, 0x1268B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1268B4u;
label_1268b4:
    // 0x1268b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1268b8:
    if (ctx->pc == 0x1268B8u) {
        ctx->pc = 0x1268B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268B4u;
        // 0x1268b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268BCu;
        goto label_1268bc;
    }
    ctx->pc = 0x1268B4u;
    {
        const bool branch_taken_0x1268b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1268B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268B4u;
        // 0x1268b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268b4) {
            ctx->pc = 0x1268E0u;
            goto label_1268e0;
        }
    }
    ctx->pc = 0x1268BCu;
label_1268bc:
    // 0x1268bc: 0x6a030e77  ldl         $v1, 0xE77($s0)
    ctx->pc = 0x1268bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3703); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1268c0:
    // 0x1268c0: 0x6e030e70  ldr         $v1, 0xE70($s0)
    ctx->pc = 0x1268c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3696); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1268c4:
    // 0x1268c4: 0x8e040e78  lw          $a0, 0xE78($s0)
    ctx->pc = 0x1268c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3704)));
label_1268c8:
    // 0x1268c8: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x1268c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1268cc:
    // 0x1268cc: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x1268ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1268d0:
    // 0x1268d0: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x1268d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_1268d4:
    // 0x1268d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1268d8:
    if (ctx->pc == 0x1268D8u) {
        ctx->pc = 0x1268D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268D4u;
        // 0x1268d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268DCu;
        goto label_1268dc;
    }
    ctx->pc = 0x1268D4u;
    {
        const bool branch_taken_0x1268d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1268D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268D4u;
        // 0x1268d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268d4) {
            ctx->pc = 0x1268E0u;
            goto label_1268e0;
        }
    }
    ctx->pc = 0x1268DCu;
label_1268dc:
    // 0x1268dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1268dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1268e0:
    // 0x1268e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1268e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1268e4:
    // 0x1268e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1268e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1268e8:
    // 0x1268e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1268e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1268ec:
    // 0x1268ec: 0x3e00008  jr          $ra
label_1268f0:
    if (ctx->pc == 0x1268F0u) {
        ctx->pc = 0x1268F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268ECu;
        // 0x1268f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268F4u;
        goto label_1268f4;
    }
    ctx->pc = 0x1268ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1268F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268ECu;
        // 0x1268f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1268ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1268F4u;
label_1268f4:
    // 0x1268f4: 0x0  nop
    ctx->pc = 0x1268f4u;
    // NOP
    ctx->pc = 0x1268f8u;
}
