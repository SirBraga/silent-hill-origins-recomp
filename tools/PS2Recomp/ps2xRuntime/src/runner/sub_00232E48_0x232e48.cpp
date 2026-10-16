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

// Function: sub_00232E48
// Address: 0x232e48 - 0x233228
void sub_00232E48_0x232e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232E48_0x232e48");
#endif

    switch (ctx->pc) {
        case 0x23303cu: goto label_23303c;
        case 0x2331e4u: goto label_2331e4;
        case 0x2331f0u: goto label_2331f0;
        default: break;
    }

    ctx->pc = 0x232e48u;

    // 0x232e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232e4c: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x232e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x232e50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232e54: 0x30c300f8  andi        $v1, $a2, 0xF8
    ctx->pc = 0x232e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)248);
    // 0x232e58: 0xa0a20020  sb          $v0, 0x20($a1)
    ctx->pc = 0x232e58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x232e5c: 0x30c89000  andi        $t0, $a2, 0x9000
    ctx->pc = 0x232e5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)36864);
    // 0x232e60: 0xa0a30021  sb          $v1, 0x21($a1)
    ctx->pc = 0x232e60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x232e64: 0x30c70f00  andi        $a3, $a2, 0xF00
    ctx->pc = 0x232e64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x232e68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x232e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x232e6c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x232e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x232e70: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x232E70u;
    {
        const bool branch_taken_0x232e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E70u;
        // 0x232e74: 0x30c66000  andi        $a2, $a2, 0x6000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)24576);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e70) {
            ctx->pc = 0x2331F0u;
            goto label_2331f0;
        }
    }
    ctx->pc = 0x232E78u;
    // 0x232e78: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x232e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x232e7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232e80: 0x2442aa40  addiu       $v0, $v0, -0x55C0
    ctx->pc = 0x232e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945344));
    // 0x232e84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232e88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x232e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232e8c: 0x800008  jr          $a0
    ctx->pc = 0x232E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232E94u: goto label_232e94;
            case 0x232EA8u: goto label_232ea8;
            case 0x233090u: goto label_233090;
            case 0x233160u: goto label_233160;
            case 0x2331F0u: goto label_2331f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232E8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x232E94u;
label_232e94:
    // 0x232e94: 0x14c000ce  bnez        $a2, . + 4 + (0xCE << 2)
    ctx->pc = 0x232E94u;
    {
        const bool branch_taken_0x232e94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x232E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E94u;
        // 0x232e98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e94) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x232E9Cu;
    // 0x232e9c: 0x150000cc  bnez        $t0, . + 4 + (0xCC << 2)
    ctx->pc = 0x232E9Cu;
    {
        const bool branch_taken_0x232e9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x232e9c) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x232EA4u;
    // 0x232ea4: 0x0  nop
    ctx->pc = 0x232ea4u;
    // NOP
label_232ea8:
    // 0x232ea8: 0x14e00018  bnez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x232EA8u;
    {
        const bool branch_taken_0x232ea8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x232EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EA8u;
        // 0x232eac: 0xe81025  or          $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ea8) {
            ctx->pc = 0x232F0Cu;
            goto label_232f0c;
        }
    }
    ctx->pc = 0x232EB0u;
    // 0x232eb0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x232eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x232eb4: 0x2444fffc  addiu       $a0, $v0, -0x4
    ctx->pc = 0x232eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x232eb8: 0x2c83001d  sltiu       $v1, $a0, 0x1D
    ctx->pc = 0x232eb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x232ebc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x232EBCu;
    {
        const bool branch_taken_0x232ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x232EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EBCu;
        // 0x232ec0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ebc) {
            ctx->pc = 0x232F04u;
            goto label_232f04;
        }
    }
    ctx->pc = 0x232EC4u;
    // 0x232ec4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x232ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x232ec8: 0x2442aa60  addiu       $v0, $v0, -0x55A0
    ctx->pc = 0x232ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945376));
    // 0x232ecc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232ed0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x232ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232ed4: 0x800008  jr          $a0
    ctx->pc = 0x232ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232EDCu: goto label_232edc;
            case 0x232EE8u: goto label_232ee8;
            case 0x232EF4u: goto label_232ef4;
            case 0x232EFCu: goto label_232efc;
            case 0x232F04u: goto label_232f04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232ED4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x232EDCu;
