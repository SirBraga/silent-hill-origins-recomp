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

// Function: sub_00105900
// Address: 0x105900 - 0x105a10
void sub_00105900_0x105900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105900_0x105900");
#endif

    switch (ctx->pc) {
        case 0x105958u: goto label_105958;
        case 0x105980u: goto label_105980;
        case 0x105998u: goto label_105998;
        case 0x1059b4u: goto label_1059b4;
        default: break;
    }

    ctx->pc = 0x105900u;

    // 0x105900: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x105900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x105904: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x105904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x105908: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x105908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x10590c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10590cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105910: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x105910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x105914: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x105914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x105918: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x105918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10591c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x10591cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x105920: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x105920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x105924: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x105924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x105928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10592c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x10592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x105930: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x105930u;
    {
        const bool branch_taken_0x105930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105930u;
        // 0x105934: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105930) {
            ctx->pc = 0x1059E4u;
            goto label_1059e4;
        }
    }
    ctx->pc = 0x105938u;
    // 0x105938: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x105938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x10593c: 0x8c558bc4  lw          $s5, -0x743C($v0)
    ctx->pc = 0x10593cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937540)));
    // 0x105940: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x105940u;
    {
        const bool branch_taken_0x105940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105940u;
        // 0x105944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105940) {
            ctx->pc = 0x1059E0u;
            goto label_1059e0;
        }
    }
    ctx->pc = 0x105948u;
    // 0x105948: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x105948u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10594c: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x10594cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x105950: 0xb71818  mult        $v1, $a1, $s7
    ctx->pc = 0x105950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x105954: 0x0  nop
    ctx->pc = 0x105954u;
    // NOP
label_105958:
    // 0x105958: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x105958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10595c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10595cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105960: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x105960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x105964: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105968: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x105968u;
    {
        const bool branch_taken_0x105968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105968u;
        // 0x10596c: 0x24b40001  addiu       $s4, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105968) {
            ctx->pc = 0x1059CCu;
            goto label_1059cc;
        }
    }
    ctx->pc = 0x105970u;
    // 0x105970: 0xb69018  mult        $s2, $a1, $s6
    ctx->pc = 0x105970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x105974: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x105974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x105978: 0x1181c0  sll         $s0, $s1, 7
    ctx->pc = 0x105978u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x10597c: 0x0  nop
    ctx->pc = 0x10597cu;
    // NOP
label_105980:
    // 0x105980: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x105980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x105984: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x105984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x105988: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x105988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10598c: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x10598cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x105990: 0xc0ab512  jal         func_2AD448
    ctx->pc = 0x105990u;
    SET_GPR_U32(ctx, 31, 0x105998u);
    ctx->pc = 0x105994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105990u;
    // 0x105994: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD448u, 0x105990u, 0x105998u)) {
        return;
    }
    ctx->pc = 0x105998u;
label_105998:
    // 0x105998: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x105998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10599c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10599cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059a0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1059a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1059a4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1059a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1059a8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1059a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1059ac: 0xc06659a  jal         func_199668
    ctx->pc = 0x1059ACu;
    SET_GPR_U32(ctx, 31, 0x1059B4u);
    ctx->pc = 0x1059B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1059ACu;
    // 0x1059b0: 0x8e050060  lw          $a1, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199668u, 0x1059ACu, 0x1059B4u)) {
        return;
    }
    ctx->pc = 0x1059B4u;
label_1059b4:
    // 0x1059b4: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1059b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1059b8: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x1059b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1059bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1059bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1059c0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1059c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1059c4: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1059C4u;
    {
        const bool branch_taken_0x1059c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1059c4) {
            ctx->pc = 0x1059C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1059C4u;
            // 0x1059c8: 0x1181c0  sll         $s0, $s1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105980;
        }
    }
    ctx->pc = 0x1059CCu;
label_1059cc:
    // 0x1059cc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1059ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1059d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1059d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059d4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1059d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1059d8: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1059D8u;
    {
        const bool branch_taken_0x1059d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1059d8) {
            ctx->pc = 0x1059DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1059D8u;
            // 0x1059dc: 0xb71818  mult        $v1, $a1, $s7 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105958;
        }
    }
    ctx->pc = 0x1059E0u;
label_1059e0:
    // 0x1059e0: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x1059e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_1059e4:
    // 0x1059e4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1059e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1059e8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1059e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1059ec: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1059ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1059f0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1059f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1059f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1059f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1059f8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1059f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1059fc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1059fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105a00: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x105a00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105a08: 0x3e00008  jr          $ra
    ctx->pc = 0x105A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A08u;
        // 0x105a0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105A10u;
}
