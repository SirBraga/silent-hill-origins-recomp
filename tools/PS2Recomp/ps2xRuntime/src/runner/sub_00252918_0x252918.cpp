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

// Function: sub_00252918
// Address: 0x252918 - 0x252998
void sub_00252918_0x252918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252918_0x252918");
#endif

    switch (ctx->pc) {
        case 0x252948u: goto label_252948;
        case 0x252958u: goto label_252958;
        case 0x25296cu: goto label_25296c;
        case 0x252980u: goto label_252980;
        default: break;
    }

    ctx->pc = 0x252918u;

    // 0x252918: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25291c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x252920: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x252920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x252924: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x252924u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x252928: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x252928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x25292c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25292cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252930: 0x26325618  addiu       $s2, $s1, 0x5618
    ctx->pc = 0x252930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 22040));
    // 0x252934: 0x8e305618  lw          $s0, 0x5618($s1)
    ctx->pc = 0x252934u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x735618u));
    // 0x252938: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x252938u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x73561Cu));
    // 0x25293c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252940: 0xc094c9c  jal         func_253270
    ctx->pc = 0x252940u;
    SET_GPR_U32(ctx, 31, 0x252948u);
    ctx->pc = 0x252944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252940u;
    // 0x252944: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x253270u, 0x252940u, 0x252948u)) {
        return;
    }
    ctx->pc = 0x252948u;
label_252948:
    // 0x252948: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x252948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x25294c: 0x8e245618  lw          $a0, 0x5618($s1)
    ctx->pc = 0x25294cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 22040)));
    // 0x252950: 0xc09494c  jal         func_252530
    ctx->pc = 0x252950u;
    SET_GPR_U32(ctx, 31, 0x252958u);
    ctx->pc = 0x252954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252950u;
    // 0x252954: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252530u, 0x252950u, 0x252958u)) {
        return;
    }
    ctx->pc = 0x252958u;
label_252958:
    // 0x252958: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x252958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x25295c: 0x8e255618  lw          $a1, 0x5618($s1)
    ctx->pc = 0x25295cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 22040)));
    // 0x252960: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x252960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x252964: 0xc094960  jal         func_252580
    ctx->pc = 0x252964u;
    SET_GPR_U32(ctx, 31, 0x25296Cu);
    ctx->pc = 0x252968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252964u;
    // 0x252968: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252580u, 0x252964u, 0x25296Cu)) {
        return;
    }
    ctx->pc = 0x25296Cu;
label_25296c:
    // 0x25296c: 0x8e245618  lw          $a0, 0x5618($s1)
    ctx->pc = 0x25296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 22040)));
    // 0x252970: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x252970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x252974: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x252974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
    // 0x252978: 0xc0972f2  jal         func_25CBC8
    ctx->pc = 0x252978u;
    SET_GPR_U32(ctx, 31, 0x252980u);
    ctx->pc = 0x25297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252978u;
    // 0x25297c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CBC8u, 0x252978u, 0x252980u)) {
        return;
    }
    ctx->pc = 0x252980u;
label_252980:
    // 0x252980: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x252980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252984: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x252984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252988: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x252988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25298c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25298cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252990: 0x3e00008  jr          $ra
    ctx->pc = 0x252990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252990u;
        // 0x252994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252998u;
}
