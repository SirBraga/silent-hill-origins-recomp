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

// Function: sub_001D3C88
// Address: 0x1d3c88 - 0x1d3f90
void sub_001D3C88_0x1d3c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3C88_0x1d3c88");
#endif

    switch (ctx->pc) {
        case 0x1d3cd8u: goto label_1d3cd8;
        case 0x1d3ce8u: goto label_1d3ce8;
        case 0x1d3cfcu: goto label_1d3cfc;
        case 0x1d3d18u: goto label_1d3d18;
        case 0x1d3d2cu: goto label_1d3d2c;
        case 0x1d3d60u: goto label_1d3d60;
        case 0x1d3d9cu: goto label_1d3d9c;
        case 0x1d3f48u: goto label_1d3f48;
        case 0x1d3f58u: goto label_1d3f58;
        case 0x1d3f68u: goto label_1d3f68;
        default: break;
    }

    ctx->pc = 0x1d3c88u;

    // 0x1d3c88: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1d3c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1d3c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c90: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x1d3c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x1d3c94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d3c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c98: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x1d3c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x1d3c9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d3c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ca0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1d3ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1d3ca4: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x1d3ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x1d3ca8: 0x24841078  addiu       $a0, $a0, 0x1078
    ctx->pc = 0x1d3ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4216));
    // 0x1d3cac: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x1d3cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x1d3cb0: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x1d3cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x1d3cb4: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x1d3cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x1d3cb8: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x1d3cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x1d3cbc: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x1d3cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x1d3cc0: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x1d3cc0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
    // 0x1d3cc4: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x1d3cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x1d3cc8: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x1d3cc8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
    // 0x1d3ccc: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1d3cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1d3cd0: 0xc0814fa  jal         func_2053E8
    ctx->pc = 0x1D3CD0u;
    SET_GPR_U32(ctx, 31, 0x1D3CD8u);
    ctx->pc = 0x1D3CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CD0u;
    // 0x1d3cd4: 0x3c160034  lui         $s6, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2053E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2053E8u, 0x1D3CD0u, 0x1D3CD8u)) {
        return;
    }
    ctx->pc = 0x1D3CD8u;
label_1d3cd8:
    // 0x1d3cd8: 0x240403c4  addiu       $a0, $zero, 0x3C4
    ctx->pc = 0x1d3cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x1d3cdc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d3cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3ce0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1D3CE0u;
    SET_GPR_U32(ctx, 31, 0x1D3CE8u);
    ctx->pc = 0x1D3CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CE0u;
    // 0x1d3ce4: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1D3CE0u, 0x1D3CE8u)) {
        return;
    }
    ctx->pc = 0x1D3CE8u;
label_1d3ce8:
    // 0x1d3ce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cf0: 0x240603c4  addiu       $a2, $zero, 0x3C4
    ctx->pc = 0x1d3cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x1d3cf4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1D3CF4u;
    SET_GPR_U32(ctx, 31, 0x1D3CFCu);
    ctx->pc = 0x1D3CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CF4u;
    // 0x1d3cf8: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1D3CF4u, 0x1D3CFCu)) {
        return;
    }
    ctx->pc = 0x1D3CFCu;
label_1d3cfc:
    // 0x1d3cfc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d3cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d3d00: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1d3d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3d04: 0x8c621088  lw          $v0, 0x1088($v1)
    ctx->pc = 0x1d3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6A1088u));
    // 0x1d3d08: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1d3d08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x1d3d0c: 0x26101090  addiu       $s0, $s0, 0x1090
    ctx->pc = 0x1d3d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4240));
    // 0x1d3d10: 0xc074b6e  jal         func_1D2DB8
    ctx->pc = 0x1D3D10u;
    SET_GPR_U32(ctx, 31, 0x1D3D18u);
    ctx->pc = 0x1D3D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D10u;
    // 0x1d3d14: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2DB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2DB8u, 0x1D3D10u, 0x1D3D18u)) {
        return;
    }
    ctx->pc = 0x1D3D18u;
label_1d3d18:
    // 0x1d3d18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d3d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d3d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d24: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1D3D24u;
    SET_GPR_U32(ctx, 31, 0x1D3D2Cu);
    ctx->pc = 0x1D3D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D24u;
    // 0x1d3d28: 0x2627000c  addiu       $a3, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D3D24u, 0x1D3D2Cu)) {
        return;
    }
    ctx->pc = 0x1D3D2Cu;
