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

// Function: sub_002858A8
// Address: 0x2858a8 - 0x2859c0
void sub_002858A8_0x2858a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002858A8_0x2858a8");
#endif

    switch (ctx->pc) {
        case 0x2858a8u: goto label_2858a8;
        case 0x2858acu: goto label_2858ac;
        case 0x2858b0u: goto label_2858b0;
        case 0x2858b4u: goto label_2858b4;
        case 0x2858b8u: goto label_2858b8;
        case 0x2858bcu: goto label_2858bc;
        case 0x2858c0u: goto label_2858c0;
        case 0x2858c4u: goto label_2858c4;
        case 0x2858c8u: goto label_2858c8;
        case 0x2858ccu: goto label_2858cc;
        case 0x2858d0u: goto label_2858d0;
        case 0x2858d4u: goto label_2858d4;
        case 0x2858d8u: goto label_2858d8;
        case 0x2858dcu: goto label_2858dc;
        case 0x2858e0u: goto label_2858e0;
        case 0x2858e4u: goto label_2858e4;
        case 0x2858e8u: goto label_2858e8;
        case 0x2858ecu: goto label_2858ec;
        case 0x2858f0u: goto label_2858f0;
        case 0x2858f4u: goto label_2858f4;
        case 0x2858f8u: goto label_2858f8;
        case 0x2858fcu: goto label_2858fc;
        case 0x285900u: goto label_285900;
        case 0x285904u: goto label_285904;
        case 0x285908u: goto label_285908;
        case 0x28590cu: goto label_28590c;
        case 0x285910u: goto label_285910;
        case 0x285914u: goto label_285914;
        case 0x285918u: goto label_285918;
        case 0x28591cu: goto label_28591c;
        case 0x285920u: goto label_285920;
        case 0x285924u: goto label_285924;
        case 0x285928u: goto label_285928;
        case 0x28592cu: goto label_28592c;
        case 0x285930u: goto label_285930;
        case 0x285934u: goto label_285934;
        case 0x285938u: goto label_285938;
        case 0x28593cu: goto label_28593c;
        case 0x285940u: goto label_285940;
        case 0x285944u: goto label_285944;
        case 0x285948u: goto label_285948;
        case 0x28594cu: goto label_28594c;
        case 0x285950u: goto label_285950;
        case 0x285954u: goto label_285954;
        case 0x285958u: goto label_285958;
        case 0x28595cu: goto label_28595c;
        case 0x285960u: goto label_285960;
        case 0x285964u: goto label_285964;
        case 0x285968u: goto label_285968;
        case 0x28596cu: goto label_28596c;
        case 0x285970u: goto label_285970;
        case 0x285974u: goto label_285974;
        case 0x285978u: goto label_285978;
        case 0x28597cu: goto label_28597c;
        case 0x285980u: goto label_285980;
        case 0x285984u: goto label_285984;
        case 0x285988u: goto label_285988;
        case 0x28598cu: goto label_28598c;
        case 0x285990u: goto label_285990;
        case 0x285994u: goto label_285994;
        case 0x285998u: goto label_285998;
        case 0x28599cu: goto label_28599c;
        case 0x2859a0u: goto label_2859a0;
        case 0x2859a4u: goto label_2859a4;
        case 0x2859a8u: goto label_2859a8;
        case 0x2859acu: goto label_2859ac;
        case 0x2859b0u: goto label_2859b0;
        case 0x2859b4u: goto label_2859b4;
        case 0x2859b8u: goto label_2859b8;
        case 0x2859bcu: goto label_2859bc;
        default: break;
    }

    ctx->pc = 0x2858a8u;

label_2858a8:
    // 0x2858a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2858a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2858ac:
    // 0x2858ac: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2858acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2858b0:
    // 0x2858b0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2858b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2858b4:
    // 0x2858b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2858b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2858b8:
    // 0x2858b8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2858b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2858bc:
    // 0x2858bc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2858bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2858c0:
    // 0x2858c0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2858c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2858c4:
    // 0x2858c4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2858c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2858c8:
    // 0x2858c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2858c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2858cc:
    // 0x2858cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2858ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2858d0:
    // 0x2858d0: 0xc093546  jal         func_24D518
