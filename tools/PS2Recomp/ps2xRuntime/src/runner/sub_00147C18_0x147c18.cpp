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

// Function: sub_00147C18
// Address: 0x147c18 - 0x147db0
void sub_00147C18_0x147c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147C18_0x147c18");
#endif

    switch (ctx->pc) {
        case 0x147c34u: goto label_147c34;
        case 0x147c48u: goto label_147c48;
        case 0x147c60u: goto label_147c60;
        case 0x147cd4u: goto label_147cd4;
        case 0x147d1cu: goto label_147d1c;
        case 0x147d8cu: goto label_147d8c;
        default: break;
    }

    ctx->pc = 0x147c18u;

    // 0x147c18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x147c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x147c1c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x147c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x147c20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x147c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x147c24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x147c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x147c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x147c2c: 0xc051e1e  jal         func_147878
    ctx->pc = 0x147C2Cu;
    SET_GPR_U32(ctx, 31, 0x147C34u);
    ctx->pc = 0x147C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C2Cu;
    // 0x147c30: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x147878u, 0x147C2Cu, 0x147C34u)) {
        return;
    }
    ctx->pc = 0x147C34u;
label_147c34:
    // 0x147c34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x147c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x147c38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x147c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c3c: 0x8c46ee68  lw          $a2, -0x1198($v0)
    ctx->pc = 0x147c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BEE68u));
    // 0x147c40: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x147C40u;
    SET_GPR_U32(ctx, 31, 0x147C48u);
    ctx->pc = 0x147C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C40u;
    // 0x147c44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x147C40u, 0x147C48u)) {
        return;
    }
    ctx->pc = 0x147C48u;
label_147c48:
    // 0x147c48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x147c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147c4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x147c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147c50: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x147C50u;
    {
        const bool branch_taken_0x147c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C50u;
        // 0x147c54: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c50) {
            ctx->pc = 0x147DA0u;
            goto label_147da0;
        }
    }
    ctx->pc = 0x147C58u;
    // 0x147c58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x147c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147c5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x147c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_147c60:
    // 0x147c60: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x147c60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x147c64: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x147C64u;
    {
        const bool branch_taken_0x147c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C64u;
        // 0x147c68: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c64) {
            ctx->pc = 0x147D70u;
            goto label_147d70;
        }
    }
    ctx->pc = 0x147C6Cu;
    // 0x147c6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x147c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x147c70: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x147c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x147c74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147c78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x147c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147c7c: 0x800008  jr          $a0
    ctx->pc = 0x147C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147C84u: goto label_147c84;
            case 0x147C98u: goto label_147c98;
            case 0x147CACu: goto label_147cac;
            case 0x147CBCu: goto label_147cbc;
            case 0x147CDCu: goto label_147cdc;
            case 0x147CF0u: goto label_147cf0;
            case 0x147D04u: goto label_147d04;
            case 0x147D24u: goto label_147d24;
            case 0x147D44u: goto label_147d44;
            case 0x147D64u: goto label_147d64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147C7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x147C84u;
label_147c84:
    // 0x147c84: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x147c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147c88: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x147c88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x147c8c: 0x24c61360  addiu       $a2, $a2, 0x1360
    ctx->pc = 0x147c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4960));
    // 0x147c90: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x147C90u;
    {
        const bool branch_taken_0x147c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C90u;
        // 0x147c94: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c90) {
            ctx->pc = 0x147D14u;
            goto label_147d14;
        }
    }
    ctx->pc = 0x147C98u;
label_147c98:
    // 0x147c98: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x147c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147c9c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x147c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x147ca0: 0x24c61360  addiu       $a2, $a2, 0x1360
    ctx->pc = 0x147ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4960));
    // 0x147ca4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x147CA4u;
    {
        const bool branch_taken_0x147ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CA4u;
        // 0x147ca8: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ca4) {
            ctx->pc = 0x147D14u;
            goto label_147d14;
        }
    }
    ctx->pc = 0x147CACu;
label_147cac:
    // 0x147cac: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x147cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147cb0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x147cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x147cb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x147CB4u;
    {
        const bool branch_taken_0x147cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CB4u;
        // 0x147cb8: 0x262500f8  addiu       $a1, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cb4) {
            ctx->pc = 0x147CC8u;
            goto label_147cc8;
        }
    }
    ctx->pc = 0x147CBCu;
label_147cbc:
    // 0x147cbc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x147cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147cc0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x147cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x147cc4: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x147cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_147cc8:
    // 0x147cc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x147cc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ccc: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x147CCCu;
    SET_GPR_U32(ctx, 31, 0x147CD4u);
    ctx->pc = 0x147CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147CCCu;
    // 0x147cd0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x147CCCu, 0x147CD4u)) {
        return;
    }
    ctx->pc = 0x147CD4u;
label_147cd4:
    // 0x147cd4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x147CD4u;
    {
        const bool branch_taken_0x147cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CD4u;
        // 0x147cd8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cd4) {
            ctx->pc = 0x147D74u;
            goto label_147d74;
        }
    }
    ctx->pc = 0x147CDCu;
