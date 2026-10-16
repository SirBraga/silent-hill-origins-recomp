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

// Function: sub_002B2B68
// Address: 0x2b2b68 - 0x2b2c20
void sub_002B2B68_0x2b2b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2B68_0x2b2b68");
#endif

    switch (ctx->pc) {
        case 0x2b2b88u: goto label_2b2b88;
        case 0x2b2b94u: goto label_2b2b94;
        case 0x2b2b9cu: goto label_2b2b9c;
        case 0x2b2ba8u: goto label_2b2ba8;
        case 0x2b2bb0u: goto label_2b2bb0;
        case 0x2b2bb8u: goto label_2b2bb8;
        case 0x2b2be4u: goto label_2b2be4;
        default: break;
    }

    ctx->pc = 0x2b2b68u;

    // 0x2b2b68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b2b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b2b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b2b70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b2b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b2b74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b2b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2b7c: 0xe62c0000  swc1        $f12, 0x0($s1)
    ctx->pc = 0x2b2b7cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2b2b80: 0xc0b0866  jal         func_2C2198
    ctx->pc = 0x2B2B80u;
    SET_GPR_U32(ctx, 31, 0x2B2B88u);
    ctx->pc = 0x2B2B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2B80u;
    // 0x2b2b84: 0x263000c4  addiu       $s0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C2198u, 0x2B2B80u, 0x2B2B88u)) {
        return;
    }
    ctx->pc = 0x2B2B88u;
label_2b2b88:
    // 0x2b2b88: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x2b2b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x2b2b8c: 0xc0b54e2  jal         func_2D5388
    ctx->pc = 0x2B2B8Cu;
    SET_GPR_U32(ctx, 31, 0x2B2B94u);
    ctx->pc = 0x2B2B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2B8Cu;
    // 0x2b2b90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D5388u, 0x2B2B8Cu, 0x2B2B94u)) {
        return;
    }
    ctx->pc = 0x2B2B94u;
label_2b2b94:
    // 0x2b2b94: 0xc0ac568  jal         func_2B15A0
    ctx->pc = 0x2B2B94u;
    SET_GPR_U32(ctx, 31, 0x2B2B9Cu);
    ctx->pc = 0x2B2B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2B94u;
    // 0x2b2b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B15A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B15A0u, 0x2B2B94u, 0x2B2B9Cu)) {
        return;
    }
    ctx->pc = 0x2B2B9Cu;
label_2b2b9c:
    // 0x2b2b9c: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x2b2b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x2b2ba0: 0xc0b5436  jal         func_2D50D8
    ctx->pc = 0x2B2BA0u;
    SET_GPR_U32(ctx, 31, 0x2B2BA8u);
    ctx->pc = 0x2B2BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BA0u;
    // 0x2b2ba4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D50D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D50D8u, 0x2B2BA0u, 0x2B2BA8u)) {
        return;
    }
    ctx->pc = 0x2B2BA8u;
label_2b2ba8:
    // 0x2b2ba8: 0xc0ac6e2  jal         func_2B1B88
    ctx->pc = 0x2B2BA8u;
    SET_GPR_U32(ctx, 31, 0x2B2BB0u);
    ctx->pc = 0x2B2BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BA8u;
    // 0x2b2bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B1B88u, 0x2B2BA8u, 0x2B2BB0u)) {
        return;
    }
    ctx->pc = 0x2B2BB0u;
label_2b2bb0:
    // 0x2b2bb0: 0xc0aca02  jal         func_2B2808
    ctx->pc = 0x2B2BB0u;
    SET_GPR_U32(ctx, 31, 0x2B2BB8u);
    ctx->pc = 0x2B2BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BB0u;
    // 0x2b2bb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2808u, 0x2B2BB0u, 0x2B2BB8u)) {
        return;
    }
    ctx->pc = 0x2B2BB8u;
label_2b2bb8:
    // 0x2b2bb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b2bbc: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x2b2bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x2b2bc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x2b2bc4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2b2bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2b2bc8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B2BC8u;
    {
        const bool branch_taken_0x2b2bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2BC8u;
        // 0x2b2bcc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2bc8) {
            ctx->pc = 0x2B2C00u;
            goto label_2b2c00;
        }
    }
    ctx->pc = 0x2B2BD0u;
    // 0x2b2bd0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2b2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b2bd4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x2b2bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x2b2bd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b2bd8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x2b2bdc: 0xf  sync
    ctx->pc = 0x2b2bdcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2b2be0: 0x40f  sync.p
    ctx->pc = 0x2b2be0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2b2be4:
    // 0x2b2be4: 0x0  nop
    ctx->pc = 0x2b2be4u;
    // NOP
    // 0x2b2be8: 0x0  nop
    ctx->pc = 0x2b2be8u;
    // NOP
    // 0x2b2bec: 0x0  nop
    ctx->pc = 0x2b2becu;
    // NOP
    // 0x2b2bf0: 0x0  nop
    ctx->pc = 0x2b2bf0u;
    // NOP
    // 0x2b2bf4: 0x0  nop
    ctx->pc = 0x2b2bf4u;
    // NOP
    // 0x2b2bf8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B2BF8u;
    {
        const bool branch_taken_0x2b2bf8 = (false);
        if (branch_taken_0x2b2bf8) {
            ctx->pc = 0x2B2BE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2be4;
        }
    }
    ctx->pc = 0x2B2C00u;
label_2b2c00:
    // 0x2b2c00: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b2c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b2c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2c08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b2c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2c10: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C10u;
        // 0x2b2c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2C18u;
    // 0x2b2c18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b2c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b2c1c: 0x0  nop
    ctx->pc = 0x2b2c1cu;
    // NOP
    ctx->pc = 0x2b2c20u;
}