label_2858d4:
    if (ctx->pc == 0x2858D4u) {
        ctx->pc = 0x2858D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858D0u;
        // 0x2858d4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858D8u;
        goto label_2858d8;
    }
    ctx->pc = 0x2858D0u;
    SET_GPR_U32(ctx, 31, 0x2858D8u);
    ctx->pc = 0x2858D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2858D0u;
    // 0x2858d4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2858D0u, 0x2858D8u)) {
        return;
    }
    ctx->pc = 0x2858D8u;
label_2858d8:
    // 0x2858d8: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2858d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2858dc:
    // 0x2858dc: 0x1443002f  bne         $v0, $v1, . + 4 + (0x2F << 2)
label_2858e0:
    if (ctx->pc == 0x2858E0u) {
        ctx->pc = 0x2858E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858DCu;
        // 0x2858e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858E4u;
        goto label_2858e4;
    }
    ctx->pc = 0x2858DCu;
    {
        const bool branch_taken_0x2858dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2858E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858DCu;
        // 0x2858e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858dc) {
            ctx->pc = 0x28599Cu;
            goto label_28599c;
        }
    }
    ctx->pc = 0x2858E4u;
label_2858e4:
    // 0x2858e4: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x2858e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2858e8:
    // 0x2858e8: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x2858e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2858ec:
    // 0x2858ec: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2858ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2858f0:
    // 0x2858f0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2858f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2858f4:
    // 0x2858f4: 0x2758018  mult        $s0, $s3, $s5
    ctx->pc = 0x2858f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_2858f8:
    // 0x2858f8: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x2858f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2858fc:
    // 0x2858fc: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x2858fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_285900:
    // 0x285900: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x285900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
label_285904:
    // 0x285904: 0x40f809  jalr        $v0
label_285908:
    if (ctx->pc == 0x285908u) {
        ctx->pc = 0x285908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285904u;
        // 0x285908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28590Cu;
        goto label_28590c;
    }
    ctx->pc = 0x285904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28590Cu);
        ctx->pc = 0x285908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285904u;
        // 0x285908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285904u, 0x28590Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28590Cu;
label_28590c:
    // 0x28590c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28590cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285910:
    // 0x285910: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
label_285914:
    if (ctx->pc == 0x285914u) {
        ctx->pc = 0x285914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285910u;
        // 0x285914: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285918u;
        goto label_285918;
    }
    ctx->pc = 0x285910u;
    {
        const bool branch_taken_0x285910 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x285914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285910u;
        // 0x285914: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285910) {
            ctx->pc = 0x285948u;
            goto label_285948;
        }
    }
    ctx->pc = 0x285918u;
label_285918:
    // 0x285918: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x285918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_28591c:
    // 0x28591c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x28591cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_285920:
    // 0x285920: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x285920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_285924:
    // 0x285924: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x285924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285928:
    // 0x285928: 0xc092848  jal         func_24A120
label_28592c:
    if (ctx->pc == 0x28592Cu) {
        ctx->pc = 0x28592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285928u;
        // 0x28592c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285930u;
        goto label_285930;
    }
    ctx->pc = 0x285928u;
    SET_GPR_U32(ctx, 31, 0x285930u);
    ctx->pc = 0x28592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285928u;
    // 0x28592c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x285928u, 0x285930u)) {
        return;
    }
    ctx->pc = 0x285930u;
label_285930:
    // 0x285930: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x285930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_285934:
    // 0x285934: 0xc09281a  jal         func_24A068
label_285938:
    if (ctx->pc == 0x285938u) {
        ctx->pc = 0x285938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285934u;
        // 0x285938: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28593Cu;
        goto label_28593c;
    }
    ctx->pc = 0x285934u;
    SET_GPR_U32(ctx, 31, 0x28593Cu);
    ctx->pc = 0x285938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285934u;
    // 0x285938: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x285934u, 0x28593Cu)) {
        return;
    }
    ctx->pc = 0x28593Cu;
label_28593c:
    // 0x28593c: 0x10000017  b           . + 4 + (0x17 << 2)
label_285940:
    if (ctx->pc == 0x285940u) {
        ctx->pc = 0x285940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28593Cu;
        // 0x285940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285944u;
        goto label_285944;
    }
    ctx->pc = 0x28593Cu;
    {
        const bool branch_taken_0x28593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28593Cu;
        // 0x285940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28593c) {
            ctx->pc = 0x28599Cu;
            goto label_28599c;
        }
    }
    ctx->pc = 0x285944u;
