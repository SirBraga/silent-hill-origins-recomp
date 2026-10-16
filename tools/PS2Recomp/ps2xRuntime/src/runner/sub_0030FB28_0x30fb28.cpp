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

// Function: sub_0030FB28
// Address: 0x30fb28 - 0x30fc68
void sub_0030FB28_0x30fb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FB28_0x30fb28");
#endif

    switch (ctx->pc) {
        case 0x30fb28u: goto label_30fb28;
        case 0x30fb2cu: goto label_30fb2c;
        case 0x30fb30u: goto label_30fb30;
        case 0x30fb34u: goto label_30fb34;
        case 0x30fb38u: goto label_30fb38;
        case 0x30fb3cu: goto label_30fb3c;
        case 0x30fb40u: goto label_30fb40;
        case 0x30fb44u: goto label_30fb44;
        case 0x30fb48u: goto label_30fb48;
        case 0x30fb4cu: goto label_30fb4c;
        case 0x30fb50u: goto label_30fb50;
        case 0x30fb54u: goto label_30fb54;
        case 0x30fb58u: goto label_30fb58;
        case 0x30fb5cu: goto label_30fb5c;
        case 0x30fb60u: goto label_30fb60;
        case 0x30fb64u: goto label_30fb64;
        case 0x30fb68u: goto label_30fb68;
        case 0x30fb6cu: goto label_30fb6c;
        case 0x30fb70u: goto label_30fb70;
        case 0x30fb74u: goto label_30fb74;
        case 0x30fb78u: goto label_30fb78;
        case 0x30fb7cu: goto label_30fb7c;
        case 0x30fb80u: goto label_30fb80;
        case 0x30fb84u: goto label_30fb84;
        case 0x30fb88u: goto label_30fb88;
        case 0x30fb8cu: goto label_30fb8c;
        case 0x30fb90u: goto label_30fb90;
        case 0x30fb94u: goto label_30fb94;
        case 0x30fb98u: goto label_30fb98;
        case 0x30fb9cu: goto label_30fb9c;
        case 0x30fba0u: goto label_30fba0;
        case 0x30fba4u: goto label_30fba4;
        case 0x30fba8u: goto label_30fba8;
        case 0x30fbacu: goto label_30fbac;
        case 0x30fbb0u: goto label_30fbb0;
        case 0x30fbb4u: goto label_30fbb4;
        case 0x30fbb8u: goto label_30fbb8;
        case 0x30fbbcu: goto label_30fbbc;
        case 0x30fbc0u: goto label_30fbc0;
        case 0x30fbc4u: goto label_30fbc4;
        case 0x30fbc8u: goto label_30fbc8;
        case 0x30fbccu: goto label_30fbcc;
        case 0x30fbd0u: goto label_30fbd0;
        case 0x30fbd4u: goto label_30fbd4;
        case 0x30fbd8u: goto label_30fbd8;
        case 0x30fbdcu: goto label_30fbdc;
        case 0x30fbe0u: goto label_30fbe0;
        case 0x30fbe4u: goto label_30fbe4;
        case 0x30fbe8u: goto label_30fbe8;
        case 0x30fbecu: goto label_30fbec;
        case 0x30fbf0u: goto label_30fbf0;
        case 0x30fbf4u: goto label_30fbf4;
        case 0x30fbf8u: goto label_30fbf8;
        case 0x30fbfcu: goto label_30fbfc;
        case 0x30fc00u: goto label_30fc00;
        case 0x30fc04u: goto label_30fc04;
        case 0x30fc08u: goto label_30fc08;
        case 0x30fc0cu: goto label_30fc0c;
        case 0x30fc10u: goto label_30fc10;
        case 0x30fc14u: goto label_30fc14;
        case 0x30fc18u: goto label_30fc18;
        case 0x30fc1cu: goto label_30fc1c;
        case 0x30fc20u: goto label_30fc20;
        case 0x30fc24u: goto label_30fc24;
        case 0x30fc28u: goto label_30fc28;
        case 0x30fc2cu: goto label_30fc2c;
        case 0x30fc30u: goto label_30fc30;
        case 0x30fc34u: goto label_30fc34;
        case 0x30fc38u: goto label_30fc38;
        case 0x30fc3cu: goto label_30fc3c;
        case 0x30fc40u: goto label_30fc40;
        case 0x30fc44u: goto label_30fc44;
        case 0x30fc48u: goto label_30fc48;
        case 0x30fc4cu: goto label_30fc4c;
        case 0x30fc50u: goto label_30fc50;
        case 0x30fc54u: goto label_30fc54;
        case 0x30fc58u: goto label_30fc58;
        case 0x30fc5cu: goto label_30fc5c;
        case 0x30fc60u: goto label_30fc60;
        case 0x30fc64u: goto label_30fc64;
        default: break;
    }

    ctx->pc = 0x30fb28u;

