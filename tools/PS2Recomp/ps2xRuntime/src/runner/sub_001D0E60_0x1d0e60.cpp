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

// Function: sub_001D0E60
// Address: 0x1d0e60 - 0x1d0ee0
void sub_001D0E60_0x1d0e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0E60_0x1d0e60");
#endif

    switch (ctx->pc) {
        case 0x1d0e94u: goto label_1d0e94;
        case 0x1d0ea0u: goto label_1d0ea0;
        case 0x1d0eacu: goto label_1d0eac;
        case 0x1d0eb8u: goto label_1d0eb8;
        case 0x1d0ec4u: goto label_1d0ec4;
        case 0x1d0ed0u: goto label_1d0ed0;
        default: break;
    }

    ctx->pc = 0x1d0e60u;

    // 0x1d0e60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1d0e64: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d0e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0e6c: 0x8c4543c8  lw          $a1, 0x43C8($v0)
    ctx->pc = 0x1d0e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43C8u));
    // 0x1d0e70: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1d0e70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d0e74: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0E74u;
    {
        const bool branch_taken_0x1d0e74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E74u;
        // 0x1d0e78: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e74) {
            ctx->pc = 0x1D0E94u;
            goto label_1d0e94;
        }
    }
    ctx->pc = 0x1D0E7Cu;
    // 0x1d0e7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0e80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0E80u;
    {
        const bool branch_taken_0x1d0e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E80u;
        // 0x1d0e84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e80) {
            ctx->pc = 0x1D0E94u;
            goto label_1d0e94;
        }
    }
    ctx->pc = 0x1D0E88u;
    // 0x1d0e88: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d0e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1d0e8c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D0E8Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E94u);
    ctx->pc = 0x1D0E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E8Cu;
    // 0x1d0e90: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D0E8Cu, 0x1D0E94u)) {
        return;
    }
    ctx->pc = 0x1D0E94u;
label_1d0e94:
    // 0x1d0e94: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0e98: 0xc05fdf0  jal         func_17F7C0
    ctx->pc = 0x1D0E98u;
    SET_GPR_U32(ctx, 31, 0x1D0EA0u);
    ctx->pc = 0x1D0E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E98u;
    // 0x1d0e9c: 0x8c449a20  lw          $a0, -0x65E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F7C0u, 0x1D0E98u, 0x1D0EA0u)) {
        return;
    }
    ctx->pc = 0x1D0EA0u;
label_1d0ea0:
    // 0x1d0ea0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0ea4: 0xc05fdf4  jal         func_17F7D0
    ctx->pc = 0x1D0EA4u;
    SET_GPR_U32(ctx, 31, 0x1D0EACu);
    ctx->pc = 0x1D0EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EA4u;
    // 0x1d0ea8: 0x8c449a24  lw          $a0, -0x65DC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F7D0u, 0x1D0EA4u, 0x1D0EACu)) {
        return;
    }
    ctx->pc = 0x1D0EACu;
label_1d0eac:
    // 0x1d0eac: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0eb0: 0xc05fe08  jal         func_17F820
    ctx->pc = 0x1D0EB0u;
    SET_GPR_U32(ctx, 31, 0x1D0EB8u);
    ctx->pc = 0x1D0EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EB0u;
    // 0x1d0eb4: 0x8c449a28  lw          $a0, -0x65D8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F820u, 0x1D0EB0u, 0x1D0EB8u)) {
        return;
    }
    ctx->pc = 0x1D0EB8u;
label_1d0eb8:
    // 0x1d0eb8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0ebc: 0xc05fe10  jal         func_17F840
    ctx->pc = 0x1D0EBCu;
    SET_GPR_U32(ctx, 31, 0x1D0EC4u);
    ctx->pc = 0x1D0EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EBCu;
    // 0x1d0ec0: 0x8c449a2c  lw          $a0, -0x65D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F840u, 0x1D0EBCu, 0x1D0EC4u)) {
        return;
    }
    ctx->pc = 0x1D0EC4u;
label_1d0ec4:
    // 0x1d0ec4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0ec8: 0xc05fe1e  jal         func_17F878
    ctx->pc = 0x1D0EC8u;
    SET_GPR_U32(ctx, 31, 0x1D0ED0u);
    ctx->pc = 0x1D0ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EC8u;
    // 0x1d0ecc: 0x8c449a30  lw          $a0, -0x65D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F878u, 0x1D0EC8u, 0x1D0ED0u)) {
        return;
    }
    ctx->pc = 0x1D0ED0u;
label_1d0ed0:
    // 0x1d0ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED8u;
        // 0x1d0edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0EE0u;
}