label_232edc:
    // 0x232edc: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x232edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x232ee0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x232EE0u;
    {
        const bool branch_taken_0x232ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EE0u;
        // 0x232ee4: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ee0) {
            ctx->pc = 0x232F08u;
            goto label_232f08;
        }
    }
    ctx->pc = 0x232EE8u;
label_232ee8:
    // 0x232ee8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x232ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x232eec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x232EECu;
    {
        const bool branch_taken_0x232eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EECu;
        // 0x232ef0: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232eec) {
            ctx->pc = 0x232F08u;
            goto label_232f08;
        }
    }
    ctx->pc = 0x232EF4u;
label_232ef4:
    // 0x232ef4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x232EF4u;
    {
        const bool branch_taken_0x232ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EF4u;
        // 0x232ef8: 0x24070600  addiu       $a3, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ef4) {
            ctx->pc = 0x232F08u;
            goto label_232f08;
        }
    }
    ctx->pc = 0x232EFCu;
label_232efc:
    // 0x232efc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x232EFCu;
    {
        const bool branch_taken_0x232efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EFCu;
        // 0x232f00: 0x24070500  addiu       $a3, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232efc) {
            ctx->pc = 0x232F08u;
            goto label_232f08;
        }
    }
    ctx->pc = 0x232F04u;
label_232f04:
    // 0x232f04: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x232f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_232f08:
    // 0x232f08: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x232f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_232f0c:
    // 0x232f0c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x232f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x232f10: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x232f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x232f14: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x232f14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x232f18: 0x10c30051  beq         $a2, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x232F18u;
    {
        const bool branch_taken_0x232f18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x232F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F18u;
        // 0x232f1c: 0xa0a20023  sb          $v0, 0x23($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f18) {
            ctx->pc = 0x233060u;
            goto label_233060;
        }
    }
    ctx->pc = 0x232F20u;
    // 0x232f20: 0x28c22001  slti        $v0, $a2, 0x2001
    ctx->pc = 0x232f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x232f24: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x232F24u;
    {
        const bool branch_taken_0x232f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232f24) {
            ctx->pc = 0x232F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232F24u;
            // 0x232f28: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232F3Cu;
            goto label_232f3c;
        }
    }
    ctx->pc = 0x232F2Cu;
    // 0x232f2c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x232F2Cu;
    {
        const bool branch_taken_0x232f2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F2Cu;
        // 0x232f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f2c) {
            ctx->pc = 0x232F4Cu;
            goto label_232f4c;
        }
    }
    ctx->pc = 0x232F34u;
    // 0x232f34: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x232F34u;
    {
        const bool branch_taken_0x232f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232f34) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x232F3Cu;