label_1d3d2c:
    // 0x1d3d2c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3d30: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1d3d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d3d34: 0xa4450006  sh          $a1, 0x6($v0)
    ctx->pc = 0x1d3d34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d3d38: 0x83a40000  lb          $a0, 0x0($sp)
    ctx->pc = 0x1d3d38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3d3c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D3D3Cu;
    {
        const bool branch_taken_0x1d3d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D3Cu;
        // 0x1d3d40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d3c) {
            ctx->pc = 0x1D3D8Cu;
            goto label_1d3d8c;
        }
    }
    ctx->pc = 0x1D3D44u;
    // 0x1d3d44: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3d48: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3D48u;
    {
        const bool branch_taken_0x1d3d48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D48u;
        // 0x1d3d4c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d48) {
            ctx->pc = 0x1D3D60u;
            goto label_1d3d60;
        }
    }
    ctx->pc = 0x1D3D50u;
    // 0x1d3d50: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3d54: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x1d3d54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d3d58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D3D58u;
    {
        const bool branch_taken_0x1d3d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D58u;
        // 0x1d3d5c: 0xa4400006  sh          $zero, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d58) {
            ctx->pc = 0x1D3D8Cu;
            goto label_1d3d8c;
        }
    }
    ctx->pc = 0x1D3D60u;
label_1d3d60:
    // 0x1d3d60: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x1d3d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1d3d64: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x1d3d64u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3d68: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3D68u;
    {
        const bool branch_taken_0x1d3d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D68u;
        // 0x1d3d6c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d68) {
            ctx->pc = 0x1D3D8Cu;
            goto label_1d3d8c;
        }
    }
    ctx->pc = 0x1D3D70u;
    // 0x1d3d70: 0x5482fffb  bnel        $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D3D70u;
    {
        const bool branch_taken_0x1d3d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d3d70) {
            ctx->pc = 0x1D3D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3D70u;
            // 0x1d3d74: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3d60;
        }
    }
    ctx->pc = 0x1D3D78u;
    // 0x1d3d78: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1d3d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3d7c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1d3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d3d80: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1d3d80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d3d84: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d3d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3d88: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x1d3d88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_1d3d8c:
    // 0x1d3d8c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1d3d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3d90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d3d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d94: 0xc0bc254  jal         func_2F0950
    ctx->pc = 0x1D3D94u;
    SET_GPR_U32(ctx, 31, 0x1D3D9Cu);
    ctx->pc = 0x1D3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D94u;
    // 0x1d3d98: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0950u, 0x1D3D94u, 0x1D3D9Cu)) {
        return;
    }
    ctx->pc = 0x1D3D9Cu;
