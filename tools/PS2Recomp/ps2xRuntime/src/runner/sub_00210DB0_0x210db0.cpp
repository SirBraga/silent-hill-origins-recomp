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

// Function: sub_00210DB0
// Address: 0x210db0 - 0x211010
void sub_00210DB0_0x210db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210DB0_0x210db0");
#endif

    switch (ctx->pc) {
        case 0x210e38u: goto label_210e38;
        case 0x210e80u: goto label_210e80;
        case 0x210eb8u: goto label_210eb8;
        case 0x210ed0u: goto label_210ed0;
        case 0x210ef4u: goto label_210ef4;
        case 0x210f0cu: goto label_210f0c;
        case 0x210f7cu: goto label_210f7c;
        case 0x210fa8u: goto label_210fa8;
        case 0x210fd4u: goto label_210fd4;
        default: break;
    }

    ctx->pc = 0x210db0u;

    // 0x210db0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x210db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x210db4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x210db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x210db8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x210db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x210dbc: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x210dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x210dc0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x210dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x210dc4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x210dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x210dc8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x210dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x210dcc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x210dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x210dd0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x210dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x210dd4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x210dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x210dd8: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x210dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x210ddc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x210ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x210de0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x210de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x210de4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x210de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x210de8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x210de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x210dec: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x210decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x210df0: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x210df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x210df4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x210df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x210df8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x210df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210dfc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x210dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x210e00: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x210e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
    // 0x210e04: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x210e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x210e08: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x210e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x210e0c: 0x8cbe0010  lw          $fp, 0x10($a1)
    ctx->pc = 0x210e0cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x210e10: 0xffa00028  sd          $zero, 0x28($sp)
    ctx->pc = 0x210e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 0));
    // 0x210e14: 0x8cb60014  lw          $s6, 0x14($a1)
    ctx->pc = 0x210e14u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x210e18: 0xffa00030  sd          $zero, 0x30($sp)
    ctx->pc = 0x210e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 0));
    // 0x210e1c: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x210e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
    // 0x210e20: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x210e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210e24: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x210e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x210e28: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x210e28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x210e2c: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x210E2Cu;
    {
        const bool branch_taken_0x210e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E2Cu;
        // 0x210e30: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e2c) {
            ctx->pc = 0x210F50u;
            goto label_210f50;
        }
    }
    ctx->pc = 0x210E34u;
    // 0x210e34: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x210e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_210e38:
    // 0x210e38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x210e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210e3c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x210e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x210e40: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x210e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x210e44: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x210e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x210e48: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x210E48u;
    {
        const bool branch_taken_0x210e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210e48) {
            ctx->pc = 0x210E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210E48u;
            // 0x210e4c: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210F40u;
            goto label_210f40;
        }
    }
    ctx->pc = 0x210E50u;
    // 0x210e50: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x210e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x210e54: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x210e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x210e58: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x210e58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x210e5c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x210e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x210e60: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x210e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x210e64: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x210e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210e68: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x210e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x210e6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x210e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210e70: 0x1e28c0  sll         $a1, $fp, 3
    ctx->pc = 0x210e70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x210e74: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x210e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x210e78: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x210e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x210e7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x210e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_210e80:
    // 0x210e80: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x210e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x210e84: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x210e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x210e88: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x210e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x210e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210e90: 0x24970001  addiu       $s7, $a0, 0x1
    ctx->pc = 0x210e90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x210e94: 0x2d1182a  slt         $v1, $s6, $s1
    ctx->pc = 0x210e94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x210e98: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x210E98u;
    {
        const bool branch_taken_0x210e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E98u;
        // 0x210e9c: 0x459821  addu        $s3, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e98) {
            ctx->pc = 0x210F28u;
            goto label_210f28;
        }
    }
    ctx->pc = 0x210EA0u;
    // 0x210ea0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x210ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x210ea4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x210ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210ea8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x210ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x210eac: 0x24540002  addiu       $s4, $v0, 0x2
    ctx->pc = 0x210eacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x210eb0: 0x24750004  addiu       $s5, $v1, 0x4
    ctx->pc = 0x210eb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x210eb4: 0x24920004  addiu       $s2, $a0, 0x4
    ctx->pc = 0x210eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_210eb8:
    // 0x210eb8: 0x96700000  lhu         $s0, 0x0($s3)
    ctx->pc = 0x210eb8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x210ebc: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x210EBCu;
    {
        const bool branch_taken_0x210ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x210EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EBCu;
        // 0x210ec0: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ebc) {
            ctx->pc = 0x210F18u;
            goto label_210f18;
        }
    }
    ctx->pc = 0x210EC4u;
    // 0x210ec4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ec8: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x210EC8u;
    SET_GPR_U32(ctx, 31, 0x210ED0u);
    ctx->pc = 0x210ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210EC8u;
    // 0x210ecc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x210EC8u, 0x210ED0u)) {
        return;
    }
    ctx->pc = 0x210ED0u;
label_210ed0:
    // 0x210ed0: 0xdfa50018  ld          $a1, 0x18($sp)
    ctx->pc = 0x210ed0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210ed4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x210ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ed8: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x210ed8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210edc: 0xb0282d  daddu       $a1, $a1, $s0
    ctx->pc = 0x210edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 16));
    // 0x210ee0: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x210ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x210ee4: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x210ee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x210ee8: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x210ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x210eec: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x210EECu;
    SET_GPR_U32(ctx, 31, 0x210EF4u);
    ctx->pc = 0x210EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210EECu;
    // 0x210ef0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x210EECu, 0x210EF4u)) {
        return;
    }
    ctx->pc = 0x210EF4u;
