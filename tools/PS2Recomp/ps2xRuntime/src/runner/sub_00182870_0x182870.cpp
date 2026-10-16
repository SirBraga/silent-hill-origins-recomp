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

// Function: sub_00182870
// Address: 0x182870 - 0x182990
void sub_00182870_0x182870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182870_0x182870");
#endif

    switch (ctx->pc) {
        case 0x1828a0u: goto label_1828a0;
        case 0x1828b0u: goto label_1828b0;
        case 0x1828b8u: goto label_1828b8;
        case 0x182900u: goto label_182900;
        case 0x182910u: goto label_182910;
        case 0x18291cu: goto label_18291c;
        case 0x182938u: goto label_182938;
        default: break;
    }

    ctx->pc = 0x182870u;

    // 0x182870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x182870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x182874: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x182874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x182878: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x182878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x18287c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18287cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x182880: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x182880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x182884: 0x2484faf8  addiu       $a0, $a0, -0x508
    ctx->pc = 0x182884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966008));
    // 0x182888: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x182888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x18288c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x18288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x182890: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x182890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x182894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182898: 0xc06054c  jal         func_181530
    ctx->pc = 0x182898u;
    SET_GPR_U32(ctx, 31, 0x1828A0u);
    ctx->pc = 0x18289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182898u;
    // 0x18289c: 0xac40faf0  sw          $zero, -0x510($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966000), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181530u, 0x182898u, 0x1828A0u)) {
        return;
    }
    ctx->pc = 0x1828A0u;
label_1828a0:
    // 0x1828a0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1828a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1828a4: 0x2484faa8  addiu       $a0, $a0, -0x558
    ctx->pc = 0x1828a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965928));
    // 0x1828a8: 0xc0be632  jal         func_2F98C8
    ctx->pc = 0x1828A8u;
    SET_GPR_U32(ctx, 31, 0x1828B0u);
    ctx->pc = 0x1828ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1828A8u;
    // 0x1828ac: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F98C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F98C8u, 0x1828A8u, 0x1828B0u)) {
        return;
    }
    ctx->pc = 0x1828B0u;
label_1828b0:
    // 0x1828b0: 0xc060bde  jal         func_182F78
    ctx->pc = 0x1828B0u;
    SET_GPR_U32(ctx, 31, 0x1828B8u);
    ctx->pc = 0x182F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182F78u, 0x1828B0u, 0x1828B8u)) {
        return;
    }
    ctx->pc = 0x1828B8u;
label_1828b8:
    // 0x1828b8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1828b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1828bc: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x1828bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x1828c0: 0x8c65fa80  lw          $a1, -0x580($v1)
    ctx->pc = 0x1828c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6BFA80u));
    // 0x1828c4: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x1828c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x1828c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1828c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1828cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1828ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1828d0: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x1828d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1828d4: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x1828d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x1828d8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1828d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1828dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1828e0: 0xac65fa88  sw          $a1, -0x578($v1)
    ctx->pc = 0x1828e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BFA88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BFA88u, _value); } while (0);
    // 0x1828e4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1828e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828e8: 0xac86fa8c  sw          $a2, -0x574($a0)
    ctx->pc = 0x1828e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BFA8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BFA8Cu, _value); } while (0);
    // 0x1828ec: 0x24533b80  addiu       $s3, $v0, 0x3B80
    ctx->pc = 0x1828ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
    // 0x1828f0: 0xad26fa84  sw          $a2, -0x57C($t1)
    ctx->pc = 0x1828f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BFA84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BFA84u, _value); } while (0);
    // 0x1828f4: 0xace03b84  sw          $zero, 0x3B84($a3)
    ctx->pc = 0x1828f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6C3B84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C3B84u, _value); } while (0);
    // 0x1828f8: 0xad003b80  sw          $zero, 0x3B80($t0)
    ctx->pc = 0x1828f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6C3B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C3B80u, _value); } while (0);
    // 0x1828fc: 0x0  nop
    ctx->pc = 0x1828fcu;
    // NOP
label_182900:
    // 0x182900: 0x8e453b80  lw          $a1, 0x3B80($s2)
    ctx->pc = 0x182900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15232)));
    // 0x182904: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x182904u;
    {
        const bool branch_taken_0x182904 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x182908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182904u;
        // 0x182908: 0x2652823  subu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182904) {
            ctx->pc = 0x18292Cu;
            goto label_18292c;
        }
    }
    ctx->pc = 0x18290Cu;
    // 0x18290c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x18290cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
label_182910:
    // 0x182910: 0x2604fb80  addiu       $a0, $s0, -0x480
    ctx->pc = 0x182910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966144));
    // 0x182914: 0xc060bb4  jal         func_182ED0
    ctx->pc = 0x182914u;
    SET_GPR_U32(ctx, 31, 0x18291Cu);
    ctx->pc = 0x182918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182914u;
    // 0x182918: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182ED0u, 0x182914u, 0x18291Cu)) {
        return;
    }
    ctx->pc = 0x18291Cu;
label_18291c:
    // 0x18291c: 0x0  nop
    ctx->pc = 0x18291cu;
    // NOP
    // 0x182920: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x182920u;
    {
        const bool branch_taken_0x182920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182920u;
        // 0x182924: 0xae423b80  sw          $v0, 0x3B80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 15232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182920) {
            ctx->pc = 0x182910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182910;
        }
    }
    ctx->pc = 0x182928u;
    // 0x182928: 0x2605fb80  addiu       $a1, $s0, -0x480
    ctx->pc = 0x182928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966144));
label_18292c:
    // 0x18292c: 0x8e263b80  lw          $a2, 0x3B80($s1)
    ctx->pc = 0x18292cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15232)));
    // 0x182930: 0xc0bf6aa  jal         func_2FDAA8
    ctx->pc = 0x182930u;
    SET_GPR_U32(ctx, 31, 0x182938u);
    ctx->pc = 0x182934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182930u;
    // 0x182934: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDAA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDAA8u, 0x182930u, 0x182938u)) {
        return;
    }
    ctx->pc = 0x182938u;
label_182938:
    // 0x182938: 0x8e233b80  lw          $v1, 0x3B80($s1)
    ctx->pc = 0x182938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15232)));
    // 0x18293c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18293cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x182940: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x182940u;
    {
        const bool branch_taken_0x182940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182940u;
        // 0x182944: 0xae233b80  sw          $v1, 0x3B80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 15232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182940) {
            ctx->pc = 0x182900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182900;
        }
    }
    ctx->pc = 0x182948u;
    // 0x182948: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x182948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18294c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18294cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182950: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x182950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182954: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x182954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182958: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x182958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18295c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18295cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182960: 0x3e00008  jr          $ra
    ctx->pc = 0x182960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182960u;
        // 0x182964: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182968u;
    // 0x182968: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x182968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18296c: 0x0  nop
    ctx->pc = 0x18296cu;
    // NOP
    // 0x182970: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x182970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x182974: 0x0  nop
    ctx->pc = 0x182974u;
    // NOP
    // 0x182978: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x182978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18297c: 0x0  nop
    ctx->pc = 0x18297cu;
    // NOP
    // 0x182980: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x182980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x182984: 0x0  nop
    ctx->pc = 0x182984u;
    // NOP
    // 0x182988: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x182988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18298c: 0x0  nop
    ctx->pc = 0x18298cu;
    // NOP
    ctx->pc = 0x182990u;
}
