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

// Function: sub_0013DB48
// Address: 0x13db48 - 0x13dc90
void sub_0013DB48_0x13db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DB48_0x13db48");
#endif

    switch (ctx->pc) {
        case 0x13db64u: goto label_13db64;
        case 0x13db78u: goto label_13db78;
        case 0x13db90u: goto label_13db90;
        case 0x13dc2cu: goto label_13dc2c;
        case 0x13dc4cu: goto label_13dc4c;
        case 0x13dc68u: goto label_13dc68;
        default: break;
    }

    ctx->pc = 0x13db48u;

    // 0x13db48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13db48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13db4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13db4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13db50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13db50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13db54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13db54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13db58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13db5c: 0xc04ed0e  jal         func_13B438
    ctx->pc = 0x13DB5Cu;
    SET_GPR_U32(ctx, 31, 0x13DB64u);
    ctx->pc = 0x13DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB5Cu;
    // 0x13db60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B438u, 0x13DB5Cu, 0x13DB64u)) {
        return;
    }
    ctx->pc = 0x13DB64u;
label_13db64:
    // 0x13db64: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13db64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13db68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13db68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db6c: 0x8c4647e0  lw          $a2, 0x47E0($v0)
    ctx->pc = 0x13db6cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B47E0u));
    // 0x13db70: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x13DB70u;
    SET_GPR_U32(ctx, 31, 0x13DB78u);
    ctx->pc = 0x13DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB70u;
    // 0x13db74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13DB70u, 0x13DB78u)) {
        return;
    }
    ctx->pc = 0x13DB78u;
label_13db78:
    // 0x13db78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13db78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13db7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13db80: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x13DB80u;
    {
        const bool branch_taken_0x13db80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB80u;
        // 0x13db84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db80) {
            ctx->pc = 0x13DC7Cu;
            goto label_13dc7c;
        }
    }
    ctx->pc = 0x13DB88u;
    // 0x13db88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13db8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x13db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13db90:
    // 0x13db90: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x13db90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x13db94: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x13DB94u;
    {
        const bool branch_taken_0x13db94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB94u;
        // 0x13db98: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db94) {
            ctx->pc = 0x13DC4Cu;
            goto label_13dc4c;
        }
    }
    ctx->pc = 0x13DB9Cu;
    // 0x13db9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x13db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13dba0: 0x2442fc50  addiu       $v0, $v0, -0x3B0
    ctx->pc = 0x13dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966352));
    // 0x13dba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13dba8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13dbac: 0x800008  jr          $a0
    ctx->pc = 0x13DBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DBB4u: goto label_13dbb4;
            case 0x13DBC4u: goto label_13dbc4;
            case 0x13DBD4u: goto label_13dbd4;
            case 0x13DBE4u: goto label_13dbe4;
            case 0x13DBF4u: goto label_13dbf4;
            case 0x13DC04u: goto label_13dc04;
            case 0x13DC14u: goto label_13dc14;
            case 0x13DC34u: goto label_13dc34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DBACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13DBB4u;
label_13dbb4:
    // 0x13dbb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dbb8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dbbc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13DBBCu;
    {
        const bool branch_taken_0x13dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBBCu;
        // 0x13dbc0: 0xe62000d8  swc1        $f0, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbbc) {
            ctx->pc = 0x13DC4Cu;
            goto label_13dc4c;
        }
    }
    ctx->pc = 0x13DBC4u;
label_13dbc4:
    // 0x13dbc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dbc8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13dbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dbcc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13DBCCu;
    {
        const bool branch_taken_0x13dbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBCCu;
        // 0x13dbd0: 0xe62000dc  swc1        $f0, 0xDC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbcc) {
            ctx->pc = 0x13DC4Cu;
            goto label_13dc4c;
        }
    }
    ctx->pc = 0x13DBD4u;
label_13dbd4:
    // 0x13dbd4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x13dbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dbd8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x13dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13dbdc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13DBDCu;
    {
        const bool branch_taken_0x13dbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBDCu;
        // 0x13dbe0: 0x262500ec  addiu       $a1, $s1, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbdc) {
            ctx->pc = 0x13DC20u;
            goto label_13dc20;
        }
    }
    ctx->pc = 0x13DBE4u;