label_210ef4:
    // 0x210ef4: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x210ef4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210ef8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210efc: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x210efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x210f00: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x210f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x210f04: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x210F04u;
    SET_GPR_U32(ctx, 31, 0x210F0Cu);
    ctx->pc = 0x210F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F04u;
    // 0x210f08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x210F04u, 0x210F0Cu)) {
        return;
    }
    ctx->pc = 0x210F0Cu;
label_210f0c:
    // 0x210f0c: 0xdfa50030  ld          $a1, 0x30($sp)
    ctx->pc = 0x210f0cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210f10: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x210f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x210f14: 0xffa50030  sd          $a1, 0x30($sp)
    ctx->pc = 0x210f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 5));
label_210f18:
    // 0x210f18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x210f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x210f1c: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x210f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x210f20: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x210F20u;
    {
        const bool branch_taken_0x210f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F20u;
        // 0x210f24: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f20) {
            ctx->pc = 0x210EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210eb8;
        }
    }
    ctx->pc = 0x210F28u;
label_210f28:
    // 0x210f28: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x210f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x210f2c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x210f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f30: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x210f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x210f34: 0x1040ffd2  beqz        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x210F34u;
    {
        const bool branch_taken_0x210f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F34u;
        // 0x210f38: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f34) {
            ctx->pc = 0x210E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210e80;
        }
    }
    ctx->pc = 0x210F3Cu;
    // 0x210f3c: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x210f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_210f40:
    // 0x210f40: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x210f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x210f44: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x210f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x210f48: 0x1040ffbb  beqz        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x210F48u;
    {
        const bool branch_taken_0x210f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F48u;
        // 0x210f4c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f48) {
            ctx->pc = 0x210E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210e38;
        }
    }
    ctx->pc = 0x210F50u;
label_210f50:
    // 0x210f50: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x210f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210f54: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x210f54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210f58: 0x8ca20088  lw          $v0, 0x88($a1)
    ctx->pc = 0x210f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x210f5c: 0xdfa50020  ld          $a1, 0x20($sp)
    ctx->pc = 0x210f5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210f60: 0x3887b  dsra        $s1, $v1, 1
    ctx->pc = 0x210f60u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 3) >> 1);
    // 0x210f64: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x210f64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210f68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x210f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x210f6c: 0xb1202d  daddu       $a0, $a1, $s1
    ctx->pc = 0x210f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 17));
    // 0x210f70: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x210f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f74: 0xc0ca2b8  jal         func_328AE0
    ctx->pc = 0x210F74u;
    SET_GPR_U32(ctx, 31, 0x210F7Cu);
    ctx->pc = 0x210F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F74u;
    // 0x210f78: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x210F74u, 0x210F7Cu)) {
        return;
    }
    ctx->pc = 0x210F7Cu;
label_210f7c:
    // 0x210f7c: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x210f7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210f80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x210f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x210f84: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x210f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x210f88: 0x71202d  daddu       $a0, $v1, $s1
    ctx->pc = 0x210f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 17));
    // 0x210f8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x210f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210f90: 0xdfa50018  ld          $a1, 0x18($sp)
    ctx->pc = 0x210f90u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210f94: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x210f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x210f98: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x210f98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x210f9c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x210f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x210fa0: 0xc0ca2b8  jal         func_328AE0
    ctx->pc = 0x210FA0u;
    SET_GPR_U32(ctx, 31, 0x210FA8u);
    ctx->pc = 0x210FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210FA0u;
    // 0x210fa4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x210FA0u, 0x210FA8u)) {
        return;
    }
    ctx->pc = 0x210FA8u;
label_210fa8:
    // 0x210fa8: 0xdfa30030  ld          $v1, 0x30($sp)
    ctx->pc = 0x210fa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210fac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x210facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x210fb0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x210fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x210fb4: 0x71202d  daddu       $a0, $v1, $s1
    ctx->pc = 0x210fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 17));
    // 0x210fb8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x210fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210fbc: 0xdfa50018  ld          $a1, 0x18($sp)
    ctx->pc = 0x210fbcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210fc0: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x210fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x210fc4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x210fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x210fc8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x210fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x210fcc: 0xc0ca2b8  jal         func_328AE0
    ctx->pc = 0x210FCCu;
    SET_GPR_U32(ctx, 31, 0x210FD4u);
    ctx->pc = 0x210FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210FCCu;
    // 0x210fd0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x210FCCu, 0x210FD4u)) {
        return;
    }
    ctx->pc = 0x210FD4u;
label_210fd4:
    // 0x210fd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x210fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x210fd8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x210fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x210fdc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x210fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x210fe0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x210fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x210fe4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x210fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x210fe8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x210fe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x210fec: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x210fecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x210ff0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x210ff0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x210ff4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x210ff4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x210ff8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x210ff8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210ffc: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x210ffcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211000: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x211000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211004: 0x3e00008  jr          $ra
    ctx->pc = 0x211004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211004u;
        // 0x211008: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21100Cu;
    // 0x21100c: 0x0  nop
    ctx->pc = 0x21100cu;
    // NOP
    ctx->pc = 0x211010u;
}