label_232f3c:
    // 0x232f3c: 0x50c20036  beql        $a2, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x232F3Cu;
    {
        const bool branch_taken_0x232f3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x232f3c) {
            ctx->pc = 0x232F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232F3Cu;
            // 0x232f40: 0x8ca30014  lw          $v1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233018u;
            goto label_233018;
        }
    }
    ctx->pc = 0x232F44u;
    // 0x232f44: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x232F44u;
    {
        const bool branch_taken_0x232f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F44u;
        // 0x232f48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f44) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x232F4Cu;
label_232f4c:
    // 0x232f4c: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x232f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x232f50: 0x10e20024  beq         $a3, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x232F50u;
    {
        const bool branch_taken_0x232f50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x232F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F50u;
        // 0x232f54: 0x28e20501  slti        $v0, $a3, 0x501 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1281) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f50) {
            ctx->pc = 0x232FE4u;
            goto label_232fe4;
        }
    }
    ctx->pc = 0x232F58u;
    // 0x232f58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232F58u;
    {
        const bool branch_taken_0x232f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F58u;
        // 0x232f5c: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f58) {
            ctx->pc = 0x232F70u;
            goto label_232f70;
        }
    }
    ctx->pc = 0x232F60u;
    // 0x232f60: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x232F60u;
    {
        const bool branch_taken_0x232f60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x232F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F60u;
        // 0x232f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f60) {
            ctx->pc = 0x232F84u;
            goto label_232f84;
        }
    }
    ctx->pc = 0x232F68u;
    // 0x232f68: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x232F68u;
    {
        const bool branch_taken_0x232f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232f68) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x232F70u;
label_232f70:
    // 0x232f70: 0x24020600  addiu       $v0, $zero, 0x600
    ctx->pc = 0x232f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x232f74: 0x10e2000f  beq         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x232F74u;
    {
        const bool branch_taken_0x232f74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x232F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F74u;
        // 0x232f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f74) {
            ctx->pc = 0x232FB4u;
            goto label_232fb4;
        }
    }
    ctx->pc = 0x232F7Cu;
    // 0x232f7c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x232F7Cu;
    {
        const bool branch_taken_0x232f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232f7c) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x232F84u;
label_232f84:
    // 0x232f84: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x232f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x232f88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x232F88u;
    {
        const bool branch_taken_0x232f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F88u;
        // 0x232f8c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f88) {
            ctx->pc = 0x232FA8u;
            goto label_232fa8;
        }
    }
    ctx->pc = 0x232F90u;
    // 0x232f90: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232F90u;
    {
        const bool branch_taken_0x232f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x232F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F90u;
        // 0x232f94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f90) {
            ctx->pc = 0x232FA8u;
            goto label_232fa8;
        }
    }
    ctx->pc = 0x232F98u;
    // 0x232f98: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x232f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x232f9c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x232f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x232fa0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x232FA0u;
    {
        const bool branch_taken_0x232fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FA0u;
        // 0x232fa4: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fa0) {
            ctx->pc = 0x2331DCu;
            goto label_2331dc;
        }
    }
    ctx->pc = 0x232FA8u;
label_232fa8:
    // 0x232fa8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x232fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x232fac: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x232FACu;
    {
        const bool branch_taken_0x232fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FACu;
        // 0x232fb0: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fac) {
            ctx->pc = 0x233214u;
            goto label_233214;
        }
    }
    ctx->pc = 0x232FB4u;
label_232fb4:
    // 0x232fb4: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x232fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x232fb8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x232FB8u;
    {
        const bool branch_taken_0x232fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FB8u;
        // 0x232fbc: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fb8) {
            ctx->pc = 0x232FD8u;
            goto label_232fd8;
        }
    }
    ctx->pc = 0x232FC0u;
    // 0x232fc0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232FC0u;
    {
        const bool branch_taken_0x232fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x232FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FC0u;
        // 0x232fc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fc0) {
            ctx->pc = 0x232FD8u;
            goto label_232fd8;
        }
    }
    ctx->pc = 0x232FC8u;
    // 0x232fc8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x232fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x232fcc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x232fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x232fd0: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x232FD0u;
    {
        const bool branch_taken_0x232fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FD0u;
        // 0x232fd4: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fd0) {
            ctx->pc = 0x2331DCu;
            goto label_2331dc;
        }
    }
    ctx->pc = 0x232FD8u;
label_232fd8:
    // 0x232fd8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x232fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x232fdc: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x232FDCu;
    {
        const bool branch_taken_0x232fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FDCu;
        // 0x232fe0: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fdc) {
            ctx->pc = 0x233214u;
            goto label_233214;
        }
    }
    ctx->pc = 0x232FE4u;
