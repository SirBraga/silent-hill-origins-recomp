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

// Function: sub_001E4958
// Address: 0x1e4958 - 0x1e4ac0
void sub_001E4958_0x1e4958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4958_0x1e4958");
#endif

    switch (ctx->pc) {
        case 0x1e4998u: goto label_1e4998;
        case 0x1e49d0u: goto label_1e49d0;
        case 0x1e4a28u: goto label_1e4a28;
        case 0x1e4a34u: goto label_1e4a34;
        case 0x1e4a4cu: goto label_1e4a4c;
        case 0x1e4a58u: goto label_1e4a58;
        case 0x1e4a68u: goto label_1e4a68;
        default: break;
    }

    ctx->pc = 0x1e4958u;

    // 0x1e4958: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e4958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e495c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1e495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1e4960: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1e4960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1e4964: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e4964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4968: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e496c: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x1e496cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x1e4970: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1e4970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1e4974: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1e4974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1e4978: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e4978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1e497c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e4980: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1e4980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1e4984: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1e4984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1e4988: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1e4988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1e498c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e498cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e4990: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4990u;
    SET_GPR_U32(ctx, 31, 0x1E4998u);
    ctx->pc = 0x1E4994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4990u;
    // 0x1e4994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4990u, 0x1E4998u)) {
        return;
    }
    ctx->pc = 0x1E4998u;
label_1e4998:
    // 0x1e4998: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1e4998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e499c: 0x2604003f  addiu       $a0, $s0, 0x3F
    ctx->pc = 0x1e499cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x1e49a0: 0xd0182a  slt         $v1, $a2, $s0
    ctx->pc = 0x1e49a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1e49a4: 0x203200b  movn        $a0, $s0, $v1
    ctx->pc = 0x1e49a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16));
    // 0x1e49a8: 0x41183  sra         $v0, $a0, 6
    ctx->pc = 0x1e49a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 6));
    // 0x1e49ac: 0x18400037  blez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1E49ACu;
    {
        const bool branch_taken_0x1e49ac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49ACu;
        // 0x1e49b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49ac) {
            ctx->pc = 0x1E4A8Cu;
            goto label_1e4a8c;
        }
    }
    ctx->pc = 0x1E49B4u;
    // 0x1e49b4: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x1e49b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1e49b8: 0x2623003f  addiu       $v1, $s1, 0x3F
    ctx->pc = 0x1e49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x1e49bc: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x1e49bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17));
    // 0x1e49c0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e49c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e49c4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1e49c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1e49c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e49cc: 0x0  nop
    ctx->pc = 0x1e49ccu;
    // NOP
label_1e49d0:
    // 0x1e49d0: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x1e49d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1e49d4: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x1e49d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1e49d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e49d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e49dc: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x1e49dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1e49e0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1e49e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e49e4: 0x18c00023  blez        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E49E4u;
    {
        const bool branch_taken_0x1e49e4 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x1E49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49E4u;
        // 0x1e49e8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49e4) {
            ctx->pc = 0x1E4A74u;
            goto label_1e4a74;
        }
    }
    ctx->pc = 0x1E49ECu;
    // 0x1e49ec: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x1e49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x1e49f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e49f4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1e49f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1e49f8: 0x52a40  sll         $a1, $a1, 9
    ctx->pc = 0x1e49f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x1e49fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e4a00: 0x24630410  addiu       $v1, $v1, 0x410
    ctx->pc = 0x1e4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1040));
    // 0x1e4a04: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1e4a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1e4a08: 0x2f438  dsll        $fp, $v0, 16
    ctx->pc = 0x1e4a08u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << 16);
    // 0x1e4a0c: 0x3bc38  dsll        $s7, $v1, 16
    ctx->pc = 0x1e4a0cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << 16);
    // 0x1e4a10: 0x5b438  dsll        $s6, $a1, 16
    ctx->pc = 0x1e4a10u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) << 16);
    // 0x1e4a14: 0x4ac38  dsll        $s5, $a0, 16
    ctx->pc = 0x1e4a14u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << 16);
    // 0x1e4a18: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1e4a18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a1c: 0x24130200  addiu       $s3, $zero, 0x200
    ctx->pc = 0x1e4a1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1e4a20: 0x24120410  addiu       $s2, $zero, 0x410
    ctx->pc = 0x1e4a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x1e4a24: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1e4a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e4a28:
    // 0x1e4a28: 0x23e2825  or          $a1, $s1, $fp
    ctx->pc = 0x1e4a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 30));
    // 0x1e4a2c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4A2Cu;
    SET_GPR_U32(ctx, 31, 0x1E4A34u);
    ctx->pc = 0x1E4A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A2Cu;
    // 0x1e4a30: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4A2Cu, 0x1E4A34u)) {
        return;
    }
    ctx->pc = 0x1E4A34u;
