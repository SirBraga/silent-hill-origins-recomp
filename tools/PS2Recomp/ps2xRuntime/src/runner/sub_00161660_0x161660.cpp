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

// Function: sub_00161660
// Address: 0x161660 - 0x161700
void sub_00161660_0x161660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161660_0x161660");
#endif

    switch (ctx->pc) {
        case 0x161690u: goto label_161690;
        case 0x1616c0u: goto label_1616c0;
        default: break;
    }

    ctx->pc = 0x161660u;

    // 0x161660: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x161660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x161664: 0x8c62864c  lw          $v0, -0x79B4($v1)
    ctx->pc = 0x161664u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33864Cu));
    // 0x161668: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x161668u;
    {
        const bool branch_taken_0x161668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161668u;
        // 0x16166c: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161668) {
            ctx->pc = 0x1616F8u;
            goto label_1616f8;
        }
    }
    ctx->pc = 0x161670u;
    // 0x161670: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x161670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x161674: 0x8c458648  lw          $a1, -0x79B8($v0)
    ctx->pc = 0x161674u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338648u));
    // 0x161678: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x161678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16167c: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x16167Cu;
    {
        const bool branch_taken_0x16167c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x161680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16167Cu;
        // 0x161680: 0xac408648  sw          $zero, -0x79B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16167c) {
            ctx->pc = 0x1616F4u;
            goto label_1616f4;
        }
    }
    ctx->pc = 0x161684u;
    // 0x161684: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x161684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161688: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x161688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16168c: 0x0  nop
    ctx->pc = 0x16168cu;
    // NOP
label_161690:
    // 0x161690: 0x8ce28648  lw          $v0, -0x79B8($a3)
    ctx->pc = 0x161690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294936136)));
    // 0x161694: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x161694u;
    {
        const bool branch_taken_0x161694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161694u;
        // 0x161698: 0x8ca500b4  lw          $a1, 0xB4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161694) {
            ctx->pc = 0x1616B4u;
            goto label_1616b4;
        }
    }
    ctx->pc = 0x16169Cu;
    // 0x16169c: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x16169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1616a0: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x1616a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1616a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1616a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1616a8: 0x0  nop
    ctx->pc = 0x1616a8u;
    // NOP
    // 0x1616ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1616ACu;
    {
        const bool branch_taken_0x1616ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1616B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616ACu;
        // 0x1616b0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616ac) {
            ctx->pc = 0x1616C0u;
            goto label_1616c0;
        }
    }
    ctx->pc = 0x1616B4u;
label_1616b4:
    // 0x1616b4: 0xac8200b4  sw          $v0, 0xB4($a0)
    ctx->pc = 0x1616b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
    // 0x1616b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1616B8u;
    {
        const bool branch_taken_0x1616b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1616BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616B8u;
        // 0x1616bc: 0xacc48648  sw          $a0, -0x79B8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294936136), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616b8) {
            ctx->pc = 0x1616ECu;
            goto label_1616ec;
        }
    }
    ctx->pc = 0x1616C0u;
label_1616c0:
    // 0x1616c0: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1616c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1616c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1616C4u;
    {
        const bool branch_taken_0x1616c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1616c4) {
            ctx->pc = 0x1616C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1616C4u;
            // 0x1616c8: 0xac8200b4  sw          $v0, 0xB4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1616E8u;
            goto label_1616e8;
        }
    }
    ctx->pc = 0x1616CCu;
    // 0x1616cc: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x1616ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1616d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1616d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1616d4: 0x0  nop
    ctx->pc = 0x1616d4u;
    // NOP
    // 0x1616d8: 0x4503fff9  bc1tl       . + 4 + (-0x7 << 2)
    ctx->pc = 0x1616D8u;
    {
        const bool branch_taken_0x1616d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1616d8) {
            ctx->pc = 0x1616DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1616D8u;
            // 0x1616dc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1616C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1616c0;
        }
    }
    ctx->pc = 0x1616E0u;
    // 0x1616e0: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1616e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1616e4: 0xac8200b4  sw          $v0, 0xB4($a0)
    ctx->pc = 0x1616e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
label_1616e8:
    // 0x1616e8: 0xac6400b4  sw          $a0, 0xB4($v1)
    ctx->pc = 0x1616e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 4));
label_1616ec:
    // 0x1616ec: 0x14a0ffe8  bnez        $a1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1616ECu;
    {
        const bool branch_taken_0x1616ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1616F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616ECu;
        // 0x1616f0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616ec) {
            ctx->pc = 0x161690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161690;
        }
    }
    ctx->pc = 0x1616F4u;
label_1616f4:
    // 0x1616f4: 0xad00864c  sw          $zero, -0x79B4($t0)
    ctx->pc = 0x1616f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294936140), GPR_U32(ctx, 0));
label_1616f8:
    // 0x1616f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1616F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1616F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161700u;
}