label_13dbe4:
    // 0x13dbe4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x13dbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dbe8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x13dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13dbec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13DBECu;
    {
        const bool branch_taken_0x13dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBECu;
        // 0x13dbf0: 0x262500f4  addiu       $a1, $s1, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbec) {
            ctx->pc = 0x13DC20u;
            goto label_13dc20;
        }
    }
    ctx->pc = 0x13DBF4u;
label_13dbf4:
    // 0x13dbf4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x13dbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dbf8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x13dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13dbfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13DBFCu;
    {
        const bool branch_taken_0x13dbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBFCu;
        // 0x13dc00: 0x262500fc  addiu       $a1, $s1, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbfc) {
            ctx->pc = 0x13DC20u;
            goto label_13dc20;
        }
    }
    ctx->pc = 0x13DC04u;
label_13dc04:
    // 0x13dc04: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x13dc04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dc08: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x13dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13dc0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13DC0Cu;
    {
        const bool branch_taken_0x13dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC0Cu;
        // 0x13dc10: 0x26250104  addiu       $a1, $s1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc0c) {
            ctx->pc = 0x13DC20u;
            goto label_13dc20;
        }
    }
    ctx->pc = 0x13DC14u;
label_13dc14:
    // 0x13dc14: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x13dc14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dc18: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x13dc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13dc1c: 0x2625010c  addiu       $a1, $s1, 0x10C
    ctx->pc = 0x13dc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
label_13dc20:
    // 0x13dc20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13dc20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc24: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x13DC24u;
    SET_GPR_U32(ctx, 31, 0x13DC2Cu);
    ctx->pc = 0x13DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC24u;
    // 0x13dc28: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x13DC24u, 0x13DC2Cu)) {
        return;
    }
    ctx->pc = 0x13DC2Cu;
label_13dc2c:
    // 0x13dc2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13DC2Cu;
    {
        const bool branch_taken_0x13dc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC2Cu;
        // 0x13dc30: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc2c) {
            ctx->pc = 0x13DC50u;
            goto label_13dc50;
        }
    }
    ctx->pc = 0x13DC34u;
label_13dc34:
    // 0x13dc34: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x13dc34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dc38: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x13dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13dc3c: 0x26250114  addiu       $a1, $s1, 0x114
    ctx->pc = 0x13dc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 276));
    // 0x13dc40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13dc40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc44: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x13DC44u;
    SET_GPR_U32(ctx, 31, 0x13DC4Cu);
    ctx->pc = 0x13DC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC44u;
    // 0x13dc48: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x13DC44u, 0x13DC4Cu)) {
        return;
    }
    ctx->pc = 0x13DC4Cu;
label_13dc4c:
    // 0x13dc4c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13dc50:
    // 0x13dc50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13dc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13dc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dc58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13dc5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13dc60: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x13DC60u;
    SET_GPR_U32(ctx, 31, 0x13DC68u);
    ctx->pc = 0x13DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC60u;
    // 0x13dc64: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13DC60u, 0x13DC68u)) {
        return;
    }
    ctx->pc = 0x13DC68u;
label_13dc68:
    // 0x13dc68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dc6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13dc70: 0x5460ffc7  bnel        $v1, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x13DC70u;
    {
        const bool branch_taken_0x13dc70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dc70) {
            ctx->pc = 0x13DC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DC70u;
            // 0x13dc74: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13db90;
        }
    }
    ctx->pc = 0x13DC78u;
    // 0x13dc78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13dc78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13dc7c:
    // 0x13dc7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13dc7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13dc80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13dc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13dc84: 0x3e00008  jr          $ra
    ctx->pc = 0x13DC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC84u;
        // 0x13dc88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DC8Cu;
    // 0x13dc8c: 0x0  nop
    ctx->pc = 0x13dc8cu;
    // NOP
    ctx->pc = 0x13dc90u;
}