label_30fb28:
    // 0x30fb28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30fb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_30fb2c:
    // 0x30fb2c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x30fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_30fb30:
    // 0x30fb30: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x30fb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_30fb34:
    // 0x30fb34: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x30fb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_30fb38:
    // 0x30fb38: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x30fb38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_30fb3c:
    // 0x30fb3c: 0x309effff  andi        $fp, $a0, 0xFFFF
    ctx->pc = 0x30fb3cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_30fb40:
    // 0x30fb40: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x30fb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_30fb44:
    // 0x30fb44: 0x3d39018  mult        $s2, $fp, $s3
    ctx->pc = 0x30fb44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_30fb48:
    // 0x30fb48: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x30fb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_30fb4c:
    // 0x30fb4c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x30fb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_30fb50:
    // 0x30fb50: 0x27d10001  addiu       $s1, $fp, 0x1
    ctx->pc = 0x30fb50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_30fb54:
    // 0x30fb54: 0x30d7ffff  andi        $s7, $a2, 0xFFFF
    ctx->pc = 0x30fb54u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_30fb58:
    // 0x30fb58: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30fb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_30fb5c:
    // 0x30fb5c: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x30fb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_30fb60:
    // 0x30fb60: 0x2f3a018  mult        $s4, $s7, $s3
    ctx->pc = 0x30fb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_30fb64:
    // 0x30fb64: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x30fb64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_30fb68:
    // 0x30fb68: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x30fb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_30fb6c:
    // 0x30fb6c: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x30fb6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_30fb70:
    // 0x30fb70: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x30fb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_30fb74:
    // 0x30fb74: 0x2652000f  addiu       $s2, $s2, 0xF
    ctx->pc = 0x30fb74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
label_30fb78:
    // 0x30fb78: 0x26f00001  addiu       $s0, $s7, 0x1
    ctx->pc = 0x30fb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_30fb7c:
    // 0x30fb7c: 0x3252fff0  andi        $s2, $s2, 0xFFF0
    ctx->pc = 0x30fb7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65520);
label_30fb80:
    // 0x30fb80: 0x30b6ffff  andi        $s6, $a1, 0xFFFF
    ctx->pc = 0x30fb80u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_30fb84:
    // 0x30fb84: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x30fb84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_30fb88:
    // 0x30fb88: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x30fb88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_30fb8c:
    // 0x30fb8c: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x30fb8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_30fb90:
    // 0x30fb90: 0x2d39818  mult        $s3, $s6, $s3
    ctx->pc = 0x30fb90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_30fb94:
    // 0x30fb94: 0x2631000f  addiu       $s1, $s1, 0xF
    ctx->pc = 0x30fb94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
label_30fb98:
    // 0x30fb98: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x30fb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_30fb9c:
    // 0x30fb9c: 0x3231fff0  andi        $s1, $s1, 0xFFF0
    ctx->pc = 0x30fb9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65520);
label_30fba0:
    // 0x30fba0: 0x16a840  sll         $s5, $s6, 1
    ctx->pc = 0x30fba0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_30fba4:
    // 0x30fba4: 0x234a021  addu        $s4, $s1, $s4
    ctx->pc = 0x30fba4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_30fba8:
    // 0x30fba8: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x30fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_30fbac:
    // 0x30fbac: 0x3294fffc  andi        $s4, $s4, 0xFFFC
    ctx->pc = 0x30fbacu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65532);
label_30fbb0:
    // 0x30fbb0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x30fbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_30fbb4:
    // 0x30fbb4: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x30fbb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_30fbb8:
    // 0x30fbb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30fbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30fbbc:
    // 0x30fbbc: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x30fbbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_30fbc0:
    // 0x30fbc0: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x30fbc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_30fbc4:
    // 0x30fbc4: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x30fbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_30fbc8:
    // 0x30fbc8: 0x3210fffc  andi        $s0, $s0, 0xFFFC
    ctx->pc = 0x30fbc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65532);
