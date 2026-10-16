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

// Function: sub_00178AC8
// Address: 0x178ac8 - 0x178b50
void sub_00178AC8_0x178ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178AC8_0x178ac8");
#endif

    switch (ctx->pc) {
        case 0x178b14u: goto label_178b14;
        case 0x178b20u: goto label_178b20;
        case 0x178b2cu: goto label_178b2c;
        case 0x178b34u: goto label_178b34;
        default: break;
    }

    ctx->pc = 0x178ac8u;

    // 0x178ac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x178acc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x178accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x178ad0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x178ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x178ad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178adc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x178adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ae0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x178ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x178ae4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x178ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x178ae8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x178ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x178aec: 0x68430047  ldl         $v1, 0x47($v0)
    ctx->pc = 0x178aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x178af0: 0x6c430040  ldr         $v1, 0x40($v0)
    ctx->pc = 0x178af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x178af4: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x178af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x178af8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x178af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x178afc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x178afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x178b00: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x178b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x178b04: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x178B04u;
    {
        const bool branch_taken_0x178b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x178b04) {
            ctx->pc = 0x178B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178B04u;
            // 0x178b08: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178B18u;
            goto label_178b18;
        }
    }
    ctx->pc = 0x178B0Cu;
    // 0x178b0c: 0xc094ac0  jal         func_252B00
    ctx->pc = 0x178B0Cu;
    SET_GPR_U32(ctx, 31, 0x178B14u);
    ctx->pc = 0x178B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B0Cu;
    // 0x178b10: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252B00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252B00u, 0x178B0Cu, 0x178B14u)) {
        return;
    }
    ctx->pc = 0x178B14u;
label_178b14:
    // 0x178b14: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x178b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_178b18:
    // 0x178b18: 0xc094ac0  jal         func_252B00
    ctx->pc = 0x178B18u;
    SET_GPR_U32(ctx, 31, 0x178B20u);
    ctx->pc = 0x178B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B18u;
    // 0x178b1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252B00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252B00u, 0x178B18u, 0x178B20u)) {
        return;
    }
    ctx->pc = 0x178B20u;
label_178b20:
    // 0x178b20: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x178b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x178b24: 0xc097910  jal         func_25E440
    ctx->pc = 0x178B24u;
    SET_GPR_U32(ctx, 31, 0x178B2Cu);
    ctx->pc = 0x178B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B24u;
    // 0x178b28: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E440u, 0x178B24u, 0x178B2Cu)) {
        return;
    }
    ctx->pc = 0x178B2Cu;
label_178b2c:
    // 0x178b2c: 0xc0893a2  jal         func_224E88
    ctx->pc = 0x178B2Cu;
    SET_GPR_U32(ctx, 31, 0x178B34u);
    ctx->pc = 0x178B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B2Cu;
    // 0x178b30: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x178B2Cu, 0x178B34u)) {
        return;
    }
    ctx->pc = 0x178B34u;
label_178b34:
    // 0x178b34: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x178b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178b38: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x178b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x178b3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x178b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178b40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178b44: 0x3e00008  jr          $ra
    ctx->pc = 0x178B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B44u;
        // 0x178b48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178B4Cu;
    // 0x178b4c: 0x0  nop
    ctx->pc = 0x178b4cu;
    // NOP
    ctx->pc = 0x178b50u;
}
