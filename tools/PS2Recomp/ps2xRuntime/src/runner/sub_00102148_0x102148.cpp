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

// Function: sub_00102148
// Address: 0x102148 - 0x1021e8
void sub_00102148_0x102148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102148_0x102148");
#endif

    switch (ctx->pc) {
        case 0x10217cu: goto label_10217c;
        case 0x102194u: goto label_102194;
        default: break;
    }

    ctx->pc = 0x102148u;

    // 0x102148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10214c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10214cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x102150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102158: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x102158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x10215c: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x10215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x102160: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x102160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x102164: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x102164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x102168: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x102168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10216c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x10216cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x102170: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x102170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x102174: 0xc09d55c  jal         func_275570
    ctx->pc = 0x102174u;
    SET_GPR_U32(ctx, 31, 0x10217Cu);
    ctx->pc = 0x102178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102174u;
    // 0x102178: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x102174u, 0x10217Cu)) {
        return;
    }
    ctx->pc = 0x10217Cu;
label_10217c:
    // 0x10217c: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x10217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x102180: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x102180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x102184: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x102184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x102188: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x102188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x10218c: 0xc09d926  jal         func_276498
    ctx->pc = 0x10218Cu;
    SET_GPR_U32(ctx, 31, 0x102194u);
    ctx->pc = 0x102190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10218Cu;
    // 0x102190: 0xc4ac0004  lwc1        $f12, 0x4($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x10218Cu, 0x102194u)) {
        return;
    }
    ctx->pc = 0x102194u;
label_102194:
    // 0x102194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x102194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102198: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x102198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10219c: 0xae0301d0  sw          $v1, 0x1D0($s0)
    ctx->pc = 0x10219cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 3));
    // 0x1021a0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x1021a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1021a4: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x1021a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1021a8: 0xae050198  sw          $a1, 0x198($s0)
    ctx->pc = 0x1021a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 5));
    // 0x1021ac: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1021acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1021b0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1021B0u;
    {
        const bool branch_taken_0x1021b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1021b0) {
            ctx->pc = 0x1021B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1021B0u;
            // 0x1021b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1021DCu;
            goto label_1021dc;
        }
    }
    ctx->pc = 0x1021B8u;
    // 0x1021b8: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x1021b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1021bc: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1021bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1021c0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1021c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1021c4: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x1021c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x1021c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1021c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1021cc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1021ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1021d0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1021d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1021d4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1021d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1021d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1021d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1021dc:
    // 0x1021dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1021dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1021e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1021E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1021E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021E0u;
        // 0x1021e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1021E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1021E8u;
}