label_147cdc:
    // 0x147cdc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x147cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147ce0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x147ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x147ce4: 0x24c61370  addiu       $a2, $a2, 0x1370
    ctx->pc = 0x147ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4976));
    // 0x147ce8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x147CE8u;
    {
        const bool branch_taken_0x147ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CE8u;
        // 0x147cec: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ce8) {
            ctx->pc = 0x147D14u;
            goto label_147d14;
        }
    }
    ctx->pc = 0x147CF0u;
label_147cf0:
    // 0x147cf0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x147cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147cf4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x147cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x147cf8: 0x24c61370  addiu       $a2, $a2, 0x1370
    ctx->pc = 0x147cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4976));
    // 0x147cfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x147CFCu;
    {
        const bool branch_taken_0x147cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CFCu;
        // 0x147d00: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cfc) {
            ctx->pc = 0x147D14u;
            goto label_147d14;
        }
    }
    ctx->pc = 0x147D04u;
label_147d04:
    // 0x147d04: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x147d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147d08: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x147d08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x147d0c: 0x24c61370  addiu       $a2, $a2, 0x1370
    ctx->pc = 0x147d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4976));
    // 0x147d10: 0x26240118  addiu       $a0, $s1, 0x118
    ctx->pc = 0x147d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
label_147d14:
    // 0x147d14: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x147D14u;
    SET_GPR_U32(ctx, 31, 0x147D1Cu);
    ctx->pc = 0x147D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147D14u;
    // 0x147d18: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x147D14u, 0x147D1Cu)) {
        return;
    }
    ctx->pc = 0x147D1Cu;
label_147d1c:
    // 0x147d1c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x147D1Cu;
    {
        const bool branch_taken_0x147d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D1Cu;
        // 0x147d20: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d1c) {
            ctx->pc = 0x147D74u;
            goto label_147d74;
        }
    }
    ctx->pc = 0x147D24u;
label_147d24:
    // 0x147d24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x147d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147d28: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x147d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x147d2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147D2Cu;
    {
        const bool branch_taken_0x147d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D2Cu;
        // 0x147d30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d2c) {
            ctx->pc = 0x147D3Cu;
            goto label_147d3c;
        }
    }
    ctx->pc = 0x147D34u;
    // 0x147d34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x147D34u;
    {
        const bool branch_taken_0x147d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D34u;
        // 0x147d38: 0xae220130  sw          $v0, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d34) {
            ctx->pc = 0x147D70u;
            goto label_147d70;
        }
    }
    ctx->pc = 0x147D3Cu;
label_147d3c:
    // 0x147d3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x147D3Cu;
    {
        const bool branch_taken_0x147d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D3Cu;
        // 0x147d40: 0xae200130  sw          $zero, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d3c) {
            ctx->pc = 0x147D70u;
            goto label_147d70;
        }
    }
    ctx->pc = 0x147D44u;
label_147d44:
    // 0x147d44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x147d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147d48: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x147d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x147d4c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147D4Cu;
    {
        const bool branch_taken_0x147d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D4Cu;
        // 0x147d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d4c) {
            ctx->pc = 0x147D5Cu;
            goto label_147d5c;
        }
    }
    ctx->pc = 0x147D54u;
    // 0x147d54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x147D54u;
    {
        const bool branch_taken_0x147d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D54u;
        // 0x147d58: 0xae220134  sw          $v0, 0x134($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d54) {
            ctx->pc = 0x147D70u;
            goto label_147d70;
        }
    }
    ctx->pc = 0x147D5Cu;
label_147d5c:
    // 0x147d5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x147D5Cu;
    {
        const bool branch_taken_0x147d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D5Cu;
        // 0x147d60: 0xae200134  sw          $zero, 0x134($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d5c) {
            ctx->pc = 0x147D70u;
            goto label_147d70;
        }
    }
    ctx->pc = 0x147D64u;
label_147d64:
    // 0x147d64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x147d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147d68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x147d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147d6c: 0xe6200138  swc1        $f0, 0x138($s1)
    ctx->pc = 0x147d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
label_147d70:
    // 0x147d70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x147d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_147d74:
    // 0x147d74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x147d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147d78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x147d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147d7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x147d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147d80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147d84: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x147D84u;
    SET_GPR_U32(ctx, 31, 0x147D8Cu);
    ctx->pc = 0x147D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147D84u;
    // 0x147d88: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x147D84u, 0x147D8Cu)) {
        return;
    }
    ctx->pc = 0x147D8Cu;
label_147d8c:
    // 0x147d8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x147d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147d90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x147d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147d94: 0x5460ffb2  bnel        $v1, $zero, . + 4 + (-0x4E << 2)
    ctx->pc = 0x147D94u;
    {
        const bool branch_taken_0x147d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147d94) {
            ctx->pc = 0x147D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147D94u;
            // 0x147d98: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147c60;
        }
    }
    ctx->pc = 0x147D9Cu;
    // 0x147d9c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x147d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_147da0:
    // 0x147da0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x147da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147da4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x147da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147da8: 0x3e00008  jr          $ra
    ctx->pc = 0x147DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DA8u;
        // 0x147dac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147DB0u;
}
