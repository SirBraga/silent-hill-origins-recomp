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

// Function: sub_00217190
// Address: 0x217190 - 0x2172b0
void sub_00217190_0x217190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217190_0x217190");
#endif

    switch (ctx->pc) {
        case 0x2171c4u: goto label_2171c4;
        case 0x2171d4u: goto label_2171d4;
        case 0x217254u: goto label_217254;
        case 0x217270u: goto label_217270;
        default: break;
    }

    ctx->pc = 0x217190u;

    // 0x217190: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x217190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x217194: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x217194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x217198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x217198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21719c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21719cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2171a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2171a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2171a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2171a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2171a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2171a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2171ac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2171acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2171b0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2171b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2171b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2171b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2171b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2171b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2171bc: 0xc085daa  jal         func_2176A8
    ctx->pc = 0x2171BCu;
    SET_GPR_U32(ctx, 31, 0x2171C4u);
    ctx->pc = 0x2171C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171BCu;
    // 0x2171c0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2176A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2176A8u, 0x2171BCu, 0x2171C4u)) {
        return;
    }
    ctx->pc = 0x2171C4u;
label_2171c4:
    // 0x2171c4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2171C4u;
    {
        const bool branch_taken_0x2171c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2171C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171C4u;
        // 0x2171c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171c4) {
            ctx->pc = 0x217270u;
            goto label_217270;
        }
    }
    ctx->pc = 0x2171CCu;
    // 0x2171cc: 0xc085d66  jal         func_217598
    ctx->pc = 0x2171CCu;
    SET_GPR_U32(ctx, 31, 0x2171D4u);
    ctx->pc = 0x2171D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171CCu;
    // 0x2171d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217598u, 0x2171CCu, 0x2171D4u)) {
        return;
    }
    ctx->pc = 0x2171D4u;
label_2171d4:
    // 0x2171d4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2171d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2171d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2171d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2171dc: 0x8e04027c  lw          $a0, 0x27C($s0)
    ctx->pc = 0x2171dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x2171e0: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2171E0u;
    {
        const bool branch_taken_0x2171e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2171E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171E0u;
        // 0x2171e4: 0xae020278  sw          $v0, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171e0) {
            ctx->pc = 0x217230u;
            goto label_217230;
        }
    }
    ctx->pc = 0x2171E8u;
    // 0x2171e8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2171E8u;
    {
        const bool branch_taken_0x2171e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2171e8) {
            ctx->pc = 0x217230u;
            goto label_217230;
        }
    }
    ctx->pc = 0x2171F0u;
    // 0x2171f0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2171f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2171f4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2171f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2171f8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2171F8u;
    {
        const bool branch_taken_0x2171f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2171f8) {
            ctx->pc = 0x217230u;
            goto label_217230;
        }
    }
    ctx->pc = 0x217200u;
    // 0x217200: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x217200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x217204: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x217204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x217208: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x217208u;
    {
        const bool branch_taken_0x217208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x217208) {
            ctx->pc = 0x217230u;
            goto label_217230;
        }
    }
    ctx->pc = 0x217210u;
    // 0x217210: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x217210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x217214: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x217214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x217218: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x217218u;
    {
        const bool branch_taken_0x217218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x217218) {
            ctx->pc = 0x217230u;
            goto label_217230;
        }
    }
    ctx->pc = 0x217220u;
    // 0x217220: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x217220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x217224: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x217224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x217228: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x217228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x21722c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x21722cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_217230:
    // 0x217230: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x217230u;
    {
        const bool branch_taken_0x217230 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x217230) {
            ctx->pc = 0x217240u;
            goto label_217240;
        }
    }
    ctx->pc = 0x217238u;
    // 0x217238: 0xae11027c  sw          $s1, 0x27C($s0)
    ctx->pc = 0x217238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 17));
    // 0x21723c: 0xae110284  sw          $s1, 0x284($s0)
    ctx->pc = 0x21723cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 17));
label_217240:
    // 0x217240: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x217240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x217244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217248: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x217248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21724c: 0xc085776  jal         func_215DD8
    ctx->pc = 0x21724Cu;
    SET_GPR_U32(ctx, 31, 0x217254u);
    ctx->pc = 0x217250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21724Cu;
    // 0x217250: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x215DD8u, 0x21724Cu, 0x217254u)) {
        return;
    }
    ctx->pc = 0x217254u;
label_217254:
    // 0x217254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217258: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x217258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21725c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x21725cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x217260: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x217260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217264: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x217264u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x217268: 0xc085422  jal         func_215088
    ctx->pc = 0x217268u;
    SET_GPR_U32(ctx, 31, 0x217270u);
    ctx->pc = 0x21726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217268u;
    // 0x21726c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x215088u, 0x217268u, 0x217270u)) {
        return;
    }
    ctx->pc = 0x217270u;
label_217270:
    // 0x217270: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x217270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217274: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x217274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x217278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21727c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x21727cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217284: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x217284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x217288: 0x3e00008  jr          $ra
    ctx->pc = 0x217288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217288u;
        // 0x21728c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217290u;
    // 0x217290: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x217290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x217294: 0x0  nop
    ctx->pc = 0x217294u;
    // NOP
    // 0x217298: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x217298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21729c: 0x0  nop
    ctx->pc = 0x21729cu;
    // NOP
    // 0x2172a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2172a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2172a4: 0x0  nop
    ctx->pc = 0x2172a4u;
    // NOP
    // 0x2172a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2172a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2172ac: 0x0  nop
    ctx->pc = 0x2172acu;
    // NOP
    ctx->pc = 0x2172b0u;
}
