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

// Function: sub_002731A0
// Address: 0x2731a0 - 0x273290
void sub_002731A0_0x2731a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002731A0_0x2731a0");
#endif

    switch (ctx->pc) {
        case 0x2731dcu: goto label_2731dc;
        case 0x2731f4u: goto label_2731f4;
        case 0x273208u: goto label_273208;
        case 0x27322cu: goto label_27322c;
        case 0x273248u: goto label_273248;
        case 0x273270u: goto label_273270;
        default: break;
    }

    ctx->pc = 0x2731a0u;

    // 0x2731a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2731a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2731a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2731a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2731a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2731a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731ac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2731acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2731b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2731b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731b4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2731b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2731b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2731b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2731bc: 0x24a537e8  addiu       $a1, $a1, 0x37E8
    ctx->pc = 0x2731bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14312));
    // 0x2731c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2731c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2731c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2731c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731c8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2731c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2731cc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2731ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2731d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2731d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2731d4: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x2731D4u;
    SET_GPR_U32(ctx, 31, 0x2731DCu);
    ctx->pc = 0x2731D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2731D4u;
    // 0x2731d8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x2731D4u, 0x2731DCu)) {
        return;
    }
    ctx->pc = 0x2731DCu;
label_2731dc:
    // 0x2731dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2731dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731e0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2731e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2731e4: 0x202980b  movn        $s3, $s0, $v0
    ctx->pc = 0x2731e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16));
    // 0x2731e8: 0x24a537f0  addiu       $a1, $a1, 0x37F0
    ctx->pc = 0x2731e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14320));
    // 0x2731ec: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x2731ECu;
    SET_GPR_U32(ctx, 31, 0x2731F4u);
    ctx->pc = 0x2731F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2731ECu;
    // 0x2731f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x2731ECu, 0x2731F4u)) {
        return;
    }
    ctx->pc = 0x2731F4u;
label_2731f4:
    // 0x2731f4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2731f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2731f8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2731f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x2731fc: 0x24a537f8  addiu       $a1, $a1, 0x37F8
    ctx->pc = 0x2731fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14328));
    // 0x273200: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x273200u;
    SET_GPR_U32(ctx, 31, 0x273208u);
    ctx->pc = 0x273204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273200u;
    // 0x273204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x273200u, 0x273208u)) {
        return;
    }
    ctx->pc = 0x273208u;
label_273208:
    // 0x273208: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273208u;
    {
        const bool branch_taken_0x273208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273208u;
        // 0x27320c: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273208) {
            ctx->pc = 0x273220u;
            goto label_273220;
        }
    }
    ctx->pc = 0x273210u;
    // 0x273210: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x273210u;
    {
        const bool branch_taken_0x273210 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x273214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273210u;
        // 0x273214: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273210) {
            ctx->pc = 0x273220u;
            goto label_273220;
        }
    }
    ctx->pc = 0x273218u;
    // 0x273218: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x273218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x27321c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x27321cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_273220:
    // 0x273220: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273224: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x273224u;
    SET_GPR_U32(ctx, 31, 0x27322Cu);
    ctx->pc = 0x273228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273224u;
    // 0x273228: 0x24a53800  addiu       $a1, $a1, 0x3800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x273224u, 0x27322Cu)) {
        return;
    }
    ctx->pc = 0x27322Cu;
label_27322c:
    // 0x27322c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27322Cu;
    {
        const bool branch_taken_0x27322c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27322Cu;
        // 0x273230: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27322c) {
            ctx->pc = 0x27323Cu;
            goto label_27323c;
        }
    }
    ctx->pc = 0x273234u;
    // 0x273234: 0x36310006  ori         $s1, $s1, 0x6
    ctx->pc = 0x273234u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
    // 0x273238: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x273238u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
label_27323c:
    // 0x27323c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27323cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273240: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x273240u;
    SET_GPR_U32(ctx, 31, 0x273248u);
    ctx->pc = 0x273244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273240u;
    // 0x273244: 0x24a53808  addiu       $a1, $a1, 0x3808 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x273240u, 0x273248u)) {
        return;
    }
    ctx->pc = 0x273248u;
label_273248:
    // 0x273248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273248u;
    {
        const bool branch_taken_0x273248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273248u;
        // 0x27324c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273248) {
            ctx->pc = 0x273260u;
            goto label_273260;
        }
    }
    ctx->pc = 0x273250u;
    // 0x273250: 0x3631000a  ori         $s1, $s1, 0xA
    ctx->pc = 0x273250u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)10);
    // 0x273254: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x273254u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    // 0x273258: 0x36220004  ori         $v0, $s1, 0x4
    ctx->pc = 0x273258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
    // 0x27325c: 0x50880b  movn        $s1, $v0, $s0
    ctx->pc = 0x27325cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2));
label_273260:
    // 0x273260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273264: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273268: 0xc09cbb6  jal         func_272ED8
    ctx->pc = 0x273268u;
    SET_GPR_U32(ctx, 31, 0x273270u);
    ctx->pc = 0x27326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273268u;
    // 0x27326c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272ED8u, 0x273268u, 0x273270u)) {
        return;
    }
    ctx->pc = 0x273270u;
label_273270:
    // 0x273270: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x273270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x273274: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x273274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x273278: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x273278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27327c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x27327cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273280: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x273280u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273288: 0x3e00008  jr          $ra
    ctx->pc = 0x273288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273288u;
        // 0x27328c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273290u;
}