label_232fe4:
    // 0x232fe4: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x232fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x232fe8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x232FE8u;
    {
        const bool branch_taken_0x232fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FE8u;
        // 0x232fec: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fe8) {
            ctx->pc = 0x233008u;
            goto label_233008;
        }
    }
    ctx->pc = 0x232FF0u;
    // 0x232ff0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232FF0u;
    {
        const bool branch_taken_0x232ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x232FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FF0u;
        // 0x232ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ff0) {
            ctx->pc = 0x233008u;
            goto label_233008;
        }
    }
    ctx->pc = 0x232FF8u;
    // 0x232ff8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x232ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x232ffc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x232ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x233000: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x233000u;
    {
        const bool branch_taken_0x233000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233000u;
        // 0x233004: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233000) {
            ctx->pc = 0x2331DCu;
            goto label_2331dc;
        }
    }
    ctx->pc = 0x233008u;
label_233008:
    // 0x233008: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x233008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23300c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x23300Cu;
    {
        const bool branch_taken_0x23300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23300Cu;
        // 0x233010: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23300c) {
            ctx->pc = 0x233214u;
            goto label_233214;
        }
    }
    ctx->pc = 0x233014u;
    // 0x233014: 0x0  nop
    ctx->pc = 0x233014u;
    // NOP
label_233018:
    // 0x233018: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x233018u;
    {
        const bool branch_taken_0x233018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233018u;
        // 0x23301c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233018) {
            ctx->pc = 0x233038u;
            goto label_233038;
        }
    }
    ctx->pc = 0x233020u;
    // 0x233020: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233020u;
    {
        const bool branch_taken_0x233020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233020u;
        // 0x233024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233020) {
            ctx->pc = 0x233038u;
            goto label_233038;
        }
    }
    ctx->pc = 0x233028u;
    // 0x233028: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x233028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x23302c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23302cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x233030: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x233030u;
    {
        const bool branch_taken_0x233030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233030u;
        // 0x233034: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233030) {
            ctx->pc = 0x2331DCu;
            goto label_2331dc;
        }
    }
    ctx->pc = 0x233038u;
label_233038:
    // 0x233038: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x233038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23303c:
    // 0x23303c: 0x30e60f00  andi        $a2, $a3, 0xF00
    ctx->pc = 0x23303cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3840);
    // 0x233040: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x233040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x233044: 0x10c20073  beq         $a2, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x233044u;
    {
        const bool branch_taken_0x233044 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x233048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233044u;
        // 0x233048: 0xaca30014  sw          $v1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233044) {
            ctx->pc = 0x233214u;
            goto label_233214;
        }
    }
    ctx->pc = 0x23304Cu;
    // 0x23304c: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x23304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x233050: 0x10c20070  beq         $a2, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x233050u;
    {
        const bool branch_taken_0x233050 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x233054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233050u;
        // 0x233054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233050) {
            ctx->pc = 0x233214u;
            goto label_233214;
        }
    }
    ctx->pc = 0x233058u;
    // 0x233058: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x233058u;
    {
        const bool branch_taken_0x233058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233058) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x233060u;
label_233060:
    // 0x233060: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x233060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x233064: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x233064u;
    {
        const bool branch_taken_0x233064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233064u;
        // 0x233068: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233064) {
            ctx->pc = 0x233088u;
            goto label_233088;
        }
    }
    ctx->pc = 0x23306Cu;
    // 0x23306c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23306Cu;
    {
        const bool branch_taken_0x23306c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23306Cu;
        // 0x233070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23306c) {
            ctx->pc = 0x233088u;
            goto label_233088;
        }
    }
    ctx->pc = 0x233074u;
    // 0x233074: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x233074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x233078: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x233078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x23307c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x23307Cu;
    {
        const bool branch_taken_0x23307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23307Cu;
        // 0x233080: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23307c) {
            ctx->pc = 0x2331DCu;
            goto label_2331dc;
        }
    }
    ctx->pc = 0x233084u;
    // 0x233084: 0x0  nop
    ctx->pc = 0x233084u;
    // NOP
