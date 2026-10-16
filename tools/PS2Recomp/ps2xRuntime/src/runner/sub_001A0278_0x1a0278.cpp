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

// Function: sub_001A0278
// Address: 0x1a0278 - 0x1a0340
void sub_001A0278_0x1a0278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0278_0x1a0278");
#endif

    switch (ctx->pc) {
        case 0x1a02b8u: goto label_1a02b8;
        default: break;
    }

    ctx->pc = 0x1a0278u;

    // 0x1a0278: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1a0278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a027c: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x1a027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a0280: 0x8d07080c  lw          $a3, 0x80C($t0)
    ctx->pc = 0x1a0280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2060)));
    // 0x1a0284: 0x8d050804  lw          $a1, 0x804($t0)
    ctx->pc = 0x1a0284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2052)));
    // 0x1a0288: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x1a0288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a028c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a028cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a0290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0294: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x1a0294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1a0298: 0x18800025  blez        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A0298u;
    {
        const bool branch_taken_0x1a0298 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x1A029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0298u;
        // 0x1a029c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0298) {
            ctx->pc = 0x1A0330u;
            goto label_1a0330;
        }
    }
    ctx->pc = 0x1A02A0u;
    // 0x1a02a0: 0x240b0098  addiu       $t3, $zero, 0x98
    ctx->pc = 0x1a02a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a02a4: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x1a02a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a02a8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1a02a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a02ac: 0x25060850  addiu       $a2, $t0, 0x850
    ctx->pc = 0x1a02acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 2128));
    // 0x1a02b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a02b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02b4: 0x0  nop
    ctx->pc = 0x1a02b4u;
    // NOP
label_1a02b8:
    // 0x1a02b8: 0xeb1018  mult        $v0, $a3, $t3
    ctx->pc = 0x1a02b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a02bc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a02c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a02c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a02c4: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x1a02c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1a02c8: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1a02c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1a02cc: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1a02ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a02d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1a02d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1a02d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A02D4u;
    {
        const bool branch_taken_0x1a02d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02D4u;
        // 0x1a02d8: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02d4) {
            ctx->pc = 0x1A02F4u;
            goto label_1a02f4;
        }
    }
    ctx->pc = 0x1A02DCu;
    // 0x1a02dc: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x1a02dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a02e0: 0x0  nop
    ctx->pc = 0x1a02e0u;
    // NOP
    // 0x1a02e4: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1A02E4u;
    {
        const bool branch_taken_0x1a02e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a02e4) {
            ctx->pc = 0x1A02E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A02E4u;
            // 0x1a02e8: 0xa0cd0000  sb          $t5, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0304u;
            goto label_1a0304;
        }
    }
    ctx->pc = 0x1A02ECu;
    // 0x1a02ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A02ECu;
    {
        const bool branch_taken_0x1a02ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A02F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02ECu;
        // 0x1a02f0: 0x8d07080c  lw          $a3, 0x80C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02ec) {
            ctx->pc = 0x1A0308u;
            goto label_1a0308;
        }
    }
    ctx->pc = 0x1A02F4u;
label_1a02f4:
    // 0x1a02f4: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1a02f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a02f8: 0x0  nop
    ctx->pc = 0x1a02f8u;
    // NOP
    // 0x1a02fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1A02FCu;
    {
        const bool branch_taken_0x1a02fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a02fc) {
            ctx->pc = 0x1A0300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A02FCu;
            // 0x1a0300: 0xa0cc0000  sb          $t4, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0304u;
            goto label_1a0304;
        }
    }
    ctx->pc = 0x1A0304u;
label_1a0304:
    // 0x1a0304: 0x8d07080c  lw          $a3, 0x80C($t0)
    ctx->pc = 0x1a0304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2060)));
label_1a0308:
    // 0x1a0308: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1a0308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1a030c: 0x8d050804  lw          $a1, 0x804($t0)
    ctx->pc = 0x1a030cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2052)));
    // 0x1a0310: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a0314: 0xeb2018  mult        $a0, $a3, $t3
    ctx->pc = 0x1a0314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a0318: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a0318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a031c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a031cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a0320: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1a0320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1a0324: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x1a0324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a0328: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1A0328u;
    {
        const bool branch_taken_0x1a0328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0328u;
        // 0x1a032c: 0x254a0028  addiu       $t2, $t2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0328) {
            ctx->pc = 0x1A02B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a02b8;
        }
    }
    ctx->pc = 0x1A0330u;
label_1a0330:
    // 0x1a0330: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0338u;
    // 0x1a0338: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a0338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a033c: 0x0  nop
    ctx->pc = 0x1a033cu;
    // NOP
    ctx->pc = 0x1a0340u;
}