label_1d3d9c:
    // 0x1d3d9c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1d3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3da0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d3da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d3da4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d3da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3da8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d3da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1d3dac: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3db0: 0x26c69bc0  addiu       $a2, $s6, -0x6440
    ctx->pc = 0x1d3db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941632));
    // 0x1d3db4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1d3db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d3db8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1d3db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d3dbc: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1d3dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d3dc0: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1d3dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d3dc4: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x1d3dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d3dc8: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x1d3dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d3dcc: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x1d3dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3dd0: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x1d3dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3dd4: 0xb044001f  sdl         $a0, 0x1F($v0)
    ctx->pc = 0x1d3dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3dd8: 0xb4440018  sdr         $a0, 0x18($v0)
    ctx->pc = 0x1d3dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3ddc: 0xb0450027  sdl         $a1, 0x27($v0)
    ctx->pc = 0x1d3ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3de0: 0xb4450020  sdr         $a1, 0x20($v0)
    ctx->pc = 0x1d3de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3de4: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x1d3de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d3de8: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x1d3de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d3dec: 0x68c40027  ldl         $a0, 0x27($a2)
    ctx->pc = 0x1d3decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d3df0: 0x6cc40020  ldr         $a0, 0x20($a2)
    ctx->pc = 0x1d3df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d3df4: 0x68c5002f  ldl         $a1, 0x2F($a2)
    ctx->pc = 0x1d3df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d3df8: 0x6cc50028  ldr         $a1, 0x28($a2)
    ctx->pc = 0x1d3df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d3dfc: 0xb043002f  sdl         $v1, 0x2F($v0)
    ctx->pc = 0x1d3dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e00: 0xb4430028  sdr         $v1, 0x28($v0)
    ctx->pc = 0x1d3e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e04: 0xb0440037  sdl         $a0, 0x37($v0)
    ctx->pc = 0x1d3e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e08: 0xb4440030  sdr         $a0, 0x30($v0)
    ctx->pc = 0x1d3e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e0c: 0xb045003f  sdl         $a1, 0x3F($v0)
    ctx->pc = 0x1d3e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e10: 0xb4450038  sdr         $a1, 0x38($v0)
    ctx->pc = 0x1d3e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e14: 0x68c30037  ldl         $v1, 0x37($a2)
    ctx->pc = 0x1d3e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d3e18: 0x6cc30030  ldr         $v1, 0x30($a2)
    ctx->pc = 0x1d3e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d3e1c: 0x68c4003f  ldl         $a0, 0x3F($a2)
    ctx->pc = 0x1d3e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d3e20: 0x6cc40038  ldr         $a0, 0x38($a2)
    ctx->pc = 0x1d3e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d3e24: 0xb0430047  sdl         $v1, 0x47($v0)
    ctx->pc = 0x1d3e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e28: 0xb4430040  sdr         $v1, 0x40($v0)
    ctx->pc = 0x1d3e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e2c: 0xb044004f  sdl         $a0, 0x4F($v0)
    ctx->pc = 0x1d3e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e30: 0xb4440048  sdr         $a0, 0x48($v0)
    ctx->pc = 0x1d3e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e34: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1d3e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3e38: 0x26a69c00  addiu       $a2, $s5, -0x6400
    ctx->pc = 0x1d3e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941696));
    // 0x1d3e3c: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1d3e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d3e40: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1d3e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d3e44: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1d3e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d3e48: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1d3e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d3e4c: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x1d3e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d3e50: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x1d3e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d3e54: 0xb0620057  sdl         $v0, 0x57($v1)
    ctx->pc = 0x1d3e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e58: 0xb4620050  sdr         $v0, 0x50($v1)
    ctx->pc = 0x1d3e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e5c: 0xb064005f  sdl         $a0, 0x5F($v1)
    ctx->pc = 0x1d3e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e60: 0xb4640058  sdr         $a0, 0x58($v1)
    ctx->pc = 0x1d3e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e64: 0xb0650067  sdl         $a1, 0x67($v1)
    ctx->pc = 0x1d3e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e68: 0xb4650060  sdr         $a1, 0x60($v1)
    ctx->pc = 0x1d3e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e6c: 0x68c2001f  ldl         $v0, 0x1F($a2)
    ctx->pc = 0x1d3e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d3e70: 0x6cc20018  ldr         $v0, 0x18($a2)
    ctx->pc = 0x1d3e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d3e74: 0x68c40027  ldl         $a0, 0x27($a2)
    ctx->pc = 0x1d3e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d3e78: 0x6cc40020  ldr         $a0, 0x20($a2)
    ctx->pc = 0x1d3e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d3e7c: 0x68c5002f  ldl         $a1, 0x2F($a2)
    ctx->pc = 0x1d3e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d3e80: 0x6cc50028  ldr         $a1, 0x28($a2)
    ctx->pc = 0x1d3e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d3e84: 0xb062006f  sdl         $v0, 0x6F($v1)
    ctx->pc = 0x1d3e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e88: 0xb4620068  sdr         $v0, 0x68($v1)
    ctx->pc = 0x1d3e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e8c: 0xb0640077  sdl         $a0, 0x77($v1)
    ctx->pc = 0x1d3e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e90: 0xb4640070  sdr         $a0, 0x70($v1)
    ctx->pc = 0x1d3e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e94: 0xb065007f  sdl         $a1, 0x7F($v1)
    ctx->pc = 0x1d3e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e98: 0xb4650078  sdr         $a1, 0x78($v1)
    ctx->pc = 0x1d3e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3e9c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3ea0: 0x26869c30  addiu       $a2, $s4, -0x63D0
    ctx->pc = 0x1d3ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941744));
    // 0x1d3ea4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1d3ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d3ea8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1d3ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d3eac: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1d3eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d3eb0: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1d3eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d3eb4: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x1d3eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d3eb8: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x1d3eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d3ebc: 0xb0430087  sdl         $v1, 0x87($v0)
    ctx->pc = 0x1d3ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3ec0: 0xb4430080  sdr         $v1, 0x80($v0)
    ctx->pc = 0x1d3ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3ec4: 0xb044008f  sdl         $a0, 0x8F($v0)
    ctx->pc = 0x1d3ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3ec8: 0xb4440088  sdr         $a0, 0x88($v0)
    ctx->pc = 0x1d3ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3ecc: 0xb0450097  sdl         $a1, 0x97($v0)
    ctx->pc = 0x1d3eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3ed0: 0xb4450090  sdr         $a1, 0x90($v0)
    ctx->pc = 0x1d3ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3ed4: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x1d3ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d3ed8: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x1d3ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d3edc: 0x68c40027  ldl         $a0, 0x27($a2)
    ctx->pc = 0x1d3edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d3ee0: 0x6cc40020  ldr         $a0, 0x20($a2)
    ctx->pc = 0x1d3ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d3ee4: 0x68c5002f  ldl         $a1, 0x2F($a2)
    ctx->pc = 0x1d3ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d3ee8: 0x6cc50028  ldr         $a1, 0x28($a2)
    ctx->pc = 0x1d3ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d3eec: 0xb043009f  sdl         $v1, 0x9F($v0)
    ctx->pc = 0x1d3eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3ef0: 0xb4430098  sdr         $v1, 0x98($v0)
    ctx->pc = 0x1d3ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3ef4: 0xb04400a7  sdl         $a0, 0xA7($v0)
    ctx->pc = 0x1d3ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3ef8: 0xb44400a0  sdr         $a0, 0xA0($v0)
    ctx->pc = 0x1d3ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3efc: 0xb04500af  sdl         $a1, 0xAF($v0)
    ctx->pc = 0x1d3efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3f00: 0xb44500a8  sdr         $a1, 0xA8($v0)
    ctx->pc = 0x1d3f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3f04: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d3f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3f08: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1d3f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1d3f0c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1d3f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1d3f10: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1d3f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1d3f14: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x1d3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x1d3f18: 0x6ba30107  ldl         $v1, 0x107($sp)
    ctx->pc = 0x1d3f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d3f1c: 0x6fa30100  ldr         $v1, 0x100($sp)
    ctx->pc = 0x1d3f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d3f20: 0x6ba4010f  ldl         $a0, 0x10F($sp)
    ctx->pc = 0x1d3f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d3f24: 0x6fa40108  ldr         $a0, 0x108($sp)
    ctx->pc = 0x1d3f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d3f28: 0xb04300b7  sdl         $v1, 0xB7($v0)
    ctx->pc = 0x1d3f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3f2c: 0xb44300b0  sdr         $v1, 0xB0($v0)
    ctx->pc = 0x1d3f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3f30: 0xb04400bf  sdl         $a0, 0xBF($v0)
    ctx->pc = 0x1d3f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3f34: 0xb44400b8  sdr         $a0, 0xB8($v0)
    ctx->pc = 0x1d3f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3f38: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1d3f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3f3c: 0x8e659b84  lw          $a1, -0x647C($s3)
    ctx->pc = 0x1d3f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941572)));
    // 0x1d3f40: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x1D3F40u;
    SET_GPR_U32(ctx, 31, 0x1D3F48u);
    ctx->pc = 0x1D3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F40u;
    // 0x1d3f44: 0x24840104  addiu       $a0, $a0, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1D3F40u, 0x1D3F48u)) {
        return;
    }
    ctx->pc = 0x1D3F48u;