label_1e4a34:
    // 0x1e4a34: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x1e4a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x1e4a38: 0x101240  sll         $v0, $s0, 9
    ctx->pc = 0x1e4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
    // 0x1e4a3c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e4a40: 0x562825  or          $a1, $v0, $s6
    ctx->pc = 0x1e4a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x1e4a44: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4A44u;
    SET_GPR_U32(ctx, 31, 0x1E4A4Cu);
    ctx->pc = 0x1E4A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A44u;
    // 0x1e4a48: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4A44u, 0x1E4A4Cu)) {
        return;
    }
    ctx->pc = 0x1E4A4Cu;
label_1e4a4c:
    // 0x1e4a4c: 0x2572825  or          $a1, $s2, $s7
    ctx->pc = 0x1e4a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 23));
    // 0x1e4a50: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4A50u;
    SET_GPR_U32(ctx, 31, 0x1E4A58u);
    ctx->pc = 0x1E4A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A50u;
    // 0x1e4a54: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4A50u, 0x1E4A58u)) {
        return;
    }
    ctx->pc = 0x1E4A58u;
label_1e4a58:
    // 0x1e4a58: 0x26520400  addiu       $s2, $s2, 0x400
    ctx->pc = 0x1e4a58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x1e4a5c: 0x2752825  or          $a1, $s3, $s5
    ctx->pc = 0x1e4a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 21));
    // 0x1e4a60: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4A60u;
    SET_GPR_U32(ctx, 31, 0x1E4A68u);
    ctx->pc = 0x1E4A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A60u;
    // 0x1e4a64: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4A60u, 0x1E4A68u)) {
        return;
    }
    ctx->pc = 0x1E4A68u;
label_1e4a68:
    // 0x1e4a68: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x1e4a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1e4a6c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1E4A6Cu;
    {
        const bool branch_taken_0x1e4a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A6Cu;
        // 0x1e4a70: 0x26730200  addiu       $s3, $s3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a6c) {
            ctx->pc = 0x1E4A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4a28;
        }
    }
    ctx->pc = 0x1E4A74u;
label_1e4a74:
    // 0x1e4a74: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4a78: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1e4a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4a7c: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x1e4a7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x1e4a80: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1e4a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e4a84: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1E4A84u;
    {
        const bool branch_taken_0x1e4a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A84u;
        // 0x1e4a88: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a84) {
            ctx->pc = 0x1E49D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e49d0;
        }
    }
    ctx->pc = 0x1E4A8Cu;
label_1e4a8c:
    // 0x1e4a8c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1e4a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e4a90: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1e4a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e4a94: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1e4a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e4a98: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1e4a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e4a9c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1e4a9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e4aa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e4aa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4aa4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1e4aa4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4aa8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1e4aa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4aac: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e4aacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AB4u;
        // 0x1e4ab8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4ABCu;
    // 0x1e4abc: 0x0  nop
    ctx->pc = 0x1e4abcu;
    // NOP
    ctx->pc = 0x1e4ac0u;
}