label_285944:
    // 0x285944: 0x0  nop
    ctx->pc = 0x285944u;
    // NOP
label_285948:
    // 0x285948: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x285948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28594c:
    // 0x28594c: 0xc0927aa  jal         func_249EA8
label_285950:
    if (ctx->pc == 0x285950u) {
        ctx->pc = 0x285950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28594Cu;
        // 0x285950: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285954u;
        goto label_285954;
    }
    ctx->pc = 0x28594Cu;
    SET_GPR_U32(ctx, 31, 0x285954u);
    ctx->pc = 0x285950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28594Cu;
    // 0x285950: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x28594Cu, 0x285954u)) {
        return;
    }
    ctx->pc = 0x285954u;
label_285954:
    // 0x285954: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_285958:
    if (ctx->pc == 0x285958u) {
        ctx->pc = 0x285958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285954u;
        // 0x285958: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28595Cu;
        goto label_28595c;
    }
    ctx->pc = 0x285954u;
    {
        const bool branch_taken_0x285954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285954u;
        // 0x285958: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285954) {
            ctx->pc = 0x285998u;
            goto label_285998;
        }
    }
    ctx->pc = 0x28595Cu;
label_28595c:
    // 0x28595c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28595cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285960:
    // 0x285960: 0xc0a177e  jal         func_285DF8
label_285964:
    if (ctx->pc == 0x285964u) {
        ctx->pc = 0x285964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285960u;
        // 0x285964: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285968u;
        goto label_285968;
    }
    ctx->pc = 0x285960u;
    SET_GPR_U32(ctx, 31, 0x285968u);
    ctx->pc = 0x285964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285960u;
    // 0x285964: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x285DF8u, 0x285960u, 0x285968u)) {
        return;
    }
    ctx->pc = 0x285968u;
label_285968:
    // 0x285968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x285968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28596c:
    // 0x28596c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28596cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_285970:
    // 0x285970: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x285970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_285974:
    // 0x285974: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x285974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_285978:
    // 0x285978: 0x40f809  jalr        $v0
label_28597c:
    if (ctx->pc == 0x28597Cu) {
        ctx->pc = 0x28597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285978u;
        // 0x28597c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285980u;
        goto label_285980;
    }
    ctx->pc = 0x285978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285980u);
        ctx->pc = 0x28597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285978u;
        // 0x28597c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285978u, 0x285980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285980u;
label_285980:
    // 0x285980: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x285980u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
label_285984:
    // 0x285984: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x285984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_285988:
    // 0x285988: 0x40f809  jalr        $v0
label_28598c:
    if (ctx->pc == 0x28598Cu) {
        ctx->pc = 0x28598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285988u;
        // 0x28598c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285990u;
        goto label_285990;
    }
    ctx->pc = 0x285988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285990u);
        ctx->pc = 0x28598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285988u;
        // 0x28598c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285988u, 0x285990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285990u;
label_285990:
    // 0x285990: 0x10000002  b           . + 4 + (0x2 << 2)
label_285994:
    if (ctx->pc == 0x285994u) {
        ctx->pc = 0x285994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285990u;
        // 0x285994: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285998u;
        goto label_285998;
    }
    ctx->pc = 0x285990u;
    {
        const bool branch_taken_0x285990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285990u;
        // 0x285994: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285990) {
            ctx->pc = 0x28599Cu;
            goto label_28599c;
        }
    }
    ctx->pc = 0x285998u;
label_285998:
    // 0x285998: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x285998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28599c:
    // 0x28599c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x28599cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2859a0:
    // 0x2859a0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2859a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2859a4:
    // 0x2859a4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2859a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2859a8:
    // 0x2859a8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2859a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2859ac:
    // 0x2859ac: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2859acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2859b0:
    // 0x2859b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2859b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2859b4:
    // 0x2859b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2859b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2859b8:
    // 0x2859b8: 0x3e00008  jr          $ra
label_2859bc:
    if (ctx->pc == 0x2859BCu) {
        ctx->pc = 0x2859BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859B8u;
        // 0x2859bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2859C0u;
        goto label_fallthrough_0x2859b8;
    }
    ctx->pc = 0x2859B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2859BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859B8u;
        // 0x2859bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2859B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2859b8:
    ctx->pc = 0x2859C0u;
}
