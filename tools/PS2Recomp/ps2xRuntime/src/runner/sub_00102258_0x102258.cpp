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

// Function: sub_00102258
// Address: 0x102258 - 0x102330
void sub_00102258_0x102258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102258_0x102258");
#endif

    switch (ctx->pc) {
        case 0x10228cu: goto label_10228c;
        case 0x10229cu: goto label_10229c;
        case 0x1022b8u: goto label_1022b8;
        case 0x1022f4u: goto label_1022f4;
        case 0x10230cu: goto label_10230c;
        default: break;
    }

    ctx->pc = 0x102258u;

    // 0x102258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10225c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10225cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x102260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102268: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x102268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x10226c: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x10226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x102270: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x102270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x102274: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x102274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x102278: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x102278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x10227c: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x10227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x102280: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x102280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x102284: 0xc09d55c  jal         func_275570
    ctx->pc = 0x102284u;
    SET_GPR_U32(ctx, 31, 0x10228Cu);
    ctx->pc = 0x102288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102284u;
    // 0x102288: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x102284u, 0x10228Cu)) {
        return;
    }
    ctx->pc = 0x10228Cu;
label_10228c:
    // 0x10228c: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x10228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x102290: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x102290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x102294: 0xc09d926  jal         func_276498
    ctx->pc = 0x102294u;
    SET_GPR_U32(ctx, 31, 0x10229Cu);
    ctx->pc = 0x102298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102294u;
    // 0x102298: 0x8c640028  lw          $a0, 0x28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x102294u, 0x10229Cu)) {
        return;
    }
    ctx->pc = 0x10229Cu;
label_10229c:
    // 0x10229c: 0x8e0302a4  lw          $v1, 0x2A4($s0)
    ctx->pc = 0x10229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x1022a0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1022A0u;
    {
        const bool branch_taken_0x1022a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022A0u;
        // 0x1022a4: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022a0) {
            ctx->pc = 0x1022FCu;
            goto label_1022fc;
        }
    }
    ctx->pc = 0x1022A8u;
    // 0x1022a8: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x1022a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1022ac: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x1022acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1022b0: 0xc09d918  jal         func_276460
    ctx->pc = 0x1022B0u;
    SET_GPR_U32(ctx, 31, 0x1022B8u);
    ctx->pc = 0x1022B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022B0u;
    // 0x1022b4: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276460u, 0x1022B0u, 0x1022B8u)) {
        return;
    }
    ctx->pc = 0x1022B8u;
label_1022b8:
    // 0x1022b8: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x1022b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1022bc: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x1022bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1022c0: 0x8c670028  lw          $a3, 0x28($v1)
    ctx->pc = 0x1022c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1022c4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1022c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1022c8: 0x8ce80024  lw          $t0, 0x24($a3)
    ctx->pc = 0x1022c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1022cc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1022ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1022d0: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x1022d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x1022d4: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1022d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1022d8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1022d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1022dc: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x1022dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1022e0: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x1022e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1022e4: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x1022e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1022e8: 0x3012  mflo        $a2
    ctx->pc = 0x1022e8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1022ec: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x1022ECu;
    SET_GPR_U32(ctx, 31, 0x1022F4u);
    ctx->pc = 0x1022F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022ECu;
    // 0x1022f0: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1022ECu, 0x1022F4u)) {
        return;
    }
    ctx->pc = 0x1022F4u;
label_1022f4:
    // 0x1022f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1022F4u;
    {
        const bool branch_taken_0x1022f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022F4u;
        // 0x1022f8: 0xae0001d0  sw          $zero, 0x1D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022f4) {
            ctx->pc = 0x102310u;
            goto label_102310;
        }
    }
    ctx->pc = 0x1022FCu;
label_1022fc:
    // 0x1022fc: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x1022fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x102300: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x102300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x102304: 0xc09d918  jal         func_276460
    ctx->pc = 0x102304u;
    SET_GPR_U32(ctx, 31, 0x10230Cu);
    ctx->pc = 0x102308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102304u;
    // 0x102308: 0x8c650020  lw          $a1, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276460u, 0x102304u, 0x10230Cu)) {
        return;
    }
    ctx->pc = 0x10230Cu;
label_10230c:
    // 0x10230c: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x10230cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
label_102310:
    // 0x102310: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x102310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x102314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102318: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x102318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10231c: 0xae030198  sw          $v1, 0x198($s0)
    ctx->pc = 0x10231cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 3));
    // 0x102320: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x102320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102324: 0x3e00008  jr          $ra
    ctx->pc = 0x102324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102324u;
        // 0x102328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10232Cu;
    // 0x10232c: 0x0  nop
    ctx->pc = 0x10232cu;
    // NOP
    ctx->pc = 0x102330u;
}