label_233088:
    // 0x233088: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x233088u;
    {
        const bool branch_taken_0x233088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233088u;
        // 0x23308c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233088) {
            ctx->pc = 0x23303Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23303c;
        }
    }
    ctx->pc = 0x233090u;
label_233090:
    // 0x233090: 0x1500004f  bnez        $t0, . + 4 + (0x4F << 2)
    ctx->pc = 0x233090u;
    {
        const bool branch_taken_0x233090 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x233094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233090u;
        // 0x233094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233090) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x233098u;
    // 0x233098: 0x14c0004d  bnez        $a2, . + 4 + (0x4D << 2)
    ctx->pc = 0x233098u;
    {
        const bool branch_taken_0x233098 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x233098) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x2330A0u;
    // 0x2330a0: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x2330a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2330a4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2330A4u;
    {
        const bool branch_taken_0x2330a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2330A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330A4u;
        // 0x2330a8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330a4) {
            ctx->pc = 0x2330E0u;
            goto label_2330e0;
        }
    }
    ctx->pc = 0x2330ACu;
    // 0x2330ac: 0x24423c90  addiu       $v0, $v0, 0x3C90
    ctx->pc = 0x2330acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
    // 0x2330b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2330b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2330b4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2330B4u;
    {
        const bool branch_taken_0x2330b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2330b4) {
            ctx->pc = 0x2330D8u;
            goto label_2330d8;
        }
    }
    ctx->pc = 0x2330BCu;
    // 0x2330bc: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2330bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2330c0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2330C0u;
    {
        const bool branch_taken_0x2330c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2330C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330C0u;
        // 0x2330c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330c0) {
            ctx->pc = 0x2330D8u;
            goto label_2330d8;
        }
    }
    ctx->pc = 0x2330C8u;
    // 0x2330c8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2330c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2330cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2330ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2330d0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2330D0u;
    {
        const bool branch_taken_0x2330d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2330D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330D0u;
        // 0x2330d4: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330d0) {
            ctx->pc = 0x2331DCu;
            goto label_2331dc;
        }
    }
    ctx->pc = 0x2330D8u;
label_2330d8:
    // 0x2330d8: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2330D8u;
    {
        const bool branch_taken_0x2330d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2330d8) {
            ctx->pc = 0x2330ECu;
            goto label_2330ec;
        }
    }
    ctx->pc = 0x2330E0u;