label_1d3f48:
    // 0x1d3f48: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1d3f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3f4c: 0x8e659b84  lw          $a1, -0x647C($s3)
    ctx->pc = 0x1d3f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941572)));
    // 0x1d3f50: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x1D3F50u;
    SET_GPR_U32(ctx, 31, 0x1D3F58u);
    ctx->pc = 0x1D3F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F50u;
    // 0x1d3f54: 0x24840144  addiu       $a0, $a0, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1D3F50u, 0x1D3F58u)) {
        return;
    }
    ctx->pc = 0x1D3F58u;
label_1d3f58:
    // 0x1d3f58: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1d3f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3f5c: 0x8e659b84  lw          $a1, -0x647C($s3)
    ctx->pc = 0x1d3f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941572)));
    // 0x1d3f60: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x1D3F60u;
    SET_GPR_U32(ctx, 31, 0x1D3F68u);
    ctx->pc = 0x1D3F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F60u;
    // 0x1d3f64: 0x24840184  addiu       $a0, $a0, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1D3F60u, 0x1D3F68u)) {
        return;
    }
    ctx->pc = 0x1D3F68u;
label_1d3f68:
    // 0x1d3f68: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x1d3f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d3f6c: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1d3f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d3f70: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1d3f70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d3f74: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1d3f74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d3f78: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1d3f78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1d3f7c: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x1d3f7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d3f80: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x1d3f80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d3f84: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1d3f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d3f88: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F88u;
        // 0x1d3f8c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3F90u;
}
