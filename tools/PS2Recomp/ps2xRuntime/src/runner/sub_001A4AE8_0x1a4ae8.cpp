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

// Function: sub_001A4AE8
// Address: 0x1a4ae8 - 0x1a4b50
void sub_001A4AE8_0x1a4ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4AE8_0x1a4ae8");
#endif

    switch (ctx->pc) {
        case 0x1a4b08u: goto label_1a4b08;
        default: break;
    }

    ctx->pc = 0x1a4ae8u;

    // 0x1a4ae8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a4aec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a4aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4af0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A4AF0u;
    {
        const bool branch_taken_0x1a4af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AF0u;
        // 0x1a4af4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4af0) {
            ctx->pc = 0x1A4B48u;
            goto label_1a4b48;
        }
    }
    ctx->pc = 0x1A4AF8u;
    // 0x1a4af8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a4af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a4afc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a4afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b00: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x1a4b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1a4b04: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a4b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4b08:
    // 0x1a4b08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4b0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A4B0Cu;
    {
        const bool branch_taken_0x1a4b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4b0c) {
            ctx->pc = 0x1A4B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4B0Cu;
            // 0x1a4b10: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4B3Cu;
            goto label_1a4b3c;
        }
    }
    ctx->pc = 0x1A4B14u;
    // 0x1a4b14: 0xc4400c1c  lwc1        $f0, 0xC1C($v0)
    ctx->pc = 0x1a4b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4b18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a4b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a4b1c: 0x0  nop
    ctx->pc = 0x1a4b1cu;
    // NOP
    // 0x1a4b20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4B20u;
    {
        const bool branch_taken_0x1a4b20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B20u;
        // 0x1a4b24: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b20) {
            ctx->pc = 0x1A4B38u;
            goto label_1a4b38;
        }
    }
    ctx->pc = 0x1A4B28u;
    // 0x1a4b28: 0x8c422850  lw          $v0, 0x2850($v0)
    ctx->pc = 0x1a4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10320)));
    // 0x1a4b2c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a4b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1a4b30: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x1a4b30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a4b34: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1a4b34u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
label_1a4b38:
    // 0x1a4b38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a4b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a4b3c:
    // 0x1a4b3c: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1a4b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1a4b40: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A4B40u;
    {
        const bool branch_taken_0x1a4b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B40u;
        // 0x1a4b44: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b40) {
            ctx->pc = 0x1A4B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4b08;
        }
    }
    ctx->pc = 0x1A4B48u;
label_1a4b48:
    // 0x1a4b48: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B48u;
        // 0x1a4b4c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B50u;
}