label_2330e0:
    // 0x2330e0: 0x8f828428  lw          $v0, -0x7BD8($gp)
    ctx->pc = 0x2330e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935592)));
    // 0x2330e4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2330e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2330e8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2330e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_2330ec:
    // 0x2330ec: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2330ECu;
    {
        const bool branch_taken_0x2330ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2330F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330ECu;
        // 0x2330f0: 0x8f848eac  lw          $a0, -0x7154($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330ec) {
            ctx->pc = 0x233120u;
            goto label_233120;
        }
    }
    ctx->pc = 0x2330F4u;
    // 0x2330f4: 0x50e4000b  beql        $a3, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2330F4u;
    {
        const bool branch_taken_0x2330f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x2330f4) {
            ctx->pc = 0x2330F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2330F4u;
            // 0x2330f8: 0x8ca30014  lw          $v1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233124u;
            goto label_233124;
        }
    }
    ctx->pc = 0x2330FCu;
    // 0x2330fc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2330fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x233100: 0x24423c90  addiu       $v0, $v0, 0x3C90
    ctx->pc = 0x233100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
    // 0x233104: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x233104u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x703CA4u));
    // 0x233108: 0x50e30006  beql        $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x233108u;
    {
        const bool branch_taken_0x233108 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x233108) {
            ctx->pc = 0x23310Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233108u;
            // 0x23310c: 0x8ca30014  lw          $v1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233124u;
            goto label_233124;
        }
    }
    ctx->pc = 0x233110u;
    // 0x233110: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x233110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x233114: 0x14e2002e  bne         $a3, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x233114u;
    {
        const bool branch_taken_0x233114 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x233118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233114u;
        // 0x233118: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233114) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x23311Cu;
    // 0x23311c: 0x0  nop
    ctx->pc = 0x23311cu;
    // NOP
label_233120:
    // 0x233120: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x233120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_233124:
    // 0x233124: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x233124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x233128: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233128u;
    {
        const bool branch_taken_0x233128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233128u;
        // 0x23312c: 0x87380a  movz        $a3, $a0, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233128) {
            ctx->pc = 0x233148u;
            goto label_233148;
        }
    }
    ctx->pc = 0x233130u;
    // 0x233130: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x233130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x233134: 0x50e20008  beql        $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233134u;
    {
        const bool branch_taken_0x233134 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x233134) {
            ctx->pc = 0x233138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233134u;
            // 0x233138: 0x71203  sra         $v0, $a3, 8 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233158u;
            goto label_233158;
        }
    }
    ctx->pc = 0x23313Cu;
    // 0x23313c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x23313Cu;
    {
        const bool branch_taken_0x23313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23313Cu;
        // 0x233140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23313c) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x233144u;
    // 0x233144: 0x0  nop
    ctx->pc = 0x233144u;
    // NOP
label_233148:
    // 0x233148: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x233148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23314c: 0x14e20020  bne         $a3, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23314Cu;
    {
        const bool branch_taken_0x23314c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x233150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23314Cu;
        // 0x233150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23314c) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x233154u;
    // 0x233154: 0x71203  sra         $v0, $a3, 8
    ctx->pc = 0x233154u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 8));
label_233158:
    // 0x233158: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x233158u;
    {
        const bool branch_taken_0x233158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233158u;
        // 0x23315c: 0xa0a20023  sb          $v0, 0x23($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233158) {
            ctx->pc = 0x233214u;
            goto label_233214;
        }
    }
    ctx->pc = 0x233160u;
label_233160:
    // 0x233160: 0x1500001b  bnez        $t0, . + 4 + (0x1B << 2)
    ctx->pc = 0x233160u;
    {
        const bool branch_taken_0x233160 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x233164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233160u;
        // 0x233164: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233160) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x233168u;
    // 0x233168: 0x14c00019  bnez        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x233168u;
    {
        const bool branch_taken_0x233168 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x233168) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x233170u;
    // 0x233170: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x233170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x233174: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x233174u;
    {
        const bool branch_taken_0x233174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233174u;
        // 0x233178: 0x8f8284cc  lw          $v0, -0x7B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233174) {
            ctx->pc = 0x233198u;
            goto label_233198;
        }
    }
    ctx->pc = 0x23317Cu;
    // 0x23317c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23317Cu;
    {
        const bool branch_taken_0x23317c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23317Cu;
        // 0x233180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23317c) {
            ctx->pc = 0x233198u;
            goto label_233198;
        }
    }
    ctx->pc = 0x233184u;
    // 0x233184: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x233184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x233188: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x233188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x23318c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23318Cu;
    {
        const bool branch_taken_0x23318c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23318Cu;
        // 0x233190: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23318c) {
            ctx->pc = 0x2331DCu;
            goto label_2331dc;
        }
    }
    ctx->pc = 0x233194u;
    // 0x233194: 0x0  nop
    ctx->pc = 0x233194u;
    // NOP