label_30fbcc:
    // 0x30fbcc: 0x2139821  addu        $s3, $s0, $s3
    ctx->pc = 0x30fbccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_30fbd0:
    // 0x30fbd0: 0x3273fffc  andi        $s3, $s3, 0xFFFC
    ctx->pc = 0x30fbd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65532);
label_30fbd4:
    // 0x30fbd4: 0x275a821  addu        $s5, $s3, $s5
    ctx->pc = 0x30fbd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_30fbd8:
    // 0x30fbd8: 0x32b5ffff  andi        $s5, $s5, 0xFFFF
    ctx->pc = 0x30fbd8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_30fbdc:
    // 0x30fbdc: 0x40f809  jalr        $v0
label_30fbe0:
    if (ctx->pc == 0x30FBE0u) {
        ctx->pc = 0x30FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FBDCu;
        // 0x30fbe0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FBE4u;
        goto label_30fbe4;
    }
    ctx->pc = 0x30FBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30FBE4u);
        ctx->pc = 0x30FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FBDCu;
        // 0x30fbe0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FBDCu, 0x30FBE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30FBE4u;
label_30fbe4:
    // 0x30fbe4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30fbe4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30fbe8:
    // 0x30fbe8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30fbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30fbec:
    // 0x30fbec: 0x729021  addu        $s2, $v1, $s2
    ctx->pc = 0x30fbecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_30fbf0:
    // 0x30fbf0: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x30fbf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_30fbf4:
    // 0x30fbf4: 0x74a021  addu        $s4, $v1, $s4
    ctx->pc = 0x30fbf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_30fbf8:
    // 0x30fbf8: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x30fbf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_30fbfc:
    // 0x30fbfc: 0x739821  addu        $s3, $v1, $s3
    ctx->pc = 0x30fbfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_30fc00:
    // 0x30fc00: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x30fc00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
label_30fc04:
    // 0x30fc04: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x30fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
label_30fc08:
    // 0x30fc08: 0x246400a0  addiu       $a0, $v1, 0xA0
    ctx->pc = 0x30fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_30fc0c:
    // 0x30fc0c: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x30fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
label_30fc10:
    // 0x30fc10: 0xac740010  sw          $s4, 0x10($v1)
    ctx->pc = 0x30fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 20));
label_30fc14:
    // 0x30fc14: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x30fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
label_30fc18:
    // 0x30fc18: 0xac730018  sw          $s3, 0x18($v1)
    ctx->pc = 0x30fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 19));
label_30fc1c:
    // 0x30fc1c: 0xa47e001c  sh          $fp, 0x1C($v1)
    ctx->pc = 0x30fc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 30));
label_30fc20:
    // 0x30fc20: 0xa4760020  sh          $s6, 0x20($v1)
    ctx->pc = 0x30fc20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 22));
label_30fc24:
    // 0x30fc24: 0xa477001e  sh          $s7, 0x1E($v1)
    ctx->pc = 0x30fc24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 23));
label_30fc28:
    // 0x30fc28: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x30fc28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_30fc2c:
    // 0x30fc2c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x30fc2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_30fc30:
    // 0x30fc30: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x30fc30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30fc34:
    // 0x30fc34: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x30fc34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30fc38:
    // 0x30fc38: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30fc38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30fc3c:
    // 0x30fc3c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x30fc3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30fc40:
    // 0x30fc40: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x30fc40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30fc44:
    // 0x30fc44: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x30fc44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30fc48:
    // 0x30fc48: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x30fc48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30fc4c:
    // 0x30fc4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30fc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30fc50:
    // 0x30fc50: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x30fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_30fc54:
    // 0x30fc54: 0xac650090  sw          $a1, 0x90($v1)
    ctx->pc = 0x30fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 5));
label_30fc58:
    // 0x30fc58: 0xac600094  sw          $zero, 0x94($v1)
    ctx->pc = 0x30fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 0));
label_30fc5c:
    // 0x30fc5c: 0x3e00008  jr          $ra
label_30fc60:
    if (ctx->pc == 0x30FC60u) {
        ctx->pc = 0x30FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC5Cu;
        // 0x30fc60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FC64u;
        goto label_30fc64;
    }
    ctx->pc = 0x30FC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC5Cu;
        // 0x30fc60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FC64u;
label_30fc64:
    // 0x30fc64: 0x0  nop
    ctx->pc = 0x30fc64u;
    // NOP
    ctx->pc = 0x30fc68u;
}
