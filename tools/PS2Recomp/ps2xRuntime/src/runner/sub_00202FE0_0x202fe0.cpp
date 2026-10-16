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

// Function: sub_00202FE0
// Address: 0x202fe0 - 0x203108
void sub_00202FE0_0x202fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202FE0_0x202fe0");
#endif

    switch (ctx->pc) {
        case 0x203010u: goto label_203010;
        case 0x203030u: goto label_203030;
        case 0x203040u: goto label_203040;
        case 0x203084u: goto label_203084;
        case 0x2030a0u: goto label_2030a0;
        case 0x2030c8u: goto label_2030c8;
        default: break;
    }

    ctx->pc = 0x202fe0u;

    // 0x202fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x202fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x202fe4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x202fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x202fe8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x202fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202fec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x202fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x202ff0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x202ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x202ff4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x202ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ff8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x202ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x202ffc: 0x26510120  addiu       $s1, $s2, 0x120
    ctx->pc = 0x202ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x203000: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x203000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203008: 0xc086f64  jal         func_21BD90
    ctx->pc = 0x203008u;
    SET_GPR_U32(ctx, 31, 0x203010u);
    ctx->pc = 0x20300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203008u;
    // 0x20300c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BD90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BD90u, 0x203008u, 0x203010u)) {
        return;
    }
    ctx->pc = 0x203010u;
label_203010:
    // 0x203010: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x203010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x203014: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x203014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x203018: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x203018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
    // 0x20301c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20301cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203020: 0xae40011c  sw          $zero, 0x11C($s2)
    ctx->pc = 0x203020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 0));
    // 0x203024: 0x24056000  addiu       $a1, $zero, 0x6000
    ctx->pc = 0x203024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x203028: 0xc086f8e  jal         func_21BE38
    ctx->pc = 0x203028u;
    SET_GPR_U32(ctx, 31, 0x203030u);
    ctx->pc = 0x20302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203028u;
    // 0x20302c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BE38u, 0x203028u, 0x203030u)) {
        return;
    }
    ctx->pc = 0x203030u;
label_203030:
    // 0x203030: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x203030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x203034: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x203034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203038: 0x240407ff  addiu       $a0, $zero, 0x7FF
    ctx->pc = 0x203038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x20303c: 0x0  nop
    ctx->pc = 0x20303cu;
    // NOP
label_203040:
    // 0x203040: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x203040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x203044: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x203044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x203048: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x203048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x20304c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20304cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x203050: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x203050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x203054: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x203054u;
    {
        const bool branch_taken_0x203054 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x203058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203054u;
        // 0x203058: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203054) {
            ctx->pc = 0x203040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203040;
        }
    }
    ctx->pc = 0x20305Cu;
    // 0x20305c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203060: 0x26631fff  addiu       $v1, $s3, 0x1FFF
    ctx->pc = 0x203060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 8191));
    // 0x203064: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x203064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x203068: 0x26440120  addiu       $a0, $s2, 0x120
    ctx->pc = 0x203068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x20306c: 0x262180b  movn        $v1, $s3, $v0
    ctx->pc = 0x20306cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19));
    // 0x203070: 0x31b43  sra         $v1, $v1, 13
    ctx->pc = 0x203070u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
    // 0x203074: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x203074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x203078: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x203078u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20307c: 0xc086f6a  jal         func_21BDA8
    ctx->pc = 0x20307Cu;
    SET_GPR_U32(ctx, 31, 0x203084u);
    ctx->pc = 0x203080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20307Cu;
    // 0x203080: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BDA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BDA8u, 0x20307Cu, 0x203084u)) {
        return;
    }
    ctx->pc = 0x203084u;
label_203084:
    // 0x203084: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x203084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x203088: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x203088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x20308c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x20308cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x203090: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x203090u;
    {
        const bool branch_taken_0x203090 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x203094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203090u;
        // 0x203094: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203090) {
            ctx->pc = 0x2030C0u;
            goto label_2030c0;
        }
    }
    ctx->pc = 0x203098u;
    // 0x203098: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x203098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x20309c: 0x0  nop
    ctx->pc = 0x20309cu;
    // NOP
label_2030a0:
    // 0x2030a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2030a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2030a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2030a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2030a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2030a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2030ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2030acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2030b0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2030b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2030b4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2030b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2030b8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2030B8u;
    {
        const bool branch_taken_0x2030b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2030b8) {
            ctx->pc = 0x2030BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2030B8u;
            // 0x2030bc: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2030A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2030a0;
        }
    }
    ctx->pc = 0x2030C0u;
label_2030c0:
    // 0x2030c0: 0x24a20100  addiu       $v0, $a1, 0x100
    ctx->pc = 0x2030c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x2030c4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2030c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2030c8:
    // 0x2030c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2030c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2030cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2030ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2030d0: 0x0  nop
    ctx->pc = 0x2030d0u;
    // NOP
    // 0x2030d4: 0x0  nop
    ctx->pc = 0x2030d4u;
    // NOP
    // 0x2030d8: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2030D8u;
    {
        const bool branch_taken_0x2030d8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2030DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030D8u;
        // 0x2030dc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030d8) {
            ctx->pc = 0x2030C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2030c8;
        }
    }
    ctx->pc = 0x2030E0u;
    // 0x2030e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2030e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2030e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2030e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2030e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2030e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2030ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2030ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2030f0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2030f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2030f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2030f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2030f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2030F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2030FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030F8u;
        // 0x2030fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2030F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203100u;
    // 0x203100: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x203100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x203104: 0x0  nop
    ctx->pc = 0x203104u;
    // NOP
    ctx->pc = 0x203108u;
}