label_233198:
    // 0x233198: 0x8f8284cc  lw          $v0, -0x7B34($gp)
    ctx->pc = 0x233198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
    // 0x23319c: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x23319Cu;
    {
        const bool branch_taken_0x23319c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23319Cu;
        // 0x2331a0: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23319c) {
            ctx->pc = 0x2331F8u;
            goto label_2331f8;
        }
    }
    ctx->pc = 0x2331A4u;
    // 0x2331a4: 0x8f8384cc  lw          $v1, -0x7B34($gp)
    ctx->pc = 0x2331a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
    // 0x2331a8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2331a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2331ac: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2331ACu;
    {
        const bool branch_taken_0x2331ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2331B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331ACu;
        // 0x2331b0: 0x24020900  addiu       $v0, $zero, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331ac) {
            ctx->pc = 0x2331C8u;
            goto label_2331c8;
        }
    }
    ctx->pc = 0x2331B4u;
    // 0x2331b4: 0x24020700  addiu       $v0, $zero, 0x700
    ctx->pc = 0x2331b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x2331b8: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2331B8u;
    {
        const bool branch_taken_0x2331b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2331BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331B8u;
        // 0x2331bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331b8) {
            ctx->pc = 0x2331D0u;
            goto label_2331d0;
        }
    }
    ctx->pc = 0x2331C0u;
    // 0x2331c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2331C0u;
    {
        const bool branch_taken_0x2331c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331C0u;
        // 0x2331c4: 0x8f8284cc  lw          $v0, -0x7B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331c0) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x2331C8u;
label_2331c8:
    // 0x2331c8: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2331C8u;
    {
        const bool branch_taken_0x2331c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2331CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331C8u;
        // 0x2331cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331c8) {
            ctx->pc = 0x2331F8u;
            goto label_2331f8;
        }
    }
    ctx->pc = 0x2331D0u;
label_2331d0:
    // 0x2331d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2331d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2331d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2331d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2331d8: 0x3484000d  ori         $a0, $a0, 0xD
    ctx->pc = 0x2331d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
label_2331dc:
    // 0x2331dc: 0xc092848  jal         func_24A120
    ctx->pc = 0x2331DCu;
    SET_GPR_U32(ctx, 31, 0x2331E4u);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2331DCu, 0x2331E4u)) {
        return;
    }
    ctx->pc = 0x2331E4u;
label_2331e4:
    // 0x2331e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2331e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331e8: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2331E8u;
    SET_GPR_U32(ctx, 31, 0x2331F0u);
    ctx->pc = 0x2331ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2331E8u;
    // 0x2331ec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2331E8u, 0x2331F0u)) {
        return;
    }
    ctx->pc = 0x2331F0u;
label_2331f0:
    // 0x2331f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2331F0u;
    {
        const bool branch_taken_0x2331f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331F0u;
        // 0x2331f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331f0) {
            ctx->pc = 0x233218u;
            goto label_233218;
        }
    }
    ctx->pc = 0x2331F8u;
label_2331f8:
    // 0x2331f8: 0x8f8284cc  lw          $v0, -0x7B34($gp)
    ctx->pc = 0x2331f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
label_2331fc:
    // 0x2331fc: 0x24070900  addiu       $a3, $zero, 0x900
    ctx->pc = 0x2331fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
    // 0x233200: 0x24040700  addiu       $a0, $zero, 0x700
    ctx->pc = 0x233200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x233204: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x233204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x233208: 0x82380a  movz        $a3, $a0, $v0
    ctx->pc = 0x233208u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4));
    // 0x23320c: 0x71a03  sra         $v1, $a3, 8
    ctx->pc = 0x23320cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 8));
    // 0x233210: 0xa0a30023  sb          $v1, 0x23($a1)
    ctx->pc = 0x233210u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 35), (uint8_t)GPR_U32(ctx, 3));
label_233214:
    // 0x233214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233218:
    // 0x233218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x233218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23321c: 0x3e00008  jr          $ra
    ctx->pc = 0x23321Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23321Cu;
        // 0x233220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23321Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233224u;
    // 0x233224: 0x0  nop
    ctx->pc = 0x233224u;
    // NOP
    ctx->pc = 0x233228u;
}
