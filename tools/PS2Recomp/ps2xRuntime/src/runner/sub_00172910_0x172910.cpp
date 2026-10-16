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

// Function: sub_00172910
// Address: 0x172910 - 0x172a30
void sub_00172910_0x172910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172910_0x172910");
#endif

    switch (ctx->pc) {
        case 0x17296cu: goto label_17296c;
        case 0x172988u: goto label_172988;
        case 0x172998u: goto label_172998;
        case 0x1729acu: goto label_1729ac;
        case 0x1729c0u: goto label_1729c0;
        case 0x1729f0u: goto label_1729f0;
        default: break;
    }

    ctx->pc = 0x172910u;

    // 0x172910: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x172910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x172914: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x172914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x172918: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x172918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x17291c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x17291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x172920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172924: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x172924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x172928: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x172928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x17292c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x17292cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x172930: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x172930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x172934: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x172934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x172938: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x172938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x17293c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17293cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172940: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x172940u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x172944: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x172944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x172948: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x172948u;
    {
        const bool branch_taken_0x172948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172948u;
        // 0x17294c: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172948) {
            ctx->pc = 0x17296Cu;
            goto label_17296c;
        }
    }
    ctx->pc = 0x172950u;
    // 0x172950: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x172950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x172954: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x172954u;
    {
        const bool branch_taken_0x172954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172954u;
        // 0x172958: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172954) {
            ctx->pc = 0x172970u;
            goto label_172970;
        }
    }
    ctx->pc = 0x17295Cu;
    // 0x17295c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17295cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x172960: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172964: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x172964u;
    SET_GPR_U32(ctx, 31, 0x17296Cu);
    ctx->pc = 0x172968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172964u;
    // 0x172968: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x172964u, 0x17296Cu)) {
        return;
    }
    ctx->pc = 0x17296Cu;
label_17296c:
    // 0x17296c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17296cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_172970:
    // 0x172970: 0x26120064  addiu       $s2, $s0, 0x64
    ctx->pc = 0x172970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x172974: 0x245486d8  addiu       $s4, $v0, -0x7928
    ctx->pc = 0x172974u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936280));
    // 0x172978: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x172978u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
    // 0x17297c: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x17297cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x172980: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x172980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x172984: 0x0  nop
    ctx->pc = 0x172984u;
    // NOP
label_172988:
    // 0x172988: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x172988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x17298c: 0x8ed086d0  lw          $s0, -0x7930($s6)
    ctx->pc = 0x17298cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936272)));
    // 0x172990: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x172990u;
    SET_GPR_U32(ctx, 31, 0x172998u);
    ctx->pc = 0x172994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172990u;
    // 0x172994: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x172990u, 0x172998u)) {
        return;
    }
    ctx->pc = 0x172998u;
label_172998:
    // 0x172998: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x172998u;
    {
        const bool branch_taken_0x172998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172998u;
        // 0x17299c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172998) {
            ctx->pc = 0x1729C0u;
            goto label_1729c0;
        }
    }
    ctx->pc = 0x1729A0u;
    // 0x1729a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1729a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729a4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1729A4u;
    SET_GPR_U32(ctx, 31, 0x1729ACu);
    ctx->pc = 0x1729A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1729A4u;
    // 0x1729a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1729A4u, 0x1729ACu)) {
        return;
    }
    ctx->pc = 0x1729ACu;
label_1729ac:
    // 0x1729ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1729ACu;
    {
        const bool branch_taken_0x1729ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729ACu;
        // 0x1729b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729ac) {
            ctx->pc = 0x1729C0u;
            goto label_1729c0;
        }
    }
    ctx->pc = 0x1729B4u;
    // 0x1729b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1729b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729b8: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x1729B8u;
    SET_GPR_U32(ctx, 31, 0x1729C0u);
    ctx->pc = 0x1729BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1729B8u;
    // 0x1729bc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1729B8u, 0x1729C0u)) {
        return;
    }
    ctx->pc = 0x1729C0u;
label_1729c0:
    // 0x1729c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1729c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1729c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1729C4u;
    {
        const bool branch_taken_0x1729c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729C4u;
        // 0x1729c8: 0x8ee21a70  lw          $v0, 0x1A70($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 6768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729c4) {
            ctx->pc = 0x1729F0u;
            goto label_1729f0;
        }
    }
    ctx->pc = 0x1729CCu;
    // 0x1729cc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1729ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1729d0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1729D0u;
    {
        const bool branch_taken_0x1729d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1729d0) {
            ctx->pc = 0x1729D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1729D0u;
            // 0x1729d4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1729F4u;
            goto label_1729f4;
        }
    }
    ctx->pc = 0x1729D8u;
    // 0x1729d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1729d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1729dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1729DCu;
    {
        const bool branch_taken_0x1729dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729DCu;
        // 0x1729e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729dc) {
            ctx->pc = 0x1729F0u;
            goto label_1729f0;
        }
    }
    ctx->pc = 0x1729E4u;
    // 0x1729e4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1729e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1729e8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1729E8u;
    SET_GPR_U32(ctx, 31, 0x1729F0u);
    ctx->pc = 0x1729ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1729E8u;
    // 0x1729ec: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1729E8u, 0x1729F0u)) {
        return;
    }
    ctx->pc = 0x1729F0u;
label_1729f0:
    // 0x1729f0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1729f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1729f4:
    // 0x1729f4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1729f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1729f8: 0x661ffe3  bgez        $s3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1729F8u;
    {
        const bool branch_taken_0x1729f8 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1729FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729F8u;
        // 0x1729fc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729f8) {
            ctx->pc = 0x172988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172988;
        }
    }
    ctx->pc = 0x172A00u;
    // 0x172a00: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x172a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x172a04: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x172a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x172a08: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x172a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x172a0c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x172a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x172a10: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x172a10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x172a14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x172a14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172a18: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x172a18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172a1c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x172a1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172a20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172a24: 0x3e00008  jr          $ra
    ctx->pc = 0x172A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A24u;
        // 0x172a28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172A2Cu;
    // 0x172a2c: 0x0  nop
    ctx->pc = 0x172a2cu;
    // NOP
    ctx->pc = 0x172a30u;
}
