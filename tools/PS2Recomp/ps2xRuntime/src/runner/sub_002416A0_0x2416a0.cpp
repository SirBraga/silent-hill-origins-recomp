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

// Function: sub_002416A0
// Address: 0x2416a0 - 0x241780
void sub_002416A0_0x2416a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002416A0_0x2416a0");
#endif

    switch (ctx->pc) {
        case 0x2416dcu: goto label_2416dc;
        case 0x2416f8u: goto label_2416f8;
        case 0x24170cu: goto label_24170c;
        case 0x24172cu: goto label_24172c;
        case 0x241748u: goto label_241748;
        case 0x241754u: goto label_241754;
        case 0x24175cu: goto label_24175c;
        default: break;
    }

    ctx->pc = 0x2416a0u;

    // 0x2416a0: 0x27bdbb90  addiu       $sp, $sp, -0x4470
    ctx->pc = 0x2416a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294949776));
    // 0x2416a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2416a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2416a8: 0x7fb04460  sq          $s0, 0x4460($sp)
    ctx->pc = 0x2416a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17504), GPR_VEC(ctx, 16));
    // 0x2416ac: 0x7fb24440  sq          $s2, 0x4440($sp)
    ctx->pc = 0x2416acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17472), GPR_VEC(ctx, 18));
    // 0x2416b0: 0x7fb34430  sq          $s3, 0x4430($sp)
    ctx->pc = 0x2416b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17456), GPR_VEC(ctx, 19));
    // 0x2416b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2416b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2416b8: 0x7fb44420  sq          $s4, 0x4420($sp)
    ctx->pc = 0x2416b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17440), GPR_VEC(ctx, 20));
    // 0x2416bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2416bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2416c0: 0x7fb14450  sq          $s1, 0x4450($sp)
    ctx->pc = 0x2416c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17488), GPR_VEC(ctx, 17));
    // 0x2416c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2416c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2416c8: 0xffbf4410  sd          $ra, 0x4410($sp)
    ctx->pc = 0x2416c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 17424), GPR_U64(ctx, 31));
    // 0x2416cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2416ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2416d0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2416d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2416d4: 0xc08b470  jal         func_22D1C0
    ctx->pc = 0x2416D4u;
    SET_GPR_U32(ctx, 31, 0x2416DCu);
    ctx->pc = 0x2416D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2416D4u;
    // 0x2416d8: 0x438004  sllv        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D1C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D1C0u, 0x2416D4u, 0x2416DCu)) {
        return;
    }
    ctx->pc = 0x2416DCu;
label_2416dc:
    // 0x2416dc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2416DCu;
    {
        const bool branch_taken_0x2416dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2416E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416DCu;
        // 0x2416e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416dc) {
            ctx->pc = 0x24175Cu;
            goto label_24175c;
        }
    }
    ctx->pc = 0x2416E4u;
    // 0x2416e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2416e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2416e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2416e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2416ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2416ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2416f0: 0xc08afbc  jal         func_22BEF0
    ctx->pc = 0x2416F0u;
    SET_GPR_U32(ctx, 31, 0x2416F8u);
    ctx->pc = 0x2416F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2416F0u;
    // 0x2416f4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BEF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BEF0u, 0x2416F0u, 0x2416F8u)) {
        return;
    }
    ctx->pc = 0x2416F8u;
label_2416f8:
    // 0x2416f8: 0x27b14010  addiu       $s1, $sp, 0x4010
    ctx->pc = 0x2416f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16400));
    // 0x2416fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2416fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241700: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x241700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241704: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x241704u;
    SET_GPR_U32(ctx, 31, 0x24170Cu);
    ctx->pc = 0x241708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241704u;
    // 0x241708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22CB00u, 0x241704u, 0x24170Cu)) {
        return;
    }
    ctx->pc = 0x24170Cu;
label_24170c:
    // 0x24170c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x24170cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x241710: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x241710u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241714: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x241714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x241718: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x241718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24171c: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x24171cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x241720: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x241720u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241724: 0xc08b374  jal         func_22CDD0
    ctx->pc = 0x241724u;
    SET_GPR_U32(ctx, 31, 0x24172Cu);
    ctx->pc = 0x241728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241724u;
    // 0x241728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CDD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22CDD0u, 0x241724u, 0x24172Cu)) {
        return;
    }
    ctx->pc = 0x24172Cu;
label_24172c:
    // 0x24172c: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x24172cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x241730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241734: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x241734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x241738: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x241738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24173c: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x24173cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x241740: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x241740u;
    SET_GPR_U32(ctx, 31, 0x241748u);
    ctx->pc = 0x241744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241740u;
    // 0x241744: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x241740u, 0x241748u)) {
        return;
    }
    ctx->pc = 0x241748u;
label_241748:
    // 0x241748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x241748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24174c: 0xc090512  jal         func_241448
    ctx->pc = 0x24174Cu;
    SET_GPR_U32(ctx, 31, 0x241754u);
    ctx->pc = 0x241750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24174Cu;
    // 0x241750: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x241448u, 0x24174Cu, 0x241754u)) {
        return;
    }
    ctx->pc = 0x241754u;
label_241754:
    // 0x241754: 0xc08b4d2  jal         func_22D348
    ctx->pc = 0x241754u;
    SET_GPR_U32(ctx, 31, 0x24175Cu);
    ctx->pc = 0x241758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241754u;
    // 0x241758: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D348u, 0x241754u, 0x24175Cu)) {
        return;
    }
    ctx->pc = 0x24175Cu;
label_24175c:
    // 0x24175c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x24175cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241760: 0x7bb04460  lq          $s0, 0x4460($sp)
    ctx->pc = 0x241760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 17504)));
    // 0x241764: 0x7bb14450  lq          $s1, 0x4450($sp)
    ctx->pc = 0x241764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 17488)));
    // 0x241768: 0x7bb24440  lq          $s2, 0x4440($sp)
    ctx->pc = 0x241768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 17472)));
    // 0x24176c: 0x7bb34430  lq          $s3, 0x4430($sp)
    ctx->pc = 0x24176cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 17456)));
    // 0x241770: 0x7bb44420  lq          $s4, 0x4420($sp)
    ctx->pc = 0x241770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 17440)));
    // 0x241774: 0xdfbf4410  ld          $ra, 0x4410($sp)
    ctx->pc = 0x241774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 17424)));
    // 0x241778: 0x3e00008  jr          $ra
    ctx->pc = 0x241778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241778u;
        // 0x24177c: 0x27bd4470  addiu       $sp, $sp, 0x4470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 17520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241780u;
}
