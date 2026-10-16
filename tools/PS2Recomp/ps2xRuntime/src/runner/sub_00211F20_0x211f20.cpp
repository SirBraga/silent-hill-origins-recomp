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

// Function: sub_00211F20
// Address: 0x211f20 - 0x212048
void sub_00211F20_0x211f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211F20_0x211f20");
#endif

    switch (ctx->pc) {
        case 0x211f78u: goto label_211f78;
        case 0x211f98u: goto label_211f98;
        case 0x211fecu: goto label_211fec;
        default: break;
    }

    ctx->pc = 0x211f20u;

    // 0x211f20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x211f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x211f24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x211f24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f28: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x211f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x211f2c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x211f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x211f30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x211f30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f34: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x211f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x211f38: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x211f38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f3c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x211f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x211f40: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x211f40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f44: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x211f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x211f48: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x211f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x211f4c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x211f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x211f50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x211f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x211f54: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x211f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x211f58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211f5c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x211f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x211f60: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x211f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x211f64: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x211f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x211f68: 0x8e8201cc  lw          $v0, 0x1CC($s4)
    ctx->pc = 0x211f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 460)));
    // 0x211f6c: 0x1ae00029  blez        $s7, . + 4 + (0x29 << 2)
    ctx->pc = 0x211F6Cu;
    {
        const bool branch_taken_0x211f6c = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x211F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F6Cu;
        // 0x211f70: 0x8c560018  lw          $s6, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f6c) {
            ctx->pc = 0x212014u;
            goto label_212014;
        }
    }
    ctx->pc = 0x211F74u;
    // 0x211f74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x211f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_211f78:
    // 0x211f78: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x211f78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x211f7c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x211f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211f80: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x211f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x211f84: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x211f84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x211f88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x211f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211f8c: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x211f8cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211f90: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x211F90u;
    {
        const bool branch_taken_0x211f90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F90u;
        // 0x211f94: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f90) {
            ctx->pc = 0x212004u;
            goto label_212004;
        }
    }
    ctx->pc = 0x211F98u;
label_211f98:
    // 0x211f98: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x211f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211f9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x211f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x211fa0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x211fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211fa4: 0x240c2  srl         $t0, $v0, 3
    ctx->pc = 0x211fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x211fa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x211fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x211fac: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x211facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x211fb0: 0x33082  srl         $a2, $v1, 2
    ctx->pc = 0x211fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x211fb4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x211fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x211fb8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x211fb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211fbc: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x211fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x211fc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x211fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211fc4: 0x338c2  srl         $a3, $v1, 3
    ctx->pc = 0x211fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x211fc8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x211fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x211fcc: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x211fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x211fd0: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x211fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x211fd4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x211fd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211fd8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x211FD8u;
    {
        const bool branch_taken_0x211fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FD8u;
        // 0x211fdc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fd8) {
            ctx->pc = 0x211FECu;
            goto label_211fec;
        }
    }
    ctx->pc = 0x211FE0u;
    // 0x211fe0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x211fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211fe4: 0xc0844c0  jal         func_211300
    ctx->pc = 0x211FE4u;
    SET_GPR_U32(ctx, 31, 0x211FECu);
    ctx->pc = 0x211FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211FE4u;
    // 0x211fe8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x211300u, 0x211FE4u, 0x211FECu)) {
        return;
    }
    ctx->pc = 0x211FECu;
label_211fec:
    // 0x211fec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x211fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211ff0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x211ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x211ff4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x211ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x211ff8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x211ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x211ffc: 0x1640ffe6  bnez        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x211FFCu;
    {
        const bool branch_taken_0x211ffc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x212000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FFCu;
        // 0x212000: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ffc) {
            ctx->pc = 0x211F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211f98;
        }
    }
    ctx->pc = 0x212004u;
label_212004:
    // 0x212004: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x212004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212008: 0x77102a  slt         $v0, $v1, $s7
    ctx->pc = 0x212008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x21200c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x21200Cu;
    {
        const bool branch_taken_0x21200c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21200Cu;
        // 0x212010: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21200c) {
            ctx->pc = 0x211F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211f78;
        }
    }
    ctx->pc = 0x212014u;
label_212014:
    // 0x212014: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x212014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x212018: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x212018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21201c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x21201cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x212020: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x212020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x212024: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x212024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x212028: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x212028u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21202c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x21202cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212030: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x212030u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212034: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x212034u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21203c: 0x3e00008  jr          $ra
    ctx->pc = 0x21203Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21203Cu;
        // 0x212040: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21203Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212044u;
    // 0x212044: 0x0  nop
    ctx->pc = 0x212044u;
    // NOP
    ctx->pc = 0x212048u;
}
